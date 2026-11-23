#ifndef CONTACTS
#define CONTACTS

#include <stdio.h>

typedef struct {
    char name[20];
    char phone_num[13];

}Contact;

void print_contact(const Contact *contact);

#endif