#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
  int data;
  char str[10];
  struct node *next;
};
struct node *create()
{
    struct node *temp,*start=NULL,*q,*p,*r,*t;
while(1)
{
  char str1[10];
  printf("\n Enter yes or no\n");
  scanf("%s",str1);
  if(strcmp(str1,"no")==0)
  break;
  else
  {
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter a value and a name ");
  scanf("%d",&temp->data);
  scanf("%s",temp->str);
    temp->next=NULL;
    if(start==NULL)
    {
      start=temp;
      p=temp;
      q=temp;
    }
    else
    {
      p->next=temp;
      p=temp;

    }
  }
}
return q;
}
struct node *display(struct node *q)
{
  while(q!=NULL)
  {
    printf("%d %s\n",q->data,q->str);
    q=q->next;
  }
}
struct node *swap(struct node *p,int pos)
{
  struct node *temp,*start=NULL,*q,*t,*s,*r;
temp=p;
   for(int i=1;i<pos-1;i++)
   {
     p=p->next;
   }
   q=p->next;
   r=q->next;
   s=r->next;
   p->next=r;
   r->next=q;
   q->next=s;
  return temp;
}
int main()
{
  struct node *p,*temp,*start=NULL,*t,*q;
  int pos,des;
  p=create();
  printf("\n Enter position ");
  scanf("%d",&pos);
  t=swap(p,pos);
  display(t);
}
