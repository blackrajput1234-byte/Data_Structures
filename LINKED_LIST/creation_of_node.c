#include<stdio.h>

struct node{
    int data;
    struct node* next;

} a1;

int main(){
    a1.data=1;
    a1.next=NULL;
    printf("%d",a1.data);
return 0;

}