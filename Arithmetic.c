#include<stdio.h>
#include"add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"
int main()
{
	printf("Add of two numbers is %d\n",add(20,10));
	printf("sub of two numbers is %d\n",sub(20,10));
	printf("Mul of two numbers is %d\n",mul(20,10));
	printf("Div of two numbers is %d\n",div(20,10));
	return 0;
}
