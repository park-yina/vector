#ifndef VECTOR_STRUCT
#include<stdio.h>
#include<stdlib.h>
typedef struct Vector{
	int* data;
	//나는 따로 넣지 않았으나 gpt에서는 은닉화를 위하여 여기에 size등 변경하면 안되는 것들 넣음
	size_t size;
}vector;
void init(vector* v,int size);
#endif