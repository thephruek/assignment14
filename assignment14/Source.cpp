#include<stdio.h>
int main() {
	int num,num2, i;
	printf("enter the number : ");
	scanf_s("%d", &num);
	printf("enter the number2 : ");
	scanf_s("%d", &num2);
	i = 0;
	do
	{
		if ((i % num2) == 0) 
			printf("%d ", i);
		i++;
	}
	while (i <= num);
    return 0;
}