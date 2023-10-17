#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <string.h>
#include "operands.h"

#define MAX_INSTRUCTION_NAME 10
#define R_NUM_ASM 10
#define I_NUM_ASM 10
#define B_NUM_ASM 20
#define JAL_NUM_ASM 20

#define NUM_OF_R_VFUNCS 3
#define R_OPERAND 1
#define R_ASM 2

#define NUM_OF_I_VFUNCS 3
#define I_OPERAND 1
#define I_ASM 2

#define NUM_OF_L_VFUNCS 4
#define L_OPERAND 1
#define L_ASM 2
#define L_DATA 3

#define NUM_OF_S_VFUNCS 4
#define S_OPERAND 1
#define S_ASM 2
#define S_DATA 3

#define NUM_OF_B_VFUNCS 3
#define B_OPERAND 1
#define B_ASM 2

#define NUM_OF_JAL_VFUNCS 2
#define JAL_ASM 1


//虚函数表
struct object_header {
    void **vptr;
};

typedef struct {
    struct object_header header;
    char name[MAX_INSTRUCTION_NAME];
    char *type;
} Instruction;



void generate_R_operand(Instruction *inst){
    char filename[MAX_INSTRUCTION_NAME + 3 + strlen("asm_test/")];
    snprintf(filename, sizeof(filename), "asm_test/%s.S", inst->name);
    FILE *file = fopen(filename, "a");
    OperandsArray *operands_rs1 = NULL;
    OperandsArray *operands_rs2 = NULL;
    for (uint32_t i = 0; i < OperandsArraysSize; i++) {
        if (strcmp(OperandsArrays[i].name, inst->name) == 0 && strcmp(OperandsArrays[i].position, "rs1") == 0) {
            operands_rs1 = &OperandsArrays[i];
        }else if (strcmp(OperandsArrays[i].name, inst->name) == 0 && strcmp(OperandsArrays[i].position, "rs2") == 0) {
            operands_rs2 = &OperandsArrays[i];
        }
    }

    for(int i = 0; i < operands_rs1->size; ++i){
        fprintf(file, "    li  x%d, 0x%08x;\n", i+1, operands_rs1->operands[i]);
    }
    for(int i = 0; i < operands_rs2->size; ++i){
        fprintf(file, "    li  x%d, 0x%08x;\n", i+6, operands_rs1->operands[i]);
    }

    fclose(file);
}

int random_register() {
    int reg;
    do {
        reg = rand() % 32;  // Generate a random number between 0 and 31.
    } while (reg == 18 || reg == 19);
    return reg;
}

int random_register_1_5() {
    return rand() % 5 + 1;  // Generate a random number between 1 and 5.
}

int random_register_6_10() {
    return rand() % 5 + 6;  // Generate a random number between 6 and 10.
}

int random_register_1_3() {
    return rand() % 3 + 1;  // Generate a random number between 1 and 5.
}


void generate_R_asm(Instruction *inst){
    srand(time(NULL));
    char filename[MAX_INSTRUCTION_NAME + 3 + strlen("asm_test/")];
    snprintf(filename, sizeof(filename), "asm_test/%s.S", inst->name);
    FILE *file = fopen(filename, "a");
    for(int i = 1; i < R_NUM_ASM+3; ++i){
        if((i+10) == 18 || (i+10) == 19) {
            continue;
        }
        int rs1 = random_register_1_5();
        int rs2 = random_register_6_10();
        fprintf(file, "    %s  x%d, x%d, x%d;\n", inst->name, i+10, rs1, rs2);
    }
    for(int i = 0; i < R_NUM_ASM; ++i){
        int rd = random_register();
        int rs1 = random_register();
        int rs2 = random_register();
        fprintf(file, "    %s  x%d, x%d, x%d;\n", inst->name, rd, rs1, rs2);
    }  
    fclose(file);
}

