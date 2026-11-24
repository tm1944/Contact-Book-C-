#include "contact.h"
#include <stdio.h>

void print_contact(const Contact *contact){
    printf("{ Name: %s, Number: %s }\n", contact->name, contact->phone_num);
}
