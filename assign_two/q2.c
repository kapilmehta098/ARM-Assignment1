#include<stdio.h>
#include<stdlib.h>

struct stack
{
  int *arr;
  int top;
};

void push(struct stack *st, int val)
{
  if(st->top==-1)
  {
    printf("\nCan't Push: Overflow");
    return;
  }
  st->arr[st->top] = val;
  st->top--;
}

void display(struct stack *st, int n)
{
  int i;
  printf("\n");
  if(st->top==n-1)
  {
    printf("Stack Empty\n");
    return;
  }
  printf("Elements in stack : ");
  for(i=n-1;i>st->top;i--)
  {
    printf("%d  ",st->arr[i]);
  }
  printf("\nTop of the stack : %d\n",st->top);
}

int pop(struct stack *st, int n)
{
  int val;
  if(st->top==n-1)
  {
    printf("\nCan't Pop: Underflow");
    return -1;
  }
  st->top++;
  val = st->arr[st->top];

  return val;
}

int main()
{
  int n, option, val;
  printf("Enter the size of stack : ");
  scanf("%d",&n);
  struct stack *st;
  st->arr = (int *)malloc(n*sizeof(int));
  st->top = n-1;
  do
  {
    printf("\n1. Enter 1 to push in stack \n2. Enter 2 to pop from stack \n3. Enter 3 to display stack \n4. Enter 4 to exit\n\n");
    printf("Enter your option : ");
    scanf("%d",&option);
    switch(option)
    {
      case 1: printf("Enter the element to push : ");
              scanf("%d",&val);
              push(st,val);
              display(st,n);
              break;
      case 2: val = pop(st,n);
              if(st->top!=n-1)
              {
                printf("Popped element : %d\n",val);
              }
              display(st,n);
              break;
      case 3: display(st,n);
              break;
      case 4: break;
      default: printf("Entered wrong option\n");
               break;
    }
  }while(option!=4);

  return 0;
}
