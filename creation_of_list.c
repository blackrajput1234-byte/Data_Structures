#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;

void createlist();
int main(){
    createlist();
    return 0;

}
void createlist(){
    struct node* temp;
    int choice;
    do{
    struct node* newNODE=malloc(sizeof(struct node));
    if(newNODE==NULL)
    {
        printf("memory not allocated");
        return;
    }
    printf("enter data for node");
    scanf("%d",&newNODE->data);
    newNODE->next=NULL;

    if(head==NULL)
    {
        head=temp=newNODE;

    }
    else
    {
        temp->next=newNODE;
        temp=temp->next;
    }

        printf("if you want to add more node press 1 other wise press 0");
        scanf("%d",&choice);

    }
    while(choice==1);
    struct node* t;
    t=head;
    //for traversing 

    while(t!=NULL)
    {
        printf("%d->",t->data);
        t=t->next;

    }


}
