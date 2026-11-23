#include <string.h>
#include "cli.h"
#include "contact.h"
#include <stdio.h>


void print_options(){
    printf("1)Add\n2)List\n3)Find\n4)Exit\n\n");

}

void add_contact(){
    Contact new_contact;

    printf("Name: ");
    fgets(new_contact.name,sizeof(new_contact.name),stdin);

    printf("Phone Number: ");
    fgets(new_contact.phone_num,sizeof(new_contact.phone_num),stdin);

     new_contact.name[
        strcspn(new_contact.name, "\n")
    ] = '\0';

    new_contact.phone_num[
        strcspn(new_contact.phone_num, "\n")
    ] = '\0';

    printf("New Contact Created!\n\n");
}