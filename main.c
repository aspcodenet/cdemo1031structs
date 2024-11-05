#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "inputhelpers.h"


void mystrcpy(char *dest, char *source){
    for(int i = 0; i <= strlen(source);i++){
        char ch = source[i];
        dest[i] = ch;
    }
}

int test(){
    int a = 12;
    printf("%d\n",a);
    return a*12;
}

int main() {
    int aaa;
    printf("Start");
    aaa = test();
    printf("%d\n",aaa);

    char input2[] = "stefan";
    // STEFAN
    for(int i = 0; i < strlen(input2);i++){
        input2[i] = toupper(input2[i]);
    }
    // vill du fportsätta J/N
    // j
    char input[] = "j";
    input[0] = toupper(input[0]) ;
    //
    if(input[0] == 'J'){

    }

    char number[] = "123";
    int n = atoi(number);
    float f = atof("122.234");


    printf("Hej %d %f",n,f);
    
    int year=1972;
    int month=8;
    int day=3;
    char datum[10];
    // 1972-8-3
    sprintf(datum,"%d-%02d-%02d",year,month,day);



    // emil =
    char email[] = "hej@gmail.com"; // scanfar in ett email
    // Finns det en @
    //char *found2 = strrchr(email, '.');
    char *found2 = strchr(email, 'w');
    if(found2 == NULL){

    }
    // email = 1000
    // found2 är address 1003
    int position = found2 - email;
    if(position == 0){
        printf("Din epost får inte börja med @");
    }
 
    char *found = strchr(email, '@');
    if(found != NULL){
        // @ finns !!!
    }
    printf("%s", found); // @gmail.com

    // char str1[30] = "C programming";
    // // str1 = str1 + " is fun";
    // strcat(str1, " is fun");
    // strcat(str1, " tycker alla som är nerds! dwhjhjhdsahjds");
    // printf("%s\n", str1);

    // char str2[20];
    // //str1 for(int )= str2;
    // mystrcpy(str2, str1);



    int i;
    scanf(" %d", &i);
    char str[50];
    scanf(" %s", str);


    char test[] = "hejsan";
    char *test2 = "hejsan";
    printf("%s", test);
    printf("%s", test2);
    test[0] = 'A';
    test2[0] = 'A';
    printf("%s", test); //Aejsan
    printf("%s", test2); // Aejsan
      
 

    char yourname[30];
    scanf(" %s", yourname);
    printf("Namn:%s \n", yourname);
    //strcmp(yourname,"Stefan") ger oss tre svar
    // 0 STRÄNGARNA ÄR LIKA
    // -1 om yourname ska komma före "Stefan"
    // +1 om "Stefan" ska komma före yourname
    if(strcmp(yourname,"Stefan") == 0){
        printf("Oj vilket fint namn");
    }
    // if(!strcmp(yourname,"Stefan")){
    //     printf("Oj vilket fint namn");
    // }

    // char namn[]="Stefan"; // längd 6, allokerat 7
    // printf("%ld", namn);
    // if(namn == "Stefan"){
    //     printf("Oj vilket fint namn");
    // }


    //char *namn3 = "Stefan";
    char namn2[10] = "Stefan";// längd 6, allokerat 10
 //   char namn3[10] = "StefanHolmberg";// längd 14, allokerat 10
    //int length = strlen(namn2);
    if(namn2[0] == 'S'){
        printf("Fint ditt namn börjar på bokstaven S");
    }
    // String s = "Stefan";
    // String s2 = s;
    // s = s + " Holmberg";


    while(true){
    }
    return 0; // japp
}


