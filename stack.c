#include<stdio.h>
#include<stdlib.h>


typedef struct{
    size_t size;
    size_t capacity;
    int *elements;
} stack;

void stack_init( stack *);
void stack_destroy( stack * );
int stack_empty( stack * );
void stack_push( stack *, int );
int stack_top( stack * );
void stack_pop( stack * );

void stack_init( stack *ar ){
	ar->size = 0;
	ar->capacity = 100;
	ar->elements = malloc( ar->capacity * sizeof(int));
}	

void stack_destroy( stack *ar ){
	ar->size = 0;
	ar->capacity = 0;
	free(ar->elements);
}

int stack_empty( stack *ar ){
	if(ar->size == 0){ return 1;}
	else return 0;	

}

void stack_push( stack *ar, int elem){
	if(ar->size == ar->capacity){
		ar->elements = realloc( ar->elements, ar->capacity * 2 * sizeof(int));
		ar->capacity = ar->capacity * 2;
	}
	ar->elements[ar->size++] = elem;
}

int stack_top( stack *ar ){
	if(ar->size == 0){ printf("Stack is empty! Cannot top last element!");}
	else return ar->elements[ar->size - 1];
}

void stack_pop( stack *ar ){
	if(ar->size == 0){ printf("Stack is empty! Cannot pop last element!");}
	else ar->elements[ar->size--];
}

int main(){

	return 0;
}














