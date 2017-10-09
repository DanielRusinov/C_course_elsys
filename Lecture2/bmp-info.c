//------------------------------------------------------------------------
// NAME: Daniel Rusinov
// CLASS: XIb
// NUMBER: 6
// FILE NAME: bmp-info.c
// FILE PURPOSE: Чете файл, формат BMP, 
// извежда информация за ширината и височината на картинката.
//------------------------------------------------------------------------
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>

void *read_image( const char *filepath );

int main(int argc, char *argv[]){
	
	char *file = read_image(argv[1]); 

	int32_t *width = (file + 18);
	int32_t *height = (file + 22);
	
	printf("BMP image width: %d\n", *width);
	printf("BMP image height: %d\n", *height);

	return 0;
}
