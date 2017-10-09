#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *strdup( const char *str ){

	int i;
	char *string = malloc(sizeof(str));

	for(i = 0; str[i] != '\0'; i++){
		string[i] = str[i]; 
	}
	
	string[i] = '\0';

	return string;

}

int main(){


	return 0;
}