Instruction *create_inst_R_object(char *name) {
    Instruction *inst = (Instruction *)malloc(sizeof(Instruction));
    strncpy(inst->name, name, MAX_INSTRUCTION_NAME-1);
    inst->name[MAX_INSTRUCTION_NAME-1] = '\0';  // Ensure null-termination
    inst->type = "R";
    inst->header.vptr = (void **)malloc(sizeof(void *) * NUM_OF_R_VFUNCS);  // 分配虚函数表内存
    inst->header.vptr[R_OPERAND] = (void *)generate_R_operand;
    inst->header.vptr[R_ASM] = (void *)generate_R_asm;
    return inst;
}

void generate_I_operand(Instruction *inst){
    char filename[MAX_INSTRUCTION_NAME + 3 + strlen("asm_test/")];
    snprintf(filename, sizeof(filename), "asm_test/%s.S", inst->name);
    FILE *file = fopen(filename, "a");
    OperandsArray *operands_rs1 = NULL;
    OperandsArray *operands_imm = NULL;
    for (uint32_t i = 0; i < OperandsArraysSize; i++) {
        if (strcmp(OperandsArrays[i].name, inst->name) == 0 && strcmp(OperandsArrays[i].position, "rs1") == 0) {
            operands_rs1 = &OperandsArrays[i];
        }else if (strcmp(OperandsArrays[i].name, inst->name) == 0 && strcmp(OperandsArrays[i].position, "imm") == 0) {
            operands_imm = &OperandsArrays[i];
        }
    }
    for(int i = 0; i < operands_rs1->size; ++i){
        fprintf(file, "    li  x%d, 0x%08x;\n", i+1, operands_rs1->operands[i]);
    }
    for(int i = 0; i < operands_imm->size; ++i){
        fprintf(file, "    li  x%d, 0x%08x;\n", i+6, operands_imm->operands[i]);
    }
    fclose(file);
}

void generate_I_asm(Instruction *inst){
    char filename[MAX_INSTRUCTION_NAME + 3 + strlen("asm_test/")];
    snprintf(filename, sizeof(filename), "asm_test/%s.S", inst->name);
    FILE *file = fopen(filename, "a");
    OperandsArray *operands_imm = NULL;
    for (uint32_t i = 0; i < OperandsArraysSize; i++) {
        if (strcmp(OperandsArrays[i].name, inst->name) == 0 && strcmp(OperandsArrays[i].position, "imm") == 0) {
            operands_imm = &OperandsArrays[i];
        }
    }   
    for(int i = 1; i < I_NUM_ASM+3; ++i){
        if((i+10) == 18 || (i+10) == 19) {
            continue;
        }
        int rs1 = random_register_1_5();
        int imm = random_register_1_5() - 1;
        fprintf(file, "    %s  x%d, x%d, 0x%08x;\n", inst->name, i+10, rs1, operands_imm->operands[imm]);
    }
    for(int i = 0; i < I_NUM_ASM; ++i){
        int rd = random_register();
        int rs1 = random_register();
        int imm= random_register_1_5();
        fprintf(file, "    %s  x%d, x%d, 0x%08x;\n", inst->name, rd, rs1, operands_imm->operands[imm]);
    }  
    fclose(file);
}

Instruction *create_inst_I_object(char *name) {
    Instruction *inst = (Instruction *)malloc(sizeof(Instruction));
    strncpy(inst->name, name, MAX_INSTRUCTION_NAME-1);
    inst->name[MAX_INSTRUCTION_NAME-1] = '\0';  // Ensure null-termination
    inst->type = "I";
    inst->header.vptr = (void **)malloc(sizeof(void *) * NUM_OF_I_VFUNCS);  // 分配虚函数表内存
    inst->header.vptr[I_OPERAND] = (void *)generate_I_operand;
    inst->header.vptr[I_ASM] = (void *)generate_I_asm;
    return inst;
}


void generate_L_operand(Instruction *inst){
    char filename[MAX_INSTRUCTION_NAME + 3 + strlen("asm_test/")];
    snprintf(filename, sizeof(filename), "asm_test/%s.S", inst->name);
    FILE *file = fopen(filename, "a");
    fprintf(file, "    la  x1, tdat;\n");
    fclose(file);
}

