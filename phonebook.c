#include <stdio.h>
int main()
{
                         char n[50];
                         int a;
                         int p;
                         int d;
                        char add[50];
                        
                        char na[50];
                        int ag;
                        int ph;
                        int da;
                        char adr[50];

                        printf("WELCOME TO PHONE BOOK\n\n");
                        printf("MENU\n");
                        printf("MENU\n");
                        printf("Press 1 to add the contact\n\n");
                        int x;
                        printf("Enter\n");
                        scanf("%d", &x);
                        if(x==1)
                        {
                         int y;
                         printf("Enter the number of contact to be added : ");
                         scanf("%d", &y);
                         if(y==1)
                         {
                                                  printf("--------------\n");
                                                  printf("Name : ");
                                                  scanf("%s", &n);
                                                  printf("Age : ");
                                                  scanf("%d", &p);
                                                  printf("Phone Number: ");
                                                  scanf("%d",&p);
                                                  printf("Date of Birth : ");
                                                  scanf("%d", &d);
                                                  printf("Address : ");
                                                  scanf("%s",&add);
                                                  printf("----------------\n");

                                                  printf("-----------------\n");
                                                  printf("Name : ");
                                                  scanf("%s",&na);
                                                  printf("Age : ");
                                                  scanf("%d, &ag");
                                                  printf("Date of Birth: ");
                                                  scanf("%d",&da);
                                                  printf("Address : ");                        
                                                  scanf("%s",&add);
                                                  printf("-------------\n");
                         }
                         printf("Press 2 to see the entered contact\n");
                         printf("Press 3 to exit the phone book\n");

                         int z;
                         printf("Enter\n");
                         scanf("%d, &z");
                         if(z==2)
                         {
                                                  int num;
                                                  printf("Enter the number of contact to be viewed : ");
                                                  scanf("%d", &num);

                                                  if (num==1)
                                                  {
                                                                           printf("-----------------\n");
                                                                           printf("Name :");
                                                                           printf("%s",n);
                                                                           printf("Age :");
                                                                           printf("%d",a);
                                                                           printf("Date of Birth : ");
                                                                           printf("%d",d);
                                                                           printf("Address : ");
                                                                           printf("%s" , add);
                                                                           printf("---------------------\n");
                                                                           return 0;
                                                                           }
                                                                }
                                                        }
                                                }
                                                  