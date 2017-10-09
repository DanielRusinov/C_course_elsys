#include<stdio.h>

char* strcat( char* destination, const char* source ){
	
	int i,j;

	for(i = 0; destination[i] != '\0'; i++){
		destination[i];
	}
	for(j = 0; source[j] != '\0' ; j++, i++){
		destination[i] = source[j];
	}
	
	destination[i] = '\0';
	
	return destination;

}

int main(){

	return 0;
}
