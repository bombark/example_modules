// =============================================================================
//  Header
// =============================================================================

#include <stdint.h>


// =============================================================================
//  VetFlt
// =============================================================================

typedef struct {
    uint32_t size;
    float* vet;
} VetFlt;

typedef const VetFlt VetFltIn;
typedef VetFlt       VetFltOut;

inline uint32_t VetFlt_size(VetFlt obj){return obj.size;}
void VetFlt_setFlt(VetFlt obj, const float val);
void VetFlt_setZero(VetFlt obj);
void VetFlt_print(VetFltIn obj);


// =============================================================================
//  Math
// =============================================================================

void Math_init();
void Math_free();
VetFlt Math_makeVetFlt(const uint32_t size);