void generate_L_asm(Instruction *inst){
    char filename[MAX_INSTRUCTION_NAME + 3 + strlen("asm_test/")];
    snprintf(filename, sizeof(filename), "asm_test/%s.S", inst->name);
    FILE *file = fopen(filename, "a");
    OperandsArray *operands_offset = NULL;
    for (uint32_t i = 0; i < OperandsArraysSize; i++) {
        if (strcmp(OperandsArrays[i].name, inst->name) == 0 && strcmp(OperandsArrays[i].position, "offset") == 0) {
            operands_offset = &OperandsArrays[i];
        }
    }
    int step = 1;
    if (strcmp(inst->name, "lb") == 0 || strcmp(inst->name, "lbu") == 0) {
        step = 1; 
    } else if (strcmp(inst->name, "lh") == 0 || strcmp(inst->name, "lhu") == 0) {
        step = 2;
    } else if (strcmp(inst->name, "lw") == 0) {
        step = 4;
    } else {
        // Handle other cases here.
    }   
    for(int i = 0; i < operands_offset->size; ++i){
        fprintf(file, "    %s  x%d, %d(x1);\n", inst->name, i+2, operands_offset->operands[i]*step);
    }
    for(int i = 0; i < operands_offset->size; ++i){
        int rd = random_register();
        fprintf(file, "    %s  x%d, %d(x1);\n", inst->name, rd, operands_offset->operands[i]*step);
    }
    fclose(file);
}

void generate_L_data(Instruction *inst){
    char filename[MAX_INSTRUCTION_NAME + 3 + strlen("asm_test/")];
    snprintf(filename, sizeof(filename), "asm_test/%s.S", inst->name);
    FILE *file = fopen(filename, "a");
    OperandsArray *operands_value = NULL;
    for (uint32_t i = 0; i < OperandsArraysSize; i++) {
        if (strcmp(OperandsArrays[i].name, inst->name) == 0 && strcmp(OperandsArrays[i].position, "value") == 0) {
            operands_value = &OperandsArrays[i];
        }
    }
    fprintf(file, ".section  .data\n");
    fprintf(file, "tdat:\n");
    char *valuesize = NULL;
    if (strcmp(inst->name, "lb") == 0 || strcmp(inst->name, "lbu") == 0) {
        valuesize = ".byte"; 
    } else if (strcmp(inst->name, "lh") == 0 || strcmp(inst->name, "lhu") == 0) {
        valuesize = ".half";
    } else if (strcmp(inst->name, "lw") == 0) {
        valuesize = ".word";
    } else {
        // Handle other cases here.
    }
    for(int i = 0; i < operands_value->size; ++i){
        fprintf(file, "tdat%d:  %s 0x%08x;\n", i+1, valuesize, operands_value->operands[i]);
    }
    fclose(file);
}

Instruction *create_inst_L_object(char *name) {
    Instruction *inst = (Instruction *)malloc(sizeof(Instruction));
    strncpy(inst->name, name, MAX_INSTRUCTION_NAME-1);
    inst->name[MAX_INSTRUCTION_NAME-1] = '\0';  // Ensure null-termination
    inst->type = "L";
    inst->header.vptr = (void **)malloc(sizeof(void *) * NUM_OF_L_VFUNCS);  // 分配虚函数表内存
    inst->header.vptr[L_OPERAND] = (void *)generate_L_operand;
    inst->header.vptr[L_ASM] = (void *)generate_L_asm;
    inst->header.vptr[L_DATA] = (void *)generate_L_data;
    return inst;
}

void generate_S_operand(Instruction *inst){
    char filename[MAX_INSTRUCTION_NAME + 3 + strlen("asm_test/")];
    snprintf(filename, sizeof(filename), "asm_test/%s.S", inst->name);
    FILE *file = fopen(filename, "a");
    OperandsArray *operands_value = NULL;
    for (uint32_t i = 0; i < OperandsArraysSize; i++) {
        if (strcmp(OperandsArrays[i].name, inst->name) == 0 && strcmp(OperandsArrays[i].position, "value") == 0) {
            operands_value = &OperandsArrays[i];
        }
    }
    fprintf(file, "    la  x1, tdat;\n");
    for(int i = 0; i < operands_value->size; ++i){
        fprintf(file, "    li  x%d, 0x%08x;\n", i+2, operands_value->operands[i]);
    }
    fclose(file);
}

