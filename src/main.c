#include "cli.h"
#include "storage.h"
#include "string.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void){
    //array of contact structs
    Contact contacts_list[100] = {0};
    const Contact *c = contacts_list;
    Contact *cw = contacts_list;

    printf("Welcome to Contacts CLI Tool\n");

    size_t count = load_from_file(cw); //load from file into contact list
    printf("Loaded %ld contacts!\n\n",count);

    size_t contact_count = count;

    //MAIN LOOP
    bool continue_cli_loop = true;

    while(continue_cli_loop){
        print_options();

        char user_input[5] = {0};
        printf("> ");
        fgets(user_input,sizeof(user_input), stdin);

        if (strchr(user_input, '\n') == NULL) {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}
        }
        switch(atoi(user_input)){
            case 1: //Add Contact

                add_contact(&contacts_list[contact_count]);
                contact_count++;
                printf("New Contact Saved!\n\n");
                break;
            case 2: //List All Contacts
                printf("CONTACTS: \n");
                list_contacts(contacts_list,contact_count);
                printf("\n");
                break;
            case 3: //Find Contact
                const Contact *c_found = find_contact(c , contact_count);
                if (c_found == NULL){
                    printf("Contact Not Found\n");
                }else{
                    print_contact(c_found);
                    printf("\n");
                }
                break;
            case 4: //Exit cli tool
                printf("EXITING CLI TOOL!\n");
                save_to_file(c,contact_count);
                continue_cli_loop = false;
                break;
            
            default:
                printf("Option Not Available! Try Again!\n");
                break;
        }
    }
    return 0;
}