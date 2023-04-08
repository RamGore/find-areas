//Find the area of Equilateral Triangle.
#include<stdio.h>
#include<math.h>
int main()
{
    int side ,r;
    printf("Enter the side of equilateral triangle: ");
    scanf("%d",&side);
    r=(sqrt(3)/4)*(side*side);
    printf("Area of Equilateral Triangle: %d",r);
}
