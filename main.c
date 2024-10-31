#include <stdio.h>
#include <stdbool.h>
#include "inputhelpers.h"

void showMenu();

int main() { 
    while(true){
        showMenu();
        int selection = getMenuInput(1,4);
        if(selection == 4){
            break;
        }       
    }  
    return 0; // japp
}


void showMenu(){ // DEFINITION av en funktion
    printf("1. Skapa ny player\n");
    printf("2. Uppdatera player\n");
    printf("3. Lista alla players\n");
    printf("4. Exit\n");
}

