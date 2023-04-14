#include <stdio.h>

int find_sum(){

	int a, b;
	printf("enter the number: \n");
	scanf("%d%d", &a,&b);
	int somme= a+b;
	printf("the sum is: %d\n", somme);

	return 0;
}

int main (){
	printf("hello lab4 \n");
	find_sum();
}
