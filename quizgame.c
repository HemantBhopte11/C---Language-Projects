#include <stdio.h>

int main() {
    int ans1,ans2,ans4,ans5;
    int point1,point2,point3,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    int total1,total2,total3;
    int i;
	
	printf("Welcome to the Game\n\n");
	printf("> Press 7 to start the game\n");
	printf("> Press 0 to quit the game\n");
	scanf("%d", &i);
    if(i==7)
                         {
                                                  printf("THe game has started\n\n");
                         }
                         else if (i==0)
                         {
                                                  printf("Then game has ended\n\n");
                         }
                         else
                         {
                                                  printf("Invalid\n\n");
                         }
                         if(i==7)
                         {
                            printf("1) Which one is the first search engine in internet?\n\n");
                            printf("1) Google\n");
                            printf("2) Archie\n");
                            printf("3) Wais\n");
                            printf("4) Altavista\n");
                        
                        printf("Enter Your Answer : ");
                        scanf("%d", &ans1);

                                                if(ans1==2)
                                                {
                                                    printf("Correct Answer\n");
                                                    point1 = 5;
                                                    printf("You have scored %d point\n", point1);
                                                }
                                                else
                                                {
                                                    printf("Wrong Answer\n");
                                                    point1 = 0;
                                                    printf("You have scored %d point\n", point1);
                                                }
                                              printf("2) Which one is the first web browser invented in 1990?\n\n");
                                              printf("1) Internet Explorer\n");
                                              printf("2) Mosaic\n");
                                              printf("3) Mozilla\n");
                                              printf("4) Nexus\n");
                                                
                                                printf("Enter Your Answer : ");
                                                scanf("%d",&ans2);

                                                if(ans2==4)
                                                {
                                                printf("Correct Answer\n");
                                                point2 = 5;
                                                printf("You have scored %d pint\n", point2);
                                                }
                                                                                            else
                                                                                            {
                                                                                            printf("Wrong Answer\n");
                                                                                            point02 = 0;
                                                                                            printf("You have scored %d point\n",point02); 
                                                                                            }
                                                                     }
                                                return 0;
                                            }
