#include <stdio.h>

void swap(void* a, void* b, size_t size){
     char* var1 = a;
     char* var2 = b;
     char temp;

    for (int i = 0; i != size; i++){
        temp = var1[i];
        var1[i] = var2[i];
        var2[i] = temp;
    }
}

int main(){

	int a = 4;
	int b = 2;
	int size = 1;
	

	swap(&a,&b,size); 

	printf("%d, %d", a , b);

	return 0;
}
