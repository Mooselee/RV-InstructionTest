// operands.c
#include <stdint.h>
#include "operands.h"
#define SEXT_IMM(x) ((x) | (-(((x) >> 11) & 1) << 11)) //signed extension

//R-type
uint32_t ADD_operands_rs1[] = {
    0x00000000,
    0x00000007,
    0x00007fff,
    0x80000000,
    0xffffffff        
};
uint32_t ADD_operands_rs2[] = {
    0x00000000,
    0x00000007,
    0x00007fff,
    0xffff8000,
    0xffffffff         
};

uint32_t SUB_operands_rs1[] = {
    0x00000000,
    0x00000007,
    0x00007fff,
    0x80000000,
    0xffffffff        
};
uint32_t SUB_operands_rs2[] = {
    0x00000000,
    0x00000007,
    0x00007fff,
    0xffff8000,
    0xffffffff         
};

uint32_t XOR_operands_rs1[] = {
    0x00000000,
    0xff00ff00,
    0x0ff00ff0,
    0x00ff00ff,
    0xf00ff00f      
};
uint32_t XOR_operands_rs2[] = {
    0x00000000,
    0x0f0f0f0f,
    0xf0f0f0f0,
    0x00ff00ff,
    0xff00ff00      
};

uint32_t OR_operands_rs1[] = {
    0x00000000,
    0xff00ff00,
    0x0ff00ff0,
    0x00ff00ff,
    0xf00ff00f      
};
uint32_t OR_operands_rs2[] = {
    0x00000000,
    0x0f0f0f0f,
    0xf0f0f0f0,
    0x00ff00ff,
    0xff00ff00      
};

uint32_t AND_operands_rs1[] = {
    0x00000000,
    0xff00ff00,
    0x0ff00ff0,
    0x00ff00ff,
    0xf00ff00f     
};
uint32_t AND_operands_rs2[] = {
    0x00000000,
    0x0f0f0f0f,
    0xf0f0f0f0,
    0xff00ff00,
    0x00f000f0     
};

uint32_t SLL_operands_rs1[] = {
    0x00000000,
    0x00000001,
    0x00007fff,
    0x21212121,
    0xffffffff        
};
uint32_t SLL_operands_rs2[] = {
    0,
    1,
    7,
    14,
    31        
};

uint32_t SRL_operands_rs1[] = {
    0x00000000,
    0x00000001,
    0x21212121,
    0xffff8000,
    0xffffffff        
};
uint32_t SRL_operands_rs2[] = {
    0,
    1,
    7,
    14,
    31        
};

uint32_t SRA_operands_rs1[] = {
    0x00000000,
    0x00000001,
    0x80000000,
    0x81818181,
    0x7fffffff        
};
uint32_t SRA_operands_rs2[] = {
    0,
    1,
    7,
    14,
    31        
};

uint32_t SLT_operands_rs1[] = {
    0x00000000,
    0x00000001,
    0x00000007,
    0x80000000,
    0x7fffffff        
};
uint32_t SLT_operands_rs2[] = {
    0x00000000,
    0x00000007,
    0x00007fff,
    0xffff8000,
    0xffffffff        
};


//I-type
uint32_t ADDI_operands_rs1[] = {
    0x00000000,
    0x00007fff,
    0x80000000,
    0x7fffffff,
    0xffffffff
};
uint32_t ADDI_operands_imm[] = {
    SEXT_IMM(0x000),
    SEXT_IMM(0x007),
    SEXT_IMM(0x800),
    SEXT_IMM(0x7ff),
    SEXT_IMM(0xfff)
};

uint32_t XORI_operands_rs1[] = {
    0x00000000,
    0x00007fff,
    0x80000000,
    0x7fffffff,
    0xffffffff
};
uint32_t XORI_operands_imm[] = {
    SEXT_IMM(0x000),
    SEXT_IMM(0x007),
    SEXT_IMM(0x800),
    SEXT_IMM(0x7ff),
    SEXT_IMM(0xfff)
};

uint32_t ORI_operands_rs1[] = {
    0x00000000,
    0xff00ff00,
    0x0ff00ff0,
    0x00ff00ff,
    0xf00ff00f
};
uint32_t ORI_operands_imm[] = {
    SEXT_IMM(0x000),
    SEXT_IMM(0xf0f),
    SEXT_IMM(0x0f0),
    SEXT_IMM(0x70f),
    SEXT_IMM(0xfff)
};

uint32_t ANDI_operands_rs1[] = {
    0x00000000,
    0xff00ff00,
    0x0ff00ff0,
    0x00ff00ff,
    0xf00ff00f
};
uint32_t ANDI_operands_imm[] = {
    SEXT_IMM(0x000),
    SEXT_IMM(0xf0f),
    SEXT_IMM(0x0f0),
    SEXT_IMM(0x70f),
    SEXT_IMM(0xfff)
};

