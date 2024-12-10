#include <stdio.h>

#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1, rear = -1;

int isEmpty()
{
    return front == -1 && rear == -1;
}

int isFull()
{
    return (rear + 1) % MAX_SIZE == front;
}

void enqueue(int value)
{
    if (isFull())
    {
        printf("Queue Overflow: Cannot enqueue element into a full queue\n");
        return;
    }

    if (isEmpty())
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX_SIZE;
    }

    queue[rear] = value;
    printf("Enqueued %d into the queue\n", value);
}

int dequeue()
{
    int value;

    if (isEmpty())
    {
        printf("Queue Underflow: Cannot dequeue element from an empty queue\n");
        return -1;
    }

    value = queue[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAX_SIZE;
    }

    printf("Dequeued element: %d\n", value);
    return value;
}

int peek()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return -1;
    }

    return queue[front];
}

void display()
{
    int i;

    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Elements in the queue: ");
    for (i = front; i != rear; i = (i + 1) % MAX_SIZE)
    {
        printf("%d ", queue[i]);
    }
    printf("%d\n", queue[i]);
}

int main()
{
    int choice, value;

    do
    {
        printf("\nQueue Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to enqueue: ");
            scanf("%d", &value);
            enqueue(value);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            value = peek();
            if (value != -1)
            {
                printf("Front element: %d\n", value);
            }
            break;

        case 4:
            display();
            break;

        case 5:
            printf("Exiting the program\n");
            break;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 5);

    return 0;
}
