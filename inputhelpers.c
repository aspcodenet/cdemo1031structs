#include <stdio.h>
#include <stdbool.h>

// DEFINITION = både header + body
int getMenuInput(int minValue, int maxValue){
    int selection;
    while(true){
        printf("Action:");
        scanf(" %d", &selection);
        char ch;
		while (((ch = getchar()) != '\n') && (ch != EOF));
        if(selection >= minValue && selection <=maxValue) {
            return selection;
        }
        printf("Ange ett tal mellan %d och %d", minValue,maxValue);
    }

}
