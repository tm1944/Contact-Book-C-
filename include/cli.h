#ifndef CLI
#define CLI
#include "contact.h"
#include <stddef.h>

void print_options();

Contact* add_contact(Contact* conn);

void list_contacts(const Contact *c_array, size_t n);

const Contact* find_contact(const Contact* contact_list, size_t n);
#endif
