// =============================================================================
//  Header
// =============================================================================

#include "thread.h"
#include "sensor.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

// =============================================================================
//  Thread
// =============================================================================

class Thread : ISensorSystem {
public:
    Sensor mSensor;
    pthread_t mThreadId;
    bool mIsOk;

public:
    Thread() : mSensor(*this) {
        pthread_create(&mThreadId, NULL, Thread::ctrl_main, this);
    }

    // Control of the thread
    static void* ctrl_main(void* _self) {
        Thread& self = *static_cast<Thread*>(_self);
        self.mIsOk = true;
        self.mSensor.start();

        while (self.mIsOk) {
            const int value = self.mSensor.readValue();
            printf("opa %d\n", value);
            sleep(1);
        }

        self.mSensor.stop();
        return NULL;
    }

    // Interface between thread and the sensor
    // Executed by sensor
    void putError(int code) {
        mIsOk = false;
        printf("error\n");
    }

};


// =============================================================================
//  Executed by System
// =============================================================================

void ThreadSystem::makeThread(){
    mThreads = new Thread();
}

void ThreadSystem::joinThread(){
    void* retval;
    pthread_join(mThreads.mThreadId, &retval);
}

void ThreadSystem::getValue(){
    mThreads->join();
}
