#ifndef STORAGE
#define STORAGE

#include "contact.h"
#include <stddef.h>

void load_from_file(const Contact *c);

void save_to_file(const Contact *c, size_t n);

#endif