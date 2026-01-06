#include<stdio.h>
int stringLenght(char str[]) 
{
	int lenght = 0;
	while(str[lenght] != '\0'){
		lenght++;
	}
	return lenght;
}

int compareStrings(char str1[], char str2[]) {
	int i = 0;
	while(str1[i] != '\0' && str2[i] != '\0'){
		if(str1[i] != str2[i]){
			return 0;
		}
		i++;
	}
	if(str1[i] == '\0' && str2[i] == '\0'){
		return 1;
	}
	return 0;
}
void concatenateStrings(char result[], char str1[], char str2[]){
	int i = 0, j = 0;
	while(str1[i] != '\0'){
		result[i] = str1[i];
		i++;
	}
	while(str2[j] != '\0'){
		result[i] = str2[j];
		i++;
		j++;
	}
	result[i] = '\0';
}
}
