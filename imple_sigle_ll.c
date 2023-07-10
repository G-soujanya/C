#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void main(){
    struct node *head,*temp,*newnode;
    int choice=1,count=0;
    head=0;
    while(choice==1)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the value at node %d",count++);
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to continue press 1");
        scanf("%d",&choice);
    }
    void insertbeg()
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
    }
    void insertend(){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        temp->next=newnode;
        temp=newnode;
    }
    void insertspec(){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        int pos;
        printf("enter the position");
        scanf("%d",&pos);
        temp=head;
        for(int i=0;i<pos;i++)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    void delbeg()
    {
        temp=head;
        head=head->next;
        free(temp);
    }
    void delend()
    {
        temp=head;
        struct node *prevnode;
        while(temp->next!=0)
        {
            prevnode=temp;
            temp=temp->next;
        }
        if(head==temp)
        {
            head=0;
            free(temp);
        }
        else
        {
            prevnode->next=0;
            free(temp);
        }
    }
    void delspec()
    {
        int pos;
        temp=head;
        struct node *nextnode;
        printf("enter the position where to delete");
        scanf("%d",&pos);
        for(int i=1;i<=pos;i++)
        {
            temp=temp->next;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;
        free(nextnode);
    }
    void rev()
    {
        struct node *prevnode,*currentnode,*nextnode;
        prevnode=0;
        currentnode=nextnode=head;
        while(nextnode!=0)
        {
            nextnode=nextnode->next;
            currentnode->next=prevnode;
            prevnode=currentnode;
            currentnode=nextnode;
        }
        head=prevnode;
    }
    rev();
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
