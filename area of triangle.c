//Find area of Triangle.
#include<stdio.h>
int main()
{
    int height,base,result;
    printf("Enter the Height: ");
    scanf("%d",&height);
    printf("Enter the Base: ");
    scanf("%d",&base);

    result=(base*height)/2;
    printf("Area of Triangle: %d",result);
}
