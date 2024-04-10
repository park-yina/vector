#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include <stdbool.h>
#include"vector_struct.h"
#include"vector.h"
void SetConsoleToUTF8() {
	SetConsoleOutputCP(CP_UTF8);
}
void erase(int* itr,vector* v) {
	if (v->size == 0)return NULL;
	else {
		int* target = itr; 
		int* end = &(v->data[v->size - 1]); 

		// 삭제할 요소 다음 요소들을 한 칸씩 앞으로 이동
		while (target < end) {
			*target = *(target + 1);
			target++;
		}

		v->size--; // 벡터의 크기를 하나 줄임
	}
}
int* rend(vector* v) {
	if (v->size == 0)return NULL;
	else {
		return &(v->data[v->size-1])+1;
	}
}
int* rbegin(vector* v) {
	if (v->size == 0)return NULL;
	else {
		return &(v->data[v->size - 1]);
	}
}
int* begin(vector* v) {
	if (v->size == 0)return NULL;
	else {
		return & (v->data[0]);
	}
}
int* end(vector* v) {
	if (v->size == 0)return NULL;
	else {
		return &(v->data[v->size]);
	}
}
void pop_back(vector* v) {
	if (v->size == 0) {
		printf("벡터가 비어있습니다.");
	}
	else {
		int* new_v = (int*)realloc(v->data, (v->size - 1) * sizeof(int));
		if (new_v == NULL) {
			printf("아니 왜 할당이 안되는걸까요??");
		}
		else {
			v->data = new_v;
			v->size--;

		}
	}
}
void clear(vector*v) {
	free(v);
	v->data == NULL;
	v->size = 0;
}
void push_back(vector* v, int data) {
	if (v->size == 0) {
		v->data = (int*)malloc(sizeof(int));
		if (v->data == NULL) {
			printf("데이터 할당에 실패했습니다.");
		}
		else {
			v->data[0] = data;
			v->size = 1;
		}
	}
	else {
		int* new_v = (int*)realloc(v->data,(v->size+1)*sizeof(int));
		//void* realloc(void* memblock, size_t size);	// realloc 함수의 원형
		if (new_v == NULL) {
			printf("new_v가 데이터 할당에 실패했습니다.");
		}
		else {
			v->data = new_v;
			v->data[v->size] = data;
			v->size++;
		}

	}
}
size_t size(vector* v) {
	if (v->size == 0)return 0;
	else {
		return v->size;
	}
}
bool empty(const vector* v) {
	if (v->size == 0)return true;
	else
		return false;
}
