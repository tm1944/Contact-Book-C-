#ifndef STORAGE
#define STORAGE

#include "contact.h"
#include <stddef.h>

size_t load_from_file(Contact *c);

void save_to_file(const Contact *c, size_t n);

#endif