// write a program that find area of triangle
#include<stdio.h>
void main()
{
      float b,h,area;

      printf("enter base : ");
      scanf("%f",&b);

      printf("enter height : ");
      scanf("%f",&h);

      area = ( b/2 )* h ;

      printf("area of triangle : %f",area);
}