#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,num,c=0;
    srand(time(NULL));
    n=rand()%100;
    //printf("%d",n);
    do
    {
        printf("enter number between 1 to 100\n");
        scanf("%d",&num);
        c++;
        if(num>n)
        {
            printf("you guess large number\n ");
        }
        if(num<n)
        {
            printf("you guess small number\n");
        }
       if(num==n)
       {
           printf("you win\n");
           break;
       }
    }while(1);
    printf("thank you!\n you took %d chance to win",c);
}
