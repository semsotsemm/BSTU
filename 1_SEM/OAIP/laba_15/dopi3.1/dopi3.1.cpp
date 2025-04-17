#include <stdio.h>
#include <stdlib.h>

void main()
{
	int* ptr, i, n, mult = 1, sum = 0,pos=0,max=0;
	printf("Enter array size, (<30) \n");
	scanf_s("%d", &n);
	if (!(ptr = (int*)malloc(n * sizeof(int))))
	{
		puts("Not enough memory");
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("Enter element [%d]\n", i + 1);
		scanf_s("%d", ptr + i);
		if (*(ptr + i)< 0)
		mult *= *(ptr +i);
		if (*(ptr + i) > max)
		{
			max = *(ptr + i);
			pos = i;
		}
	}
	for (int i = pos-1; i >= 0; i--)
		sum += *(ptr + i);
	printf("\n Array: \n", i + 1);
	for (i = 0; i < n; i++)
		printf("%d ", *(ptr + i));
	printf("\n product of negative elements: %d", mult , "\n");
	printf("\n sum of elements to maximum: %d", sum);
	free(ptr);
}