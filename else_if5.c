#include<stdio.h>
void main()
{
      int a,b,c;
      float total;
      char sign='%';

      printf("enter marks of maths : ");
      scanf("%d",&a);

      printf("enter marks of science : ");
      scanf("%d",&b);

      printf("enter marks of english : ");
      scanf("%d",&c);

      total = (a+b+c) / 3;
      printf("\npercentage : %.2f %c",total,sign);

      if(total<=40)
      {
            printf("\nstatus : fail");
      }
      else
      {
            printf("\nstatus : pass");
      }

      if(total>=80 && total<=100)
      {
            printf("\ngrad : A");
      }


}