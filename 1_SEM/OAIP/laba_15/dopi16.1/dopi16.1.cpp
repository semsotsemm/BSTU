#include <stdio.h>
#include <stdlib.h>

void main()
{
	int* ptr, i, n, min = 1000,sum=0;
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
		if (abs(*(ptr + i)) < abs(min))
			min = *(ptr + i);
	}
	for (int i = 0; i < n; i++)
		if (*(ptr + i) < 0)
		{
			for (int j = i+1; j < n; j++)
				sum += abs(*(ptr + j));
			break;
		}

	printf("\n Array: \n", i + 1);
	for (i = 0; i < n; i++)
		printf("%d ", *(ptr + i));
	printf("\n minimum modulo element: %d", min, "\n");
	printf("\n sum of modules of elements after 1 negative: %d", sum);
	free(ptr);
}