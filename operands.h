//operands.h

typedef struct {
    char *name;
    char *position;
    uint32_t *operands;
    uint32_t size;
} OperandsArray;

extern OperandsArray OperandsArrays[];
extern const uint32_t OperandsArraysSize;

