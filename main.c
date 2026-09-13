#include<stdio.h>
#include<string.h>
#include<stdlib.h>



typedef struct
{
    int phoneNumber;
    char contactName[50];

}  Contanct;

void saveContact(Contanct *con){
    FILE *file = fopen("data.txt", "ab");  
    
    if (file == NULL){
        perror("Error");
    }
    
    fprintf(file, "%d %s\n", con->phoneNumber, con->contactName);
    fclose(file);
}

void createContact(const char *phoneNumber, const char *name){
    Contanct con;
    strncpy(con.contactName, name, 50 - 1);
    con.contactName[sizeof(con.contactName-1)] = '\0';
    con.phoneNumber = atoi(phoneNumber);

    saveContact(&con);
}

void readContacts(){
    FILE *file = fopen("data.txt", "r");

    
    Contanct con;
    while (fscanf(file, "%d %49s", &con.phoneNumber, con.contactName) == 2)
    {
        printf("Contact: %s | %d\n", con.contactName, con.phoneNumber);
    }
    
    fclose(file);
}

void readByPhoneNumber(int *number){
    FILE *file = fopen("data.txt", "r");

    Contanct con;
    while (fscanf(file,"%d %49s", &con.contactName, &con.phoneNumber)==2)
    {
        if (con.phoneNumber == atoi(number))
        {
            printf("Contact: %s | %d\n", con.contactName, con.phoneNumber);
    
        }
    }
}

void readByPhoneName(char *name){
    FILE *file = fopen("data.txt", "r");

    Contanct con;
    while (fscanf(file,"%d %49s", &con.contactName, &con.phoneNumber)==2)
    {
        if (con.contactName == name)
        {
            printf("Contact: %s | %d\n", con.contactName, con.phoneNumber);
    
        }
    }
}

void deleteByName(char *name){
    FILE *file = fopen("data.txt", "r");
    FILE *file = fopen("data.txt", "r");

    
}


int main(int argc, char *argv[]){

    if (argc < 1) {
        fprintf(stderr, "Uso: %s add <telefono> <nombre>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "add")== 0)
    {
        createContact(argv[2], argv[3]);
    }
    
    if(strcmp(argv[1], "list")==0){
        readContacts();
    }

    if(strcmp(argv[1], "get")==0){
        readByPhoneNumber(argv[2]);
    }

    return 0;
}