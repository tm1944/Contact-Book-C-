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
        fprintf(fp,"%s|%s\n", contact_struct->name, contact_struct->phone_num);
        i++;
    }
    fclose(fp);
    printf("Saved to file!\n");
}


size_t load_from_file(Contact *c){
    //loop over until >n
    //make contact struct and assign to array index
    FILE *fp = fopen("contacts.txt", "a");
    if (fp == NULL) {
        perror("fopen");
        return 0;
    }
    fclose(fp);

    fp = fopen("contacts.txt", "r");
    if (fp == NULL) {
        perror("fopen");
        return 0;
    }
    size_t i = 0;

    if (fp == NULL) {
        perror("fopen");
        return i;
    }
    while(fscanf(fp, " %19[^|]|%19[^\n]",c->name,c->phone_num) != EOF){
        c++;
        i++;
    }

    fclose(fp);
    return i;
}