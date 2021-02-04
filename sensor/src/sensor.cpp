// =============================================================================
//  Header
// =============================================================================

#include "sensor.h"


// =============================================================================
//  Sensor / Real Implementation
// =============================================================================

Sensor::Sensor(ISensorSystem& psystem)
    : system(psystem)
{

}

void Sensor::start() {

}

void Sensor::stop() {

}

int Sensor::readValue() {
    static int value = 0;
    value += 1;
    if ( value == 5 ) {
        system.putError(-1);
    }
    return value;
}
