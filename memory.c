#include <stdlib.h>

#include "memory.h"

// Either allocates, frees, shrinks, or grows the allocation according to old_size and new_size.
void *reallocate(void *ptr, size_t old_size, size_t new_size) {
  if (new_size == 0) {
    free(ptr);
    return NULL;
  }

  void *result = realloc(ptr, new_size);
  if (result == NULL) exit(1);
  
  return result;
}