void generate_S_asm(Instruction *inst){
    char filename[MAX_INSTRUCTION_NAME + 3 + strlen("asm_test/")];
    snprintf(filename, sizeof(filename), "asm_test/%s.S", inst->name);
    FILE *file = fopen(filename, "a");
    OperandsArray *operands_offset = NULL;
    for (uint32_t i = 0; i < OperandsArraysSize; i++) {
        if (strcmp(OperandsArrays[i].name, inst->name) == 0 && strcmp(OperandsArrays[i].position, "offset") == 0) {
            operands_offset = &OperandsArrays[i];
        }
    }
    int step = 1;
    if (strcmp(inst->name, "sb") == 0 ) {
        step = 1; 
    } else if (strcmp(inst->name, "sh") == 0 ) {
        step = 2;
    } else if (strcmp(inst->name, "sw") == 0) {
        step = 4;
    } else {
        // Handle other cases here.
    }   
    for(int i = 0; i < operands_offset->size; ++i){
        fprintf(file, "    %s  x%d, %d(x1);\n", inst->name, i+2, operands_offset->operands[i]*step);
    }
    for(int i = 0; i < operands_offset->size; ++i){
        int rd = random_register();
        fprintf(file, "    %s  x%d, %d(x1);\n", inst->name, rd, operands_offset->operands[i]*step);
    }
    fclose(file);
}

void generate_S_data(Instruction *inst){
    char filename[MAX_INSTRUCTION_NAME + 3 + strlen("asm_test/")];
    snprintf(filename, sizeof(filename), "asm_test/%s.S", inst->name);
    FILE *file = fopen(filename, "a");
    OperandsArray *operands_value = NULL;
    for (uint32_t i = 0; i < OperandsArraysSize; i++) {
        if (strcmp(OperandsArrays[i].name, inst->name) == 0 && strcmp(OperandsArrays[i].position, "value_dontcare") == 0) {
            operands_value = &OperandsArrays[i];
        }
    }
    fprintf(file, ".section  .data\n");
    fprintf(file, "tdat:\n");
    char *valuesize = NULL;
    if (strcmp(inst->name, "sb") == 0 ) {
        valuesize = ".byte"; 
    } else if (strcmp(inst->name, "sh") == 0 ) {
        valuesize = ".half";
    } else if (strcmp(inst->name, "sw") == 0) {
        valuesize = ".word";
    } else {
        // Handle other cases here.
    }
    for(int i = 0; i < operands_value->size; ++i){
        fprintf(file, "tdat%d:  %s 0x%08x;\n", i+1, valuesize, operands_value->operands[i]);
    }
    fclose(file);
}

Instruction *create_inst_S_object(char *name) {
    Instruction *inst = (Instruction *)malloc(sizeof(Instruction));
    strncpy(inst->name, name, MAX_INSTRUCTION_NAME-1);
    inst->name[MAX_INSTRUCTION_NAME-1] = '\0';  // Ensure null-termination
    inst->type = "S";
    inst->header.vptr = (void **)malloc(sizeof(void *) * NUM_OF_S_VFUNCS);  // 分配虚函数表内存
    inst->header.vptr[S_OPERAND] = (void *)generate_S_operand;
    inst->header.vptr[S_ASM] = (void *)generate_S_asm;
    inst->header.vptr[S_DATA] = (void *)generate_S_data;
    return inst;
}

void generate_B_operand(Instruction *inst){
    char filename[MAX_INSTRUCTION_NAME + 3 + strlen("asm_test/")];
    snprintf(filename, sizeof(filename), "asm_test/%s.S", inst->name);
    FILE *file = fopen(filename, "a");
    OperandsArray *operands_value = NULL;
    for (uint32_t i = 0; i < OperandsArraysSize; i++) {
        if (strcmp(OperandsArrays[i].name, inst->name) == 0 && strcmp(OperandsArrays[i].position, "value") == 0) {
            operands_value = &OperandsArrays[i];
        }
    }
    for(int i = 0; i < operands_value->size; ++i){
        fprintf(file, "    li  x%d, 0x%08x;\n", i+1, operands_value->operands[i]);
    }
    fclose(file);
}

