#include<stdio.h>
#include<stdlib.h>
#include"ll_operations.h"

int main()
{
    int choice;
    while(1)
    {
        printf("Linked list operations\n");
        printf("Choose your option\n");
        printf("1.Create                      \n");
        printf("2.Display                     \n");
        printf("3.Insert at the beginning     \n");
        printf("4.Insert at the end           \n");
        printf("5.Delete from the beginning   \n");
        printf("6.Delete from the end         \n");
        printf("7.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: create();
                    break;

            case 2: display();
                    break;

            case 3: insert_begin();
                    break;

            case 4: insert_end();
                    break;

            case 5: delete_begin();
                    break;

            case 6: delete_end();
                    break;

            case 7: exit(0);
                    break;

            default: printf("wrong choice\n");
                     break;
        }
    }
return 0;
}
