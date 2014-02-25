#include <stdio.h>

void GetString(char inString[], const int MAX_SIZE)
{
	printf("Please input a string: ");
	fgets(inString, MAX_SIZE, stdin);
	
	return;
}

int ROT13Converter(char letter, int midVal)
{
	int characterVal = (int)letter;

	if(characterVal >= midVal)
	{
		characterVal = characterVal - 13;
	}
	else
	{
		characterVal = characterVal + 13;
	}
	
	return((char)characterVal);
}

int ConversionCalc(char letter)
{
	int characterVal = (int)letter;

	if(characterVal > 64 && characterVal < 91)
	{
		return(1);
	}
	else
	{
		if(characterVal > 96 && characterVal < 123)
		{
			return(2);
		}
		else
		{
			return(0);
		}
	}
}

void ROT13Calc(char inString[], const int MAX_SIZE)
{
	int i, calcType;

	for(i = 0; i < MAX_SIZE; i++)
	{
		calcType = ConversionCalc(inString[i]);
		
		switch(calcType)
		{
			case 0:
				break;
			case 1:
				inString[i] = ROT13Converter(inString[i], 78);
				break;
			case 2:
				inString[i] = ROT13Converter(inString[i], 110);
				break;
			default:
				printf("Something went wrong.");
		}		
	}
	return;
}

void PrintMessage(char inString[], const int MAX_SIZE)
{
	int i;

	printf("The new string is: ");

	for(i = 0; i < MAX_SIZE; i++)
	{
		printf("%c", inString[i]);
	}
	
	return;
}

int main()
{
	const int MAX_SIZE = 100;
	char inString[MAX_SIZE] = {0};
	
	GetString(inString, MAX_SIZE);
	ROT13Calc(inString, MAX_SIZE);
	PrintMessage(inString, MAX_SIZE);
	
	return(0);
}