// =============================================================================
//  Header
// =============================================================================

#include "math.h"
#include <stdlib.h>
#include <stdio.h>


// =============================================================================
//  VetFlt Methods
// =============================================================================

void VetFlt_setFlt(VetFlt obj, const float val) {
    for (uint32_t i=0U; i<obj.size; i++) {
        obj.vet[i] = val;
    }
}

void VetFlt_setZero(VetFlt obj) {
    VetFlt_setFlt(obj, 0.0F);
}

void VetFlt_print(VetFltIn obj) {
    printf("[");
    for (uint32_t i=0U; i<obj.size; i++) {
        printf("%f;",obj.vet[i]);
    }
    printf("]\n");
}
