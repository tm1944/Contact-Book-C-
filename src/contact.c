#include "contact.h"
#include <stdio.h>

void print_contact(const Contact *contact){
    printf("Name: %s\n", contact->name);
    printf("Number: %s\n", contact->phone_num);
}
