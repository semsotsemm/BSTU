#include <stdio.h>
#include <stdlib.h>

void main()
{
	int* ptr, i, n,max=0;
	printf("Input size of massiv, n<30 \n");
	scanf_s("%d", &n); 
	if (!(ptr = (int*)malloc(n * sizeof(int))))  
		/*пытается выделить память на массив интво размером n
		если память не выделяется выводит сообщение об ошибки и завершает программу
		*/
	{
		puts("Not enough memory");
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("Input element [%d]\n", i + 1);
		scanf_s("%d", ptr + i);
		//с клавиатуры вводится i-ый элемент массива
		if (abs(*(ptr+i))>abs(max))
			max = *(ptr + i);
		//если модуль введенного элемента максимальный элемент запоминается в переменную max
	}
	printf("\nMassiv: \n", i + 1);
	for (i = 0; i < n; i++)
		printf("%d ", *(ptr + i));
	//выводит массив и максимальный его элемент
	printf("\n Maximum modulus massiv element \n", i + 1);
	    printf(" %d", max);
	free(ptr); //очистка памяти 
}