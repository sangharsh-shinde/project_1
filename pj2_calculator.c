#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int ch;
    float a,b,result;
    printf("CALCULATOR\nChoose one of the following operation\n");
    do
    {
    printf("1.Add\n2.Subtract\n3.Multipy\n4.Divide\n5.Modulus\n6.Power\n7.Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("enter value of a and b\n");
        scanf("%f%f",&a,&b);
        result=a+b;
        printf("result=%f\n",result);
        break;
    case 2:
        printf("enter value of a and b\n");
        scanf("%f%f",&a,&b);
        result=a-b;
        printf("result=%f\n",result);
        break;

    case 3:
        printf("enter value of a and b\n");
        scanf("%f%f",&a,&b);
        result=a*b;
        printf("result=%f\n",result);
        break;

    case 4:
        printf("enter value of a and b\n");
        scanf("%f%f",&a,&b);
        if (b != 0)
        {
          result=a/b;
          printf("Result = %f\n", result);
        }
        else
        {
          printf("Error: Division by zero.\n");
        }
        break;

    case 5:
        printf("enter value of a and b\n");
        scanf("%f%f",&a,&b);
        if(b!=0)
        {
        result=(int)a%(int)b;
        printf("result=%f\n",result);
        }
        else
        {
            printf("Error: Division by zero.\n");
        }
        break;

    case 6:
        printf("enter value of a and b\n");
        scanf("%f%f",&a,&b);
        result=pow(a,b);
        printf("result=%f\n",result);
        break;

    case 7:
            exit(0);
            break;
        default:
            printf("re-enter the correct case\n");
    }
    }while(ch!=7);

}