uint32_t SLLI_operands_rs1[] = {
    0x00000000,
    0x00000001,
    0x00007fff,
    0x21212121,
    0xffffffff
};
uint32_t SLLI_operands_imm[] = {
    SEXT_IMM(0),
    SEXT_IMM(1),
    SEXT_IMM(7),
    SEXT_IMM(14),
    SEXT_IMM(31)
};

uint32_t SRLI_operands_rs1[] = {
    0x00000000,
    0x0000ffff,
    0x21212121,
    0xffff8000,
    0xffffffff
};
uint32_t SRLI_operands_imm[] = {
    SEXT_IMM(0),
    SEXT_IMM(1),
    SEXT_IMM(7),
    SEXT_IMM(14),
    SEXT_IMM(31)
};

uint32_t SRAI_operands_rs1[] = {
    0x00000000,
    0x0000ffff,
    0x80000000,
    0x7fffffff,
    0x81818181
};
uint32_t SRAI_operands_imm[] = {
    SEXT_IMM(0),
    SEXT_IMM(1),
    SEXT_IMM(7),
    SEXT_IMM(14),
    SEXT_IMM(31)
};

uint32_t SLTI_operands_rs1[] = {
    0x00000000,
    0x00000007,
    0x80000000,
    0x7fffffff,
    0xffffffff
};
uint32_t SLTI_operands_imm[] = {
    SEXT_IMM(0x000),
    SEXT_IMM(0x007),
    SEXT_IMM(0x7ff),
    SEXT_IMM(0x800),
    SEXT_IMM(0xfff)
};

uint32_t LB_operands_value[] = {
    0xff,
    0x00,
    0xf0,
    0x0f,
    0xff,
    0x00,
    0xf0,
    0x0f,
    0xf0,
    0x0f
};
uint32_t LB_operands_offset[] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9
};

uint32_t LH_operands_value[] = {
    0x000f,
    0x00f0,
    0x00ff,
    0x0f00,
    0x0f0f,
    0x0ff0,
    0x0fff,
    0xf000,
    0xff00,
    0xffff
};
uint32_t LH_operands_offset[] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9
};

uint32_t LW_operands_value[] = {
    0x00ff00ff,
    0xff00ff00,
    0x0ff00ff0,
    0xf00ff00f,
    0x00ff00ff,
    0xff00ff00,
    0x0ff00ff0,
    0xf00ff00f,
    0xff00ff00,
    0xffffffff
};
uint32_t LW_operands_offset[] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9
};

uint32_t LBU_operands_value[] = {
    0xff,
    0x00,
    0xf0,
    0x0f,
    0xff,
    0x00,
    0xf0,
    0x0f,
    0xf0,
    0x0f
};
uint32_t LBU_operands_offset[] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9
};

uint32_t LHU_operands_value[] = {
    0x000f,
    0x00f0,
    0x00ff,
    0x0f00,
    0x0f0f,
    0x0ff0,
    0x0fff,
    0xf000,
    0xff00,
    0xffff
};
uint32_t LHU_operands_offset[] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9
};

uint32_t SB_operands_value[] = {
    0xffffffaa,
    0x00000000,
    0xffffefa0,
    0x0000000a,
    0xffffffaa,
    0x00000000,
    0xffffefa0,
    0x0000000a,
    0xffffffaa,
    0xffffffff
};
uint32_t SB_operands_value_dontcare[] = {
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef,
    0xef
};
uint32_t SB_operands_offset[] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9
};

uint32_t SH_operands_value[] = {
    0xffffffaa,
    0x00000000,
    0xffffefa0,
    0x0000000a,
    0x12345678,
    0x00000000,
    0xffffefa0,
    0x00003098,
    0xffffffaa,
    0xffffffff
};
uint32_t SH_operands_value_dontcare[] = {
    0xbeef,
    0xbeef,
    0xbeef,
    0xbeef,
    0xbeef,
    0xbeef,
    0xbeef,
    0xbeef,
    0xbeef,
    0xbeef
};
uint32_t SH_operands_offset[] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9
};

uint32_t SW_operands_value[] = {
    0xffffffaa,
    0x00000000,
    0xffffefa0,
    0x0000000a,
    0x12345678,
    0xa00aa00a,
    0x0aa00aa0,
    0x00003098,
    0xaa00aa00,
    0xffffffff
};
uint32_t SW_operands_value_dontcare[] = {
    0xdeadbeef,
    0xdeadbeef,
    0xdeadbeef,
    0xdeadbeef,
    0xdeadbeef,
    0xdeadbeef,
    0xdeadbeef,
    0xdeadbeef,
    0xdeadbeef,
    0xdeadbeef
};
uint32_t SW_operands_offset[] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9
};

