#ifndef VECTOR
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include"vector_struct.h"
int* rbegin(const vector* v);
int* rend(const vector* v);
int* begin(const vector* v);
int* end(const vector* v);
void push_back(vector* v, int data);
void pop_back(vector* v);
void clear(vector* v);
void erase(int* itr,vector* v);
size_t size(const vector* v);
bool empty(const vector* v);
#endif