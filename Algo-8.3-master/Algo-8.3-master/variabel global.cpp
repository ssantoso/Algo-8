#include<stdio.h>
#include<conio.h>
int d=3,e=1;
void coba_lokal(int a, int b)
{
    int c = 0;
    int d = 10;
    int e;
    e = (a+b)*(c+d);
    printf("lokal a = %d\n",a);
    printf("lokal b = %d\n",b);
    printf("lokal c = %d\n",c);
    printf("lokal d = %d\n",d);
    printf("lokal e = %d\n",e);
}
 int main()
{
    int a=2;
    int b;
    b = 4;
    int c=0;
    printf("main a = %d\n",a);
    printf("main b = %d\n",b);
    coba_lokal(a,b);
    printf("main c = %d\n",c);
    printf("global d = %d\n",d);
    printf("global e = %d\n",e);
    getch ();
}
