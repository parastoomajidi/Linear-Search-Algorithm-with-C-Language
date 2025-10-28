#include <stdio.h>
#include <cs50.h>
#include <string.h>

// withh structure
typedef struct{
    string name;
    string number;
    int age;

}person;

int main(void){
    person people[3];

    people[0].name ="test1";
    people[0].number = "026";
    people[0].age = 26;

    people[1].name ="test2";
    people[1].number = "027";
    people[1].age = 27;

    people[2].name ="test3";
    people[2].number = "028";
    people[2].age = 28;


    string name = get_string("please enter the Name \n");
    for(int i =0; i <3; i++){
        if(strcmp(people[i].name, name) == 0)
        {
            printf("finden ! name :%s | age: %i | number: %s\n ", people[i].name, people[i].age, people[i].name);
            return 0;
        }
    }
    printf("nicht finden");
    return 1;


}

















// normall way
// int main(void){
//     string names []= {"test1", "parastoo", "weeda"};
//     string numbers[]= {"+98-123-11-22", "+98-026-26-26", "+98-123-00-00"};

//     string name = get_string("Name: ");
//     for(int i =0; i<= 3; i++ ){
//         if(strcmp(names[i], name) == 0)
//         {
//             printf("finden! %s\n", numbers[i]);
//             return 0;
//         }
//     }
// }
