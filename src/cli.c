#include "cli.h"
#include <stdio.h>
#include <stdlib.h>


void start_cli(){
    printf("Welcome to Contacts CLI Tool\n");
    bool continue_cli_loop = true;
    while(continue_cli_loop){
        char user_input[] = "0";
        char buffer[20];
        fgets(user_input,sizeof(user_input), stdin);
        printf("%s\n", user_input);

        switch(atoi(user_input)){
            case 1: //Add Contact
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
}

void add_contact(){

}