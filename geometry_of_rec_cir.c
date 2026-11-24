#include<stdio.h>
int main()
{
    int l,b,r,Ar,Pr,Ac,Pc;
    printf("Enter the length and breadth of a rectangle ");
    scanf("%d %d",&l,&b);
    Ar=l*b;
    Pr=2*(l+b);
    printf("Enter the radius of a circle:");
    scanf("%d",&r);
    Ac=(3.14*r*r);
    Pc=2*3.14*r;
    printf("Area of Rectangle is %d\n",Ar);
    printf("Perimeter of Rectangle is %d\n",Pr);
    printf("Area of Circle is %d\n",Ac);
    printf("Perimeter of Circle is %d\n",Pc);
    return 0;


}
