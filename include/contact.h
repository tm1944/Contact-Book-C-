#ifndef CONTACTS
#define CONTACTS

typedef struct {
    char name[20];
    char phone_num[20];

}Contact;

void print_contact(const Contact *contact);

#endif