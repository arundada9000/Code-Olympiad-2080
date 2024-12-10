#include <stdio.h>
#define max 5
int front = -1, rear = -1, queue[max];
int isFull()
{
    return ((rear + 1) % max == front);
}
int isEmpty()
{
    return rear == front;
}
int enqueue()
{
    if (isFull())
    {
        printf("The queue is full...");
        return;
    }
    int data;
    printf("Enter data to be inserted : ");
    scanf("%d", &data);
    rear++;

    queue[rear] = data;
    printf("Enqueued %d into the queue\n", data);
}
int dequeue() {}
int peek() {}
int display() {}
int main()
{
    system("cls");
    printf("............Queue............");
    int choice;
    do
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Successfully exited...");
            break;
        default:
            printf("Invalid choice!!!\nPlease choose again: ");
        }
    } while (choice != 5);
}