void generate_B_asm(Instruction *inst){
    char filename[MAX_INSTRUCTION_NAME + 3 + strlen("asm_test/")];
    snprintf(filename, sizeof(filename), "asm_test/%s.S", inst->name);
    FILE *file = fopen(filename, "a");
    fprintf(file, "    %s  x1, x1, 1f;\n", inst->name);
    for(int i = 1; i < B_NUM_ASM+1; ++i){
        int rs1 = random_register_1_3();
        int rs2 = random_register_1_3();
        fprintf(file, "%d:  %s  x%d, x%d, %df;\n", i, inst->name, rs1, rs2, i+1);
    }
    fprintf(file, "21:\n");
    fclose(file);
}

Instruction *create_inst_B_object(char *name) {
    Instruction *inst = (Instruction *)malloc(sizeof(Instruction));
    strncpy(inst->name, name, MAX_INSTRUCTION_NAME-1);
    inst->name[MAX_INSTRUCTION_NAME-1] = '\0';  // Ensure null-termination
    inst->type = "B";
    inst->header.vptr = (void **)malloc(sizeof(void *) * NUM_OF_B_VFUNCS);  // 分配虚函数表内存
    inst->header.vptr[B_OPERAND] = (void *)generate_B_operand;
    inst->header.vptr[B_ASM] = (void *)generate_B_asm;
    return inst;
}

void generate_JAL_asm(Instruction *inst){
    char filename[MAX_INSTRUCTION_NAME + 3 + strlen("asm_test/")];
    snprintf(filename, sizeof(filename), "asm_test/%s.S", inst->name);
    FILE *file = fopen(filename, "a");
    fprintf(file, "    %s  1f;\n", inst->name);
    for(int i = 1; i < JAL_NUM_ASM+1; ++i){
        fprintf(file, "%d:  %s  %df;\n", i, inst->name, i+1);
    }
    fprintf(file, "21:\n");
    fclose(file);
}

Instruction *create_inst_JAL_object(char *name) {
    Instruction *inst = (Instruction *)malloc(sizeof(Instruction));
    strncpy(inst->name, name, MAX_INSTRUCTION_NAME-1);
    inst->name[MAX_INSTRUCTION_NAME-1] = '\0';  // Ensure null-termination
    inst->type = "JAL";
    inst->header.vptr = (void **)malloc(sizeof(void *) * NUM_OF_JAL_VFUNCS);  // 分配虚函数表内存
    inst->header.vptr[JAL_ASM] = (void *)generate_JAL_asm;
    return inst;
}

void print_instruction_names(Instruction *assembly_test[], size_t n) {
    for (size_t i = 0; i < n; i++) {
        printf("%s\n", assembly_test[i]->name);
    }
}

void generate_data_section(Instruction *inst){
    if(strcmp(inst->type, "L")==0){
        ((void (*)(Instruction *inst))(inst->header.vptr[L_DATA]))(inst);        
    } else if(strcmp(inst->type, "S")==0){
        ((void (*)(Instruction *inst))(inst->header.vptr[S_DATA]))(inst);
    } else {
        // Handle other cases here.
    }

}

void generate_prefix(Instruction *inst){
    char filename[MAX_INSTRUCTION_NAME + 3 + strlen("asm_test/")];
    snprintf(filename, sizeof(filename), "asm_test/%s.S", inst->name);
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        fprintf(stderr, "Could not open file %s\n", filename);
        return;
    }
    fprintf(file, ".globl %s\n", inst->name);
    fprintf(file, ".section .text\n");
    fprintf(file, "\n%s:\n", inst->name);
    fprintf(file, "    addi s2, ra, 0\n");
    fclose(file);
};

