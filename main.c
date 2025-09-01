#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "adarsh.h"
#include "tree.h"
int main()
{
    int element;
    char admin[20];
    char password[20];
    printf("enter the user Authentication\n");
    printf("admin:");
    scanf("%s",&admin);
    printf("password:");
    scanf("%s",&password);
    if( strcmp(admin,"adarsh")==0 && strcmp(password,"7676")==0 ||strcmp(admin,"divya")==0 && strcmp(password,"8088")==0 ||strcmp(admin,"nikil")==0 && strcmp(password,"1234")==0 ||strcmp(admin,"sowjanya")==0 && strcmp(password,"4321")==0)
    {



back:
        while(1)
        {

            int choice;
            printf("\n*********************************\n");
            printf("enter the choice\n");
            printf(" \n1 For Recursion\n2 For Sorting\n3 For Searching \n4 For Queue Implimentation\n5 For Linked List\n6 For Tower of Hanoi\n7 For Stack Implimentation\n8 For Tree Traversal Method\n9 For Exit");
            printf("\n*********************************\n");
            scanf("%d",&choice);


            switch(choice)
            {
            case 1:
              while(1)
                {
                    int n;
                    int number;
                    int choice1;
                    printf("\n*********************************\n");
                    printf("enter the choice\n");
                    printf(" 1 Direct recursion \n 2 for Indirect recusion\n 3 Tail Recursion\n 4 Head recursion\n 5 Tree recursion\n6  for exit");
                    printf("\n*********************************\n");
                    scanf("%d",&choice1);


                   if(choice1==6)break;

                   switch(choice1)
                    {
                    case 1:
                        printf("factorial of a number\n");
                        printf("enter the numebr\n");
                        scanf("%d",&n);
                        printf("the factorial of %d is:%d\n",n,fact(n ));
                        break;
                    case 2:
                        printf(" desending order of the numbers\n");
                        printf("Enter a positive integer: ");
                        scanf("%d", &number);
                        printf("Numbers in descending order:\n ");
                        functionA(number);
                        break;
                    case 3:
                        printf("sum of natural number\n");
                        int n;
                        printf("Enter a number: ");
                        scanf("%d", &n);
                        int sum = sum_tail(n, 0);
                        printf("Sum of first %d natural numbers is: %d\n", n, sum);
                        break;
                    case 4:
                        printf("GCD of two numbers\n");
                        int x, y;
                        printf("Enter two numbers:\n ");
                        scanf("%d %d", &x, &y);

                        printf("GCD of %d and %d is: %d\n", x, y, gcd(x, y));
                        return 0;
                        break;
                    case 5:
                        printf("Tree recursion");
                        printf("Enter a number: ");
                        scanf("%d", &n);
                        printf("Tree Recursion Output:\n");
                        treeRecursion(n);

                        break;
                    case 6:
                        exit;
                    default:
                        printf("\ninvalid input\n");
                        break;

                    }




                }
                break;


            case 2:
                while(1)
                {
                    int choice2;
                    printf("\n\********************************************\n\n");

                    printf("\t 1) SELECTION SORT\n\n");
                    printf("\t 2) QUICK SORT\n\n");
                    printf("\t 3) MERGE SORT\n\n");
                    printf("\t 4) BUBBLE SORT\n\n");
                    printf("\t 5) INSERTION SORT\n\n");
                    printf("\t 6) exit\n ");


                    printf("*********************************************\n\n");
                    printf("\tEnter the choice\n");
                    scanf("%d",&choice2);
                    if(choice2==6)break;
                    switch(choice)
                    {


                    case  1:
                    {
                        SelectionSort();

                        break;
                    }
                    case 2:
                    {
                        readingArray();
                        break;
                    }
                    case 3:
                    {
                        reading();
                        break;
                    }
                    case 4:
                    {
                        Bubblesort();
                        break;
                    }
                    case 5:
                    {
                        InsertionSort();
                        break;
                    }
                    case 6:
                    {
                        exit;
                        break;
                    }
                    default :
                    {
                        printf("invalid input\n");
                    }
                    }

                }
                break;

            case 3:
                while(1)
                {
                    int choice3;
                    printf("\n\********************************************\n\n");

                    printf("\t 1) Lenear Search\n\n");
                    printf("\t 2) Binary Search\n\n");
                    printf("\t 3) exit\n ");
                    printf("*********************************************\n\n");
                    printf("\tEnter the choice\n");
                    scanf("%d",&choice3);
                    if(choice3==3)break;
                    switch(choice3)
                    {


                    case  1:
                    {
                        BinarySearch();

                        break;
                    }
                    case 2:
                    {
                        LinearSearch();
                        break;
                    }

                    case 3:
                    {
                        exit;
                        break;
                    }
                    default :
                    {
                        printf("invalid input\n");
                    }
                    }

                }
                break;

            case 4:


back1:
                while(1)
                {
                    printf("****Queue Operations****\n");
                    printf("    1.Linear Queue\n");
                    printf("    2.Circular Queue\n");
                    printf("    3.exit\n");
                    int choice3;
                    printf("Enter the choice:\n");
                    scanf("%d",&choice3);
                    if(choice3==3)break;
                    switch(choice3)
                    {
                    case 1 :
                        printf("*****Linear Queue operations*****\n");
                        printf("1.Insertion\n2.Display\n3.Delete\n4.Exit\n");
                        while(1)
                        {
                            int choice4;
                            printf("\nEnter the choice:\n");
                            scanf(" %d",&choice4);
                            if(choice4==10)break;
                            switch(choice4)
                            {
                            case 1:
                            {
                                insert();
                                break;
                            }

                            case 2:
                            {
                                display();
                                break;
                            }

                            case 3:
                            {
                                delete();
                                break;
                            }
                            case 5:
                            {
                                exit;
                                break;
                            }


                            default:
                                printf("Enter the correct value\n");
                                break;


                            }
                        }
                        break;

                    case 2:

                        while(1)
                        {
                            printf("*****circular Queue operations*****\n");
                            printf("1.Insertion\n2.Delete\n3.Display\n4.Exit\n");
                            int choice5;
                            printf("\nEnter the option:\n");
                            scanf(" %d", &choice5);
                            if(choice5 == 20)break;
                            switch(choice5)
                            {
                            case 1:
                            {
                                cqInsert();
                                break;
                            }
                            case 2:
                            {
                                cqDelete();
                                break;
                            }
                            case 3:
                            {
                                cqDisplay();
                                break;
                            }
                            case 4:
                            {
                                exit;
                                break;
                            }
                            default:
                                printf("Enter the correct value\n");
                                break;
                            }
                        }
                        break;

                    case 3:
                        exit;
                        break;
                    default:
                        printf("Enter the correct deatils\n");
                        break;

                    }


                }
                break;

            case 5:
                {
                     printf("*****LINKED LIST OPERATIONS*****\n");
                     printf("1.Insertion\n2.Display\n3.Search\n4.Deletion\n5.Exit\n");
                    while(1)
                    {
                            int choice6;

                            printf("Enter the option:\n");
                            scanf(" %d", &choice6);
                            if(choice6==5)break;
                            switch(choice6)
                            {
                            case 1:
                                int data;
                                printf("Enter the data:\n");
                                scanf("%d",&data);
                                insertData(data);
                                break;
                            case 2:
                                displayData();
                                break;
                            case 3:

                                printf("Enter the  Search data:\n");
                                scanf("%d",&data);
                                searchData(data);
                                break;
                            case 4:
                                printf("Enter the Delete data:\n");
                                scanf("%d",&data);
                                delete(data);
                                break;
                            case 5:
                                exit;
                                break;
                            default:
                                printf("Enter the correct choice\n");
                                break;
                            }

                        }
                }break;

            case 6:
                tower();
                break;

            case 7:
                printf("\n--- Stack Menu ---\n");
                int stack_choice;
                while (1)
                {
                    printf("1. Push\n");
                    printf("2. Pop\n");
                    printf("3. Display\n");
                    printf("4. Go Back to Main Menu\n");
                    printf("Enter your stack choice: ");
                    scanf("%d", &stack_choice);
                    if(stack_choice==4)break;
                    switch (stack_choice)
                    {
                    case 1:
                        push();
                        break;
                    case 2:
                        pop();
                        break;
                    case 3:
                        display_stack();
                        break;
                    case 4:
                        exit;
                        break;
                    default:
                        printf("Invalid stack choice. Please try again.\n");
                        break;
                    }
                }
                break;


            case 8:
              while(1)
              {
                   int choice8;

                   printf("\n1.For Tree traversel\n2.For Exite\n");
                   printf("enter the choice\n");
                   scanf("%d",&choice8);
                   if(choice8==2)break;
                   switch(choice8)
                       {
                        case 1:
                                struct Node* root = createNode(1);//
                                root->left = createNode(2);
                                root->right = createNode(3);
                                root->left->left = createNode(4);
                                root->left->right = createNode(5);

                                printf("Inorder Traversal: ");
                                inorder(root);

                                printf("\nPreorder Traversal: ");
                                preorder(root);

                                printf("\nPostorder Traversal: ");
                                postorder(root);

                                return 0;
                                break;
                        case 2:
                            exit;
                            break;
                        default:
                            printf("enter the valid input\n");
                            break;



                       }



              }break;


            case 9:
                exit(0);
                break;


            }
            char continueChoice[4];
            printf("\nDo you want to perform another operation? (yes/no): ");
            scanf("%s", continueChoice);
            if (strcmp(continueChoice, "no") == 0)
            {
                break;
            }
        }
    }



    else
    {
        printf("invalid username or password!!!!\n");
    }
}














