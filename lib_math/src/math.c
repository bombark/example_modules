// =============================================================================
//  Header
// =============================================================================

#include "math.h"
#include <stdlib.h>
#include <stdio.h>


// =============================================================================
//  Math
// =============================================================================

void Math_init(){

}

void Math_free(){

}

VetFlt Math_makeVetFlt(const uint32_t size) {
    VetFlt retval;
    retval.size = size;
    retval.vet = malloc(size*sizeof(float));
    VetFlt_setZero(retval);
    return retval;
}


// =============================================================================
//  Math Operations
// =============================================================================

void MathVetFlt_add(VetFltIn src_a, VetFltIn src_b, VetFltOut dst){
    for (uint32_t i=0U; i<dst.size; i++) {
        dst.vet[i] = src_a.vet[i] + src_b.vet[i];
    }
}

void MathVetFlt_sub(VetFltIn src_a, VetFltIn src_b, VetFltOut dst){
    for (uint32_t i=0U; i<dst.size; i++) {
        dst.vet[i] = src_a.vet[i] - src_b.vet[i];
    }
}

void MathVetFlt_mul(VetFltIn src_a, VetFltIn src_b, VetFltOut dst){
    for (uint32_t i=0U; i<dst.size; i++) {
        dst.vet[i] = src_a.vet[i] * src_b.vet[i];
    }
}

void MathVetFlt_div(VetFltIn src_a, VetFltIn src_b, VetFltOut dst){
    for (uint32_t i=0U; i<dst.size; i++) {
        dst.vet[i] = src_a.vet[i] / src_b.vet[i];
    }
}
