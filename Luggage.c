#include<stdio.h>
#include<stdlib.h>

#define MAX 100

char queue[MAX];
int f=-1;
int l=-1;

void insert()
{
    int item;
    if (l==MAX-1)
        printf("Queue Overflow \n");
    else
    {
        f=0;
        printf("Insert the luggage in queue : ");
        scanf("%d",&item);
        l=l+1;
        queue[l] = item;
        
    }
}
void delet()
{
    if(f==-1 || f>l)
        printf("Queue Underflow \n");
    else
    {
        printf("Removed luggage from queue: %d\n",queue[f]);
        f=f+1;
    }
}
void display()
{
    int i;
    if (f==-1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i=f;i<=l;i++)
            printf("%d ",queue[i]);
        printf("\n");
    }
}
int main()
{
    int n;
    printf("1.Insert luggage into queue \n");
    printf("2.Remove luggage from queue \n");
    printf("3.Display luggage in queue \n");
    printf("4.Quit \n");
    do
    {
        printf("Enter your operation: ");
        scanf("%d", &n);
        switch(n)
        {
            case 1: insert();
                    break;
            case 2: delet();
                    break;
            case 3: display();
                    break;
            case 4: exit(1);
            default:printf("Wrong choice \n");
        }
    }while(n<=4);
}

