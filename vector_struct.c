#include<stdio.h>
#include<stdlib.h>
#include"vector_struct.h"
void init(vector* v,int size) {
	v->data = (int*)calloc(size,sizeof(int));
	v->size = size;
}