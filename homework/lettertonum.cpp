#include <stdio.h>

int main()
{
	char ch;
	char number_in[15];
	int i = 0;
	char number_out[15];
	printf("Enter phone number : ");
	while ((ch = getchar()) != '\n' && i < 15)
	{
		number_in[i] = ch;
		switch (ch)
		{
		case 'A' ... 'C':
			number_out[i] = '2';
			break;
		case 'D' ... 'F':
			number_out[i] = '3';
			break;
		case 'G' ... 'I':
			number_out[i] = '4';
			break;
		case 'J' ... 'L':
			number_out[i] = '5';
			break;
		case 'M' ... 'O':
			number_out[i] = '6';
			break;
		case 'P' ... 'S':
			number_out[i] = '7';
			break;
		case 'T' ... 'V':
			number_out[i] = '8';
			break;
		case 'W' ... 'Y':
			number_out[i] = '9';
			break;
		default:
			number_out[i] = ch;
			break;
		}
		i++;
		// printf("%s", number_in[i]);
	}

	printf("\n");
	printf("Number out : ");
	for (int j = 0; j < i; j++)
	{
		// printf("%c", number_in[i]);
		printf("%c", number_out[j]);
	}
	
	return 0;
}
