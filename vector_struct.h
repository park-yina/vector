#ifndef VECTOR_STRUCT
#include<stdio.h>
#include<stdlib.h>
typedef struct Vector{
	int* data;
	//���� ���� ���� �ʾ����� gpt������ ����ȭ�� ���Ͽ� ���⿡ size�� �����ϸ� �ȵǴ� �͵� ����
	size_t size;
}vector;
void init(vector* v,int size);
#endif