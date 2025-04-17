#include <stdio.h>
void main()
{
	char s[256];
	int i, count;
	puts("Enter string: ");
	gets_s(s);
	for (count = i = 0; s[i] != 0; i++)
	{
		if (s[i] == '(') count++;
		if (s[i] == ')') count--;
	}
	if (!count)
	for (count = i = 0; s[i] != 0; i++)
	{
		if (s[i] == '(')
		{
			count++;
			for (int j = i+1; s[j] != 0; j++)
				if (s[j] == ')')
				{
					count--;
					break;
				}
		}
	}
	if (!count)
		puts("Ok\n");
	else
		puts("Not Ok\n");
}