#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
main (){
	printf("COPYRIGHT @ BACHAN PROGRAMS!!!");
	float a1, b1, a2, b2, c1, c2;
	float a [2][2]={{a1,b1},{a2,b2}}; 
	//a1 b1
	//a2 b2
	//array for cofficients
	float b [2];
	//array for constants
	printf("\nEnter the cofficient of x from 1st eqn. ");
	scanf("%f",&a[0][0]);
	
	printf("\nEnter the cofficient of y from 1st eqn. ");
	scanf("%f",&a[0][1]);
	
	printf("\nEnter the cofficient of x from 2nd eqn. ");
	scanf("%f",&a[1][0]);
	
	printf("\nEnter the cofficient of y from 2nd eqn. ");
	scanf("%f",&a[1][1]);
	
	printf("\nEnter the constants of 1st and second equations. ");
	scanf("%f %f",&b[0],&b[1]);
	//Done taking input.
	a1=a[0][0];
	a2=a[0][1];
	b1=a[1][0];
	b2=a[1][1];
	c1=b[0];
	c2=b[1]; //value deko variable haru lai
	
	float det =(a1*b2)-(a2*b1);
	float z [2][2]={{b2,(-1*a2)},{(-1*b1),a1}};
	//adjoint is in float z[][]
	float p[2][2]={{(b2/det),((-1*a2)/det)},{((-1*b1)/det),(a1/det)}};
	//dividing the adjoint by determinant and storing the elements in another array
	float x[2]={((p[0][0]*c1)+(p[0][1]*c2)),((p[1][0]*c1)+(p[1][1]*c2))};
	printf("Form the given equations, \n");
	printf("x= %f y= %f \n",x[0],x[1]);
	printf("Thank you for choosing BACHAN PROGRAMS!!!");
}
	 
