/*8. Write a program to find the perimeter of a polygon
struct _point {
float x,y;
};
typedef struct _point Point;
struct _line
{
Point p1,p2;
float distance;
};
struct _line Line;
struct _polygon {
int n;
Line l[100];
float perimenter;
}
int input_n();
int input_polygon( int n, Polygon *p);
Line input_line();
void input_n_lines(int n, Line l[n]);
void find_perimeter(Polygon *p);
void output(Polygon p);*/
#include<stdio.h>
#include <math.h>
struct _point
{
float x,y;
};
typedef struct _point Point;

struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line;

struct _polygon
{
int n;
Line l[100];
float perimeter;
};
typedef struct _polygon Polygon;

int input_n()
{
  int n;
  printf("Enter the number of sides in polygon \n");
  scanf("%d",&n);
  return n;
}
Point input_point()
{
  Point p;
  printf("Enter the coordinates of the point\n");
  scanf("%f%f",&p.x,&p.y);
  return p;
}
float length(Point p1,Point p2)
{
  float distance= sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
  return distance;
}
Line input_line(int n)
{
  Line l;
  l.p1=input_point(n);
  return l;
}
void input_n_lines(int n, Line l[n])
{
    for(int i=0;i<n;i++)
    l[i]=input_line(n);
}
int dist(int n, Line l[n])
{
    int i;
    for(i=0;i<n;i++)
    l[i].distance=length(l[i].p1,l[i+1].p1);
}
void input_polygon(int n,Polygon*p)
{
    p->n=n;
    input_n_lines(p->n,p->l);
    p->perimeter=0;
}
void find_perimeter(Polygon p)
{
  for(int i=0;i<p.n;i++)
  p.perimeter=p.perimeter+dist(p.n,p.l);
}

void output(Polygon p)
{
    printf("The perimenter of %d sides polygon is %f \n ",p.n,p.perimeter);
}
int main()
{
    int n=input_n();
    Polygon p;
    input_polygon(n,&p);
    find_perimeter(p);
    output(p);
    return 0;
}









