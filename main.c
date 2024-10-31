#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "inputhelpers.h"

typedef struct {
    int Age;
    int Jersey;
    char Name[256];
}Player;

void showMenu();

// PEKARE av två anledningar
// 1. möjliggöra ändring i en parameter (copy by value)
// 2. prestandaskäl 4 bytes för pekaren istf hela objektet är kopierat
void printPlayer(Player *p){ // värdet av p är 1000
    printf("*** INFO ABOUT PLAYER ***\n");
    printf("%d, %s\n", p->Jersey, p->Name);
    //p->Jersey = 99;
}

int main() { 
    int a[3];  // a = 1000   -> a[0]  1000, a[1] 1004, a[2] 1008, a[3] 1012, a[4] 1016 
    a[0] = 12;
    a[1] = 13;
    a[2] = 15;
    // a[2]  a = 1000 + 4 * 2

    a[4] = 123; // a[] - C gör om till en minnesaddress
    a[-99] = 12;

    Player foppa; // foppa är paxad på STACKENB på address 1000 -> 1264
    foppa.Age = 52;
    foppa.Jersey = 21;
    strcpy(foppa.Name, "Peter Forsberg");
    printPlayer(&foppa); // Det är 1000 som skickas in
    // //foppa.Name = "Peter Forsberg";
    // printf("%s\n", foppa.Name);

    // Player patrik = {55,14,"Patrik Sundström"};
    // printf("%s\n", patrik.Name);
 


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

