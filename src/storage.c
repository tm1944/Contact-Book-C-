#include "storage.h"
#include <stdio.h>
#include <stddef.h>

void save_to_file(const Contact *c, size_t n){
    FILE *fp;
    fp = fopen("contacts.txt","w");

    //loop over *c contact_list
    // format it so its name phone-number
    // move to next c
    size_t i = 0;
    while(i < n){
        const Contact *contact_struct = (c+i);
        fprintf(fp,"%s %s\n", contact_struct->name, contact_struct->phone_num);
        i++;
    }
    printf("Saved to file!\n");
}