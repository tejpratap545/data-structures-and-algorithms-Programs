#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
    //   node(inpot x){               //constructor
    //     data=x;
    //     next=NULL;
    // }
};

void printlist(struct node *n)
{
  while (n!=NULL)
  {
      printf("%d\n",n->data);
      n=n->next;
  }
  
}
void push(struct node ** n, int data)
{    

    struct node * new_node=(struct node *)malloc(sizeof(struct node *));
    new_node->data=data;
    new_node->next= *n;
    *n=new_node;

}
void append(struct node ** n, int data)
{
    struct node * new_node=(struct node *)malloc(sizeof(struct node *));
    new_node->data=data;
    new_node->next=NULL;
    struct node * last=*n;
    while (last->next!=NULL)    
    {
        last=last->next;
    }
    last->next=new_node;
}
void insert(struct node *pre_node,int data)
{
     struct node * new_node=(struct node *)malloc(sizeof(struct node *));
     if(new_node==NULL)
     {
        printf("previous node can not empty");
     }
     else
     {
          new_node->data=data;
          new_node->next=pre_node->next;
          pre_node->next=new_node;  
     }
     
    
     
}
void deletenode(struct node ** n,int key)
{
    struct node * temp=*n ,*pre_node;
    if(temp!=NULL&&temp->data==key)
    {
       *n=temp->next;
       free(temp); 
       return;
    }
    while (temp!=NULL&&temp->data!=key)
    {
       pre_node=temp;
       temp=temp->next; 
    }
    if(temp==NULL)
       return;
    pre_node->next=temp->next;
    free(temp);
    return;
   
    
}
void deletenode_postion(struct node ** n,int position )
{
    struct node * temp =*n,*pre_node;
    int i=0;
    if(temp!=NULL&&position==0)
    {
        *n=temp->next;
        free(temp);
    }
    while(temp!=NULL&&i!=position)
    {
        pre_node=temp;
        temp=temp->next;
        i++;
    }
    pre_node->next=temp->next;
    free(temp);
    return;
}

int main()
{
  struct node  *head , *second, *third;
  head = (struct node*)malloc(sizeof( struct node));
  second = (struct node*)malloc(sizeof(struct node)); 
  third = (struct node*)malloc(sizeof(struct node)); 
  head->data=12;
  head->next=second;
  second->data=45;
  second->next=third;
  third->data=89;
  third->next=NULL;

  printlist(head);
  push(&head,67);
  printf("after pushing the charector \n");
  printlist(head);
  append(&head,100);
  printf("after append an element \n");
  printlist(head); 
  printf("\n after the insertion at mid area\n");
  insert(head->next->next->next,68);
  printlist(head);
  printf("\n after free a node key 100 \n");
  deletenode(&head,100);
  printlist(head);
  deletenode_postion(&head,2);
  printf("\n deleteing node at position number 2\n");
  printlist(head);
  return 0;
  

}
