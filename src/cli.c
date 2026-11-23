#include <string.h>
#include "cli.h"
#include <stdio.h>
#include <stddef.h>
#include "contact.h"

void print_options(){
    printf("1)Add\n2)List\n3)Find\n4)Exit\n\n");

}

Contact* add_contact(Contact *c){
    printf("Name: ");
    fgets(c->name,sizeof(c->name),stdin);

    printf("Phone Number: ");
    fgets(c->phone_num,sizeof(c->phone_num),stdin);

     c->name[
        strcspn(c->name, "\n")
    ] = '\0';

    c->phone_num[
        strcspn(c->phone_num, "\n")
    ] = '\0';

    printf("New Contact Created!\n");
    return c;
}


void list_contacts(const Contact *c, size_t n){
    size_t count = 0;
    while (count < n){
        print_contact(c);
        c++;
        count++;
    }
}

