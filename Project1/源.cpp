#include<stdio.h>
int main()
{
	int n,sum=0;
	scanf_s("%d", &n);
	for (int i = 1; i < n + 1; i++) {
		sum += 1 / i;
	}printf("%d", sum);
}