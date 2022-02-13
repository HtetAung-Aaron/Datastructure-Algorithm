#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "linklistarray.h"


int main(){
  
    int choice;
    int value;
    int user_number;

    printf("stack using linked list\n");

    while (1){

        printf("\n****Main menu****\n");
        printf(" 1 push \n 2 display \n 3 pop and display \n 4 search \n 5 exit \n");
        printf("enter ur choice ");
        scanf("%d",&choice);

        switch (choice) {

            case 1:
                printf("enter value to insert\n");
                scanf("%d",&value);
                push(value);
                break;

            case 2:
                printf("This is ur data structure\n");
                display(top);
                break;
            case 3:
                pop_and_display();
                break;
            case 4:
                printf("Please enter a number u want to search ");
                scanf("%d",&user_number);
                search(user_number);
                break;

            case 5:exit(0);
            default:
                printf("wrong selection\n please try again\n");

        }
    }

    return 0;
}
