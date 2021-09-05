#include<stdio.h>
#include<stdlib.h>

struct queue
{
  int *arr;
  int front;
  int rear;
};

void enque(struct queue *q, int val, int n)
{
  if(q->rear==n-1)
  {
    printf("\nCan't Enque: Overflow");
    return;
  }
  if(q->rear==-1)
  {
    q->front++;
  }
  q->rear++;
  q->arr[q->rear] = val;
}

void display(struct queue *q, int n)
{
  int i;
  printf("\n");
  if(q->rear==-1)
  {
    printf("Queue Empty\n");
    return;
  }
  printf("Elements in queue : ");
  for(i=q->front;i<=q->rear;i++)
  {
    printf("%d  ",q->arr[i]);
  }
  printf("\nFront and Rear of the queue : %d, %d\n",q->front,q->rear);
}

int deque(struct queue *q, int n)
{
  int val;
  if(q->rear==-1)
  {
    printf("\nCan't Deque: Underflow");
    return -1;
  }
  val = q->arr[q->front];
  if(q->front==q->rear)
  {
    q->front = -1;
    q->rear = -1;
  }
  else
  {
    q->front++;
  }

  return val;
}

int main()
{
  int n, option, val;
  printf("Enter the size of queue : ");
  scanf("%d",&n);
  struct queue *q;
  q->arr = (int *)malloc(n*sizeof(int));
  q->front = -1;
  q->rear = -1;
  do
  {
    printf("\n1. Enter 1 to enque in queue \n2. Enter 2 to deque from queue \n3. Enter 3 to display queue \n4. Enter 4 to exit\n\n");
    printf("Enter your option : ");
    scanf("%d",&option);
    switch(option)
    {
      case 1: printf("Enter the element to enque : ");
              scanf("%d",&val);
              enque(q,val,n);
              display(q,n);
              break;
      case 2: val = deque(q,n);
              if(val!=-1)
              {
                printf("Dequed element : %d\n",val);
              }
              display(q,n);
              break;
      case 3: display(q,n);
              break;
      case 4: break;
      default: printf("Entered wrong option\n");
               break;
    }
  }while(option!=4);

  return 0;
}
