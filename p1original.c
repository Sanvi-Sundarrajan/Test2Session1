/*1.Write a program to find the distance between two points
void input(float *x1, float *y1, float *x2, float *y2);
void find_distance(float x1, float y1, float x2, float y2, float *area);
void output(float x1, float y1,float x2, float y2, float area);
input:
1 1 2 2
output:
the distance between point (1.000000,1.000000) and (2.000000,2.000000) is with 1.4142	*/
#include<stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter the coordinates\n");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *didtance)
{
  *distance= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
void output(float x1, float y1,float x2, float y2, float distance)
{
  printf("The distance between point (%f,%f) and (%f,%f) is %f \n",x1,x2,y1,y2,distance);
}
int main()
{
  float x1,x2,y1,y2,distance;
  input(&x1,&x2,&y1,&y2);
  find_distance(x1,x2,y1,y2,&distance);
  output(x1,x2,y1,y2,area);
  return 0;
}