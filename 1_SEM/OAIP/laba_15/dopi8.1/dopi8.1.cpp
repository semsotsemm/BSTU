#include <stdio.h>
#include <stdlib.h>

void main()
{
	int* ptr, i, n, pos = 0, sum = 0,num;
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
		if (*(ptr + i) > 0)
			pos++;
		if (abs(*(ptr + i)) == 0)
			num=i;
	}
	for (int i = num+1; i < n; i++)
		sum += *(ptr + i);

	printf("\n Array: \n", i + 1);
	for (i = 0; i < n; i++)
		printf("%d ", *(ptr + i));
	printf("\n number of positive array elements: %d", pos, "\n");
	printf("\n sum of array elements after the last 0: %d", sum);
	free(ptr);
}