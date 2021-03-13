#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int q[25], n ,front=-1 , rear=-1 , item;

void insertion()
{
       
     if((rear==n) && (front==(rear+1))||(front==rear+1))
     {
       printf(“\nQueue Overflow\n”);
     }
       
       else if (rear==0)
       front = rear = 1;
       
       else if(rear==n)
       rear=1;
       
       else
       rear=rear+1;
       
       printf(“Enter the item : “);
       scanf(“%d”,&item);
       q[rear] = item;
       printf(“%d is inserted\n\n”,item);
       
     }
     
void deletion()
{
     if(front==0)
     {
                    printf(“\nQueue Underflow\n\n”);
           
          }
          
     item=q[front];
          
     if(front==rear)
     {
               front=0;
               rear=0;
     }
     
     else if (front=n)
     front=1;
     
     else
     front=front+1;
     
      printf(“\n%d is deleted\n\n”,item);
 }  
     
void show()         
{
     for(int i=0;i<=rear;i++)
     printf(“%d\t”,q[i]);


 }
     
     
     
int main()
{   
    int op;
    
    printf(“Enter the size of the queue : “);
    scanf(“%d”,&n);
    
    do
          {
             printf(“\n1 : Insert”);
             printf(“\n2 : Delete”);
             printf(“\n3 : Print”);
             printf(“\n4 : Exit”);
             printf(“\nEnter your choice : “);
             scanf(“%d”,&op);
          
             switch(op)
             {
                    case 1:
                              insertion();
                              break;
                              
                    case 2:
                              deletion();
                              break;
                              
                    case 3:
                              show();
                              break;
                    
                                   
                    //default:
                      //        printf(“Invalid Option. Try again.”);
                    
              }
        }while(op!=4);
        
        printf(“\n—THE END—\n”);
    }