//basic calculator
#include<stdio.h>
int main()
{
    int a,b,c,d;
    char oper;
    printf("enter 4 number ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    while (( getchar)()   != '\n');
     printf("enter a operator +,-,*,/    ");
    scanf("%c",&oper);

    switch(oper)
    {


    case '+':
    {
        printf("%d+%d+%d+%d=%d",a,b,c,d,a+b+c+d);
        break;
    }
    case '-':
    {
        printf("%d-%d-%d-%d=%d",a,b,c,d,a-b-c-d);
        break;
    }
    case '*':
    {
        printf("%d*%d*%d*%d=%d",a,b,c,d,a*b*c*d);
        break;
    }
        case '/':
        {
            printf("%d/%d/%d/%d=%f",a,b,c,d,(float)(a/b/c/d));
            break;
        }
        default :
        printf("unknown number or operator");
    }

    

getch();

}






