#ifndef CLOX_VM_H
#define CLOX_VM_H

#include "chunk.h"

typedef struct {
  Chunk *chunk;
  uint8_t *ip; // Instruction Pointer
} VM;

typedef enum {
  INTERPRET_OK,
  INTERPRET_COMPILE_ERR,
  INTERPRET_RUNTIME_ERR
} InterpretResult;

void init_vm();
void free_vm();
InterpretResult interpret(Chunk *chunk);

#endif