uint32_t BEQ_operands[] = {
    0,
    1,
    -1
};

uint32_t BNE_operands[] = {
    0,
    1,
    -1
};

uint32_t BLT_operands[] = {
    0,
    1,
    -1
};

uint32_t BGE_operands[] = {
    0,
    1,
    -1
};

uint32_t BLTU_operands[] = {
    0x00000000,
    0xfffffffe,
    0xffffffff
};

uint32_t BGEU_operands[] = {
    0x00000000,
    0xfffffffe,
    0xffffffff
};



OperandsArray OperandsArrays[] = {
    //R-type
    {"add", "rs1", ADD_operands_rs1, sizeof(ADD_operands_rs1)/sizeof(ADD_operands_rs1[0])},
    {"add", "rs2", ADD_operands_rs2, sizeof(ADD_operands_rs2)/sizeof(ADD_operands_rs2[0])},
    {"sub", "rs1", SUB_operands_rs1, sizeof(SUB_operands_rs1)/sizeof(SUB_operands_rs1[0])},
    {"sub", "rs2", SUB_operands_rs2, sizeof(SUB_operands_rs2)/sizeof(SUB_operands_rs2[0])},
    {"xor", "rs1", XOR_operands_rs1, sizeof(XOR_operands_rs1)/sizeof(XOR_operands_rs1[0])},
    {"xor", "rs2", XOR_operands_rs2, sizeof(XOR_operands_rs2)/sizeof(XOR_operands_rs2[0])},
    {"or", "rs1", OR_operands_rs1, sizeof(OR_operands_rs1)/sizeof(OR_operands_rs1[0])},
    {"or", "rs2", OR_operands_rs2, sizeof(OR_operands_rs2)/sizeof(OR_operands_rs2[0])},
    {"and", "rs1", AND_operands_rs1, sizeof(AND_operands_rs1)/sizeof(AND_operands_rs1[0])},
    {"and", "rs2", AND_operands_rs2, sizeof(AND_operands_rs2)/sizeof(AND_operands_rs2[0])},
    {"sll", "rs1", SLL_operands_rs1, sizeof(SLL_operands_rs1)/sizeof(SLL_operands_rs1[0])},
    {"sll", "rs2", SLL_operands_rs2, sizeof(SLL_operands_rs2)/sizeof(SLL_operands_rs2[0])},
    {"srl", "rs1", SRL_operands_rs1, sizeof(SRL_operands_rs1)/sizeof(SRL_operands_rs1[0])},
    {"srl", "rs2", SRL_operands_rs2, sizeof(SRL_operands_rs2)/sizeof(SRL_operands_rs2[0])},
    {"sra", "rs1", SRA_operands_rs1, sizeof(SRA_operands_rs1)/sizeof(SRA_operands_rs1[0])},
    {"sra", "rs2", SRA_operands_rs2, sizeof(SRA_operands_rs2)/sizeof(SRA_operands_rs2[0])},
    {"slt", "rs1", SLT_operands_rs1, sizeof(SLT_operands_rs1)/sizeof(SLT_operands_rs1[0])},
    {"slt", "rs2", SLT_operands_rs2, sizeof(SLT_operands_rs2)/sizeof(SLT_operands_rs2[0])},


    //I-type
    {"addi", "rs1", ADDI_operands_rs1, sizeof(ADDI_operands_rs1)/sizeof(ADDI_operands_rs1[0])},
    {"addi", "imm", ADDI_operands_imm, sizeof(ADDI_operands_imm)/sizeof(ADDI_operands_imm[0])},
    {"xori", "rs1", XORI_operands_rs1, sizeof(XORI_operands_rs1)/sizeof(XORI_operands_rs1[0])},
    {"xori", "imm", XORI_operands_imm, sizeof(XORI_operands_imm)/sizeof(XORI_operands_imm[0])},
    {"ori", "rs1", ORI_operands_rs1, sizeof(ORI_operands_rs1)/sizeof(ORI_operands_rs1[0])},
    {"ori", "imm", ORI_operands_imm, sizeof(ORI_operands_imm)/sizeof(ORI_operands_imm[0])},
    {"andi", "rs1", ANDI_operands_rs1, sizeof(ANDI_operands_rs1)/sizeof(ANDI_operands_rs1[0])},
    {"andi", "imm", ANDI_operands_imm, sizeof(ANDI_operands_imm)/sizeof(ANDI_operands_imm[0])},
    {"slli", "rs1", SLLI_operands_rs1, sizeof(SLLI_operands_rs1)/sizeof(SLLI_operands_rs1[0])},
    {"slli", "imm", SLLI_operands_imm, sizeof(SLLI_operands_imm)/sizeof(SLLI_operands_imm[0])},   
    {"srli", "rs1", SRLI_operands_rs1, sizeof(SRLI_operands_rs1)/sizeof(SRLI_operands_rs1[0])},
    {"srli", "imm", SRLI_operands_imm, sizeof(SRLI_operands_imm)/sizeof(SRLI_operands_imm[0])},   
    {"srai", "rs1", SRAI_operands_rs1, sizeof(SRAI_operands_rs1)/sizeof(SRAI_operands_rs1[0])},
    {"srai", "imm", SRAI_operands_imm, sizeof(SRAI_operands_imm)/sizeof(SRAI_operands_imm[0])},   
    {"slti", "rs1", SLTI_operands_rs1, sizeof(SLTI_operands_rs1)/sizeof(SLTI_operands_rs1[0])},
    {"slti", "imm", SLTI_operands_imm, sizeof(SLTI_operands_imm)/sizeof(SLTI_operands_imm[0])},   

    //Load instuctions
    {"lb", "value", LB_operands_value, sizeof(LB_operands_value)/sizeof(LB_operands_value[0])},   
    {"lb", "offset", LB_operands_offset, sizeof(LB_operands_offset)/sizeof(LB_operands_offset[0])}, 
    {"lh", "value", LH_operands_value, sizeof(LH_operands_value)/sizeof(LH_operands_value[0])},   
    {"lh", "offset", LH_operands_offset, sizeof(LH_operands_offset)/sizeof(LH_operands_offset[0])}, 
    {"lw", "value", LW_operands_value, sizeof(LW_operands_value)/sizeof(LW_operands_value[0])},   
    {"lw", "offset", LW_operands_offset, sizeof(LW_operands_offset)/sizeof(LW_operands_offset[0])}, 
    {"lbu", "value", LBU_operands_value, sizeof(LBU_operands_value)/sizeof(LBU_operands_value[0])},   
    {"lbu", "offset", LBU_operands_offset, sizeof(LBU_operands_offset)/sizeof(LBU_operands_offset[0])}, 
    {"lhu", "value", LHU_operands_value, sizeof(LHU_operands_value)/sizeof(LHU_operands_value[0])},   
    {"lhu", "offset", LHU_operands_offset, sizeof(LHU_operands_offset)/sizeof(LHU_operands_offset[0])}, 
    {"sb", "value", SB_operands_value, sizeof(SB_operands_value)/sizeof(SB_operands_value[0])},   
    {"sb", "value_dontcare", SB_operands_value_dontcare, sizeof(SB_operands_value_dontcare)/sizeof(SB_operands_value_dontcare[0])},   
    {"sb", "offset", SB_operands_offset, sizeof(SB_operands_offset)/sizeof(SB_operands_offset[0])}, 
    {"sh", "value", SH_operands_value, sizeof(SH_operands_value)/sizeof(SH_operands_value[0])},   
    {"sh", "value_dontcare", SH_operands_value_dontcare, sizeof(SH_operands_value_dontcare)/sizeof(SH_operands_value_dontcare[0])},   
    {"sh", "offset", SH_operands_offset, sizeof(SH_operands_offset)/sizeof(SH_operands_offset[0])}, 
    {"sw", "value", SW_operands_value, sizeof(SW_operands_value)/sizeof(SW_operands_value[0])},   
    {"sw", "value_dontcare", SW_operands_value_dontcare, sizeof(SW_operands_value_dontcare)/sizeof(SW_operands_value_dontcare[0])},   
    {"sw", "offset", SW_operands_offset, sizeof(SW_operands_offset)/sizeof(SW_operands_offset[0])},
    {"beq", "value", BEQ_operands, sizeof(BEQ_operands)/sizeof(BEQ_operands[0])},
    {"bne", "value", BNE_operands, sizeof(BNE_operands)/sizeof(BNE_operands[0])},
    {"blt", "value", BLT_operands, sizeof(BLT_operands)/sizeof(BLT_operands[0])},
    {"bge", "value", BGE_operands, sizeof(BGE_operands)/sizeof(BGE_operands[0])},
    {"bltu", "value", BLTU_operands, sizeof(BLTU_operands)/sizeof(BLTU_operands[0])},
    {"bgeu", "value", BGEU_operands, sizeof(BGEU_operands)/sizeof(BGEU_operands[0])},

};

const uint32_t OperandsArraysSize = sizeof(OperandsArrays)/sizeof(OperandsArrays[0]);
