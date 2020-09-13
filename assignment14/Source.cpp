#include<stdio.h>
int main() {
	int num, i;
	printf("enter the number : ");
	scanf_s("%d", &num);
	i = 0;
	do
	{
		if ((i % 4) == 0) printf("%d ", i);
		i++;
	}
	while (i <= num);
    return 0;
}