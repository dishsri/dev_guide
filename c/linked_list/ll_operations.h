#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node* next;
};

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
