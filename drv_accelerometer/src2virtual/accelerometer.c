// =============================================================================
//  Header
// =============================================================================

#include <stdio.h>
#include <czmq.h>
#include <zmq.h>
#include <pthread.h>

typedef struct {
    pthread_t id;
    zsock_t *pull;
} AccelerometerDrv;

AccelerometerDrv gDrv;


// =============================================================================
//  Functions
// =============================================================================

void* accelerometer_ctrl(void* args) {
    while (true) {
        printf("esperando\n");
        char *string = zstr_recv (gDrv.pull);
        puts (string);
        zstr_free (&string);
    }
}

void accelerometer_start() {
    printf("accelerometer init\n");
    gDrv.pull = zsock_new_pull ("tcp://127.0.0.1:5555");
    pthread_create(&gDrv.id, NULL, accelerometer_ctrl, NULL);
}

void accelerometer_stop() {
    //zsock_destroy (&gDrv.pull);
}
