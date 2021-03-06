#ifndef SMALLOC_H
#define SMALLOC_H

#include <unistd.h>

// ******** REQUIRED FUNCTIONS ******* // 
void* smalloc(size_t udata_size);
void* scalloc(size_t num, size_t udata_size);
void sfree(void* p);
void* srealloc(void* oldp, size_t udata_size);
size_t _num_free_blocks();
size_t _num_free_bytes();
size_t _num_allocated_blocks();
size_t _num_allocated_bytes();
size_t _num_meta_data_bytes();
size_t _size_meta_data();
size_t  _size_meta_data();

#endif //SMALLOC_H
