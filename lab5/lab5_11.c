#include<stdio.h>
int main()
{
    int m;
    printf("select a month f name: (1)january\n(2)february ");
    scanf("%d",&m);
    switch (m)
    {
  case  1 ... 5 :
    printf("31 days");
    break;
  case  7 :
    printf("30 days");
    break;
  case 9:
    printf("28 days");
    break;
  default :
    printf("unknown month");


    }


}