void generate_postfix(Instruction *inst){
    char filename[MAX_INSTRUCTION_NAME + 3 + strlen("asm_test/")];
    snprintf(filename, sizeof(filename), "asm_test/%s.S", inst->name);
    FILE *file = fopen(filename, "a");
    fprintf(file, "    mv ra, s2 \n");
    fprintf(file, "    ret\n");
    fclose(file);
};

void generate_operand(Instruction *inst){
    if(strcmp(inst->type, "R")==0){
        ((void (*)(Instruction *inst))(inst->header.vptr[R_OPERAND]))(inst);        
    } else if(strcmp(inst->type, "I")==0){
        ((void (*)(Instruction *inst))(inst->header.vptr[I_OPERAND]))(inst);
    } else if(strcmp(inst->type, "L")==0){
        ((void (*)(Instruction *inst))(inst->header.vptr[L_OPERAND]))(inst);
    } else if(strcmp(inst->type, "S")==0){
        ((void (*)(Instruction *inst))(inst->header.vptr[S_OPERAND]))(inst);
    } else if(strcmp(inst->type, "B")==0){
        ((void (*)(Instruction *inst))(inst->header.vptr[B_OPERAND]))(inst);
    }
};

void generate_asm(Instruction *inst){
    if(strcmp(inst->type, "R")==0){
        ((void (*)(Instruction *inst))(inst->header.vptr[R_ASM]))(inst);        
    } else if(strcmp(inst->type, "I")==0){
        ((void (*)(Instruction *inst))(inst->header.vptr[I_ASM]))(inst);
    } else if(strcmp(inst->type, "L")==0){
        ((void (*)(Instruction *inst))(inst->header.vptr[L_ASM]))(inst);
    } else if(strcmp(inst->type, "S")==0){
        ((void (*)(Instruction *inst))(inst->header.vptr[S_ASM]))(inst);
    } else if(strcmp(inst->type, "B")==0){
        ((void (*)(Instruction *inst))(inst->header.vptr[B_ASM]))(inst);
    } else if(strcmp(inst->type, "JAL")==0){
        ((void (*)(Instruction *inst))(inst->header.vptr[JAL_ASM]))(inst);
    } else {
        printf("Not implemented\n");        
    }
};



int main(){

    Instruction *assembly_test[] = {
        //R-type instructions
        create_inst_R_object("add"),
        create_inst_R_object("sub"),
        create_inst_R_object("xor"),
        create_inst_R_object("or"),
        create_inst_R_object("and"),
        create_inst_R_object("sll"),
        create_inst_R_object("srl"),
        create_inst_R_object("sra"),
        create_inst_R_object("slt"),
        //I-type instructions
        create_inst_I_object("addi"),
        create_inst_I_object("xori"),
        create_inst_I_object("ori"),
        create_inst_I_object("andi"),
        create_inst_I_object("slli"),
        create_inst_I_object("srli"),
        create_inst_I_object("srai"),
        create_inst_I_object("slti"),
        //Load instructions
        create_inst_L_object("lb"),
        create_inst_L_object("lh"),
        create_inst_L_object("lw"),
        create_inst_L_object("lbu"),
        create_inst_L_object("lhu"),
        //Store instructions
        create_inst_S_object("sb"),
        create_inst_S_object("sh"),
        create_inst_S_object("sw"),
        //Branch instructions
        create_inst_B_object("beq"),
        create_inst_B_object("bne"),
        create_inst_B_object("blt"),
        create_inst_B_object("bge"),
        create_inst_B_object("bltu"),
        create_inst_B_object("bgeu"),
        create_inst_JAL_object("jal"),
    };

    size_t n = sizeof(assembly_test) / sizeof(assembly_test[0]);
    // print_instruction_names(assembly_test, n);
    
    for (size_t i = 0; i < n; i++) {
        generate_prefix(assembly_test[i]);
        generate_operand(assembly_test[i]);
        generate_asm(assembly_test[i]);
        generate_postfix(assembly_test[i]);
        generate_data_section(assembly_test[i]);
    }


    return 0;
}