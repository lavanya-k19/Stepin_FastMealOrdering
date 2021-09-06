#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "func.h"
#include "unity.h"
#include<ctype.h>
int main()
{
    int choice;
    while (1) {
        printf(""
               "\n\nWelcome to Food ");
        printf("Ordering System\n\n1)SIGNUP\n");
        printf("2)LOGIN\n3)EXIT\n\n");
        printf("Enter your choice\t");
        scanf("%d", &choice);
        switch (choice) {
        case 1: {
            signup();
        }
        case 2: {
            login();
            break;
        }
        case 3: {
            // exit(1);
            return 0;
        }
        default: {
            printf("\nPlease Enter the ");
            printf("valid choice\n");
            break;
        }
        }
        break;
    }


 

 // RUN_TEST(test_delete);
  //RUN_TEST(test_enterinfo);
 
  /* Close the Unity Test Framework */

}
