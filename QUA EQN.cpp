#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
	printf("THIS PROGRAMS SOLVES QUADRATIC EQUATIONS, COPYRIGHT @ BACHAN PROGRAMS!");
	float x1=0;
	float x2=0;
	int a,b,c;
	printf("\n \t Enter a, b, and c, respectively. The format is a(x^2)+bx+c \n");
	scanf("%d %d %d",&a,&b,&c);
		int p=(-1*b);
		int q=(b*b)-(4*c*a);
		float r=sqrt (q);
		float s=2*a;
		x1 = (p-r)/s;
		x2 = (p+r)/s;
	printf("\nThe value of x is %2f",x1);
	printf("\nThe value of x is %2f\n",x2);
	printf("\n \tThanks for choosing BACHAN PROGRAMS!!!");
return 0;
}

