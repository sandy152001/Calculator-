#include <stdio.h>
int main()
{
    int a,b;
    char opt;
    float res;
    printf("enter the operator(+,-,*,/) to be perform for calculation:\n");
    scanf("%c",&opt);
    if(opt=='+')
     {
     printf("you selected the addition:");
     }
     else if(opt=='-')
     {
        printf("you selected the substraction");
     }
     else if(opt=='*')
     {
        printf("you selected the multiplication");
     }
     else if(opt=='/')
     {
        printf("you selecter the division");
     }
     printf("Enter the value of first no. as a\n");
     scanf("%d",&a);
     printf("Enter the value of second no. as b\n");
     scanf("%d",&b);
     switch (opt)
     {
     case '+':
        res=a+b;
        printf("addition of %d and %d is:%2f",a,b,res);
        break;
        
        case '-':
        res=a-b;
        printf("substraction of %d and %d is:%2f",a,b,res);
        break;

        case '*':
        res=a*b;
        printf("multiplication of %d and %d is:%2f",a,b,res);
        break;
        case '/':
        if(b==0)
        {
            printf("\ndivision is not possible so, Enter another value");
        }
        res=a/b;
        printf("division of %d and %d is:%2f",a,b,res);
        break;
     }
        return 0;
}     
