//------------------------------------------------------------------------
// NAME: Daniel Rusinov
// CLASS: XIb
// NUMBER: 6
// FILE NAME: png-info.c
// FILE PURPOSE: Чете файл, формат PNG, 
// извежда информация за ширината и височината на картинката,
// извежда информация за големината на файла.
//------------------------------------------------------------------------
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>
#include<arpa/inet.h>

void *read_image( const char *filepath );

int main(int argc, char* argv[]){

	char* file = read_image(argv[1]); 
	if(file == NULL){ printf("Unable to open file\n"); return 0;}

	if(*(file + 1) != 'P' || *(file + 2) != 'N' || *(file + 3) != 'G'){
		printf("Unable to parse file\n");
		return 0;
	}

	int32_t *f2 = read_image(argv[1]); 

	int32_t *width = (f2 + 4);
	int32_t *height = (f2 + 5);

	printf("PNG image width: %d\n", ntohl(*width));
	printf("PNG image height: %d\n", ntohl(*height));

	int32_t i = 0;
	for(i; ; i++){
		if(*(file + i) == 'I' && *(file + i + 1) == 'E' && *(file + i + 2) == 'N' && *(file + i + 3) == 'D'){
			printf("PNG file size: %d\n", i + 8);
			break;
		}

	}	

	return 0;
}
