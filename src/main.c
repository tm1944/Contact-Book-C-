#include "cli.h"
#include <stdlib.h>
#include <stdio.h>

int main(void){
    //array of contact structs
    Contact contacts_list[100];

    printf("Welcome to Contacts CLI Tool\n");

    bool continue_cli_loop = true;
    while(continue_cli_loop){
        print_options();

        char user_input[5];
        printf("> ");
        fgets(user_input,sizeof(user_input), stdin);

        switch(atoi(user_input)){
            case 1: //Add Contact
                add_contact();
                break;
            case 2: //List All Contacts
                break;
            case 3: //Find Contact
                break;
            case 4: //Exit cli tool
                printf("EXITING CLI TOOL!\n");
                continue_cli_loop = false;
                break;
        }

    }
    return 0;
}