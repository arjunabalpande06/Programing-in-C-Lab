#include<stdio.h>
int main()
{
	char str[100], copied_str[100];
	int i = 0, lenght = 0, vowels = 0, characters = 0;
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	while(str[i] != '\0'){
		lenght ++;
		characters++;
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
			 || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
			vowels ++;
			 }
		copied_str[i] = str[i];
		i++;
	}
	copied_str[i] = '\0';
	printf("Length of the string: %d\n", lenght-1);
	printf("Total number of characters in the string: %d\n", characters-1);
	printf("Total number of vowels in the string: %d\n", vowels);
	printf("Copied string: %s\n", copied_str);
	return 0;
}
