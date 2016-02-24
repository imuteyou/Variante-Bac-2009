#include <iostream>
#include <string.h>


int main()
{
	char string[41];
	std::cout << "Introduceti sirul de caractere: ";
	std::cin.get(string, 20);
	int stringLenght = strlen(string);
	for (int i = 0; i < stringLenght; i++)
	{
		if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
		{
		    std::cout << string[i] << std::endl;
			stringLenght++;

			for (int j = stringLenght; j > i + 1; j--)
			{
				string[j] = string[j - 1];

			}

			string[i + 1] = (char)((int)string[i] - 32);
			i++;
		}
	}

	std::cout << string;
}