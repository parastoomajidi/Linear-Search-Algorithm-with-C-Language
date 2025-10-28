#include <stdio.h>
// #include <sc50.h>

int main (void){

    int numbers []= {10,22,80,30,60,49};
    int n =get_int("please enter the nums");
    for(int i=0; i<=7; i++){
        if(numbers[i] == n){
            printf("fount\n");
            return 0;


        }
        printf("Notfount \n");
        return 1;


    }


  
}