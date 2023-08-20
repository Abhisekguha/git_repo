#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct stack
{
    int capacity;
    int top;
    int *array;
};

struct stack *createStack(int capacity)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->capacity = capacity;
    s->top = -1;
    s->array = (int *)malloc(s->capacity * sizeof(int));
    return s;
}

void push(struct stack *s, int item)
{
    if (s->top == s->capacity - 1)
    {
        printf("Stack overflow!\n");
        return;
    }
    s->top++;
    s->array[s->top] = item;
}

int pop(struct stack *s)
{
    if (s->top == -1)
    {
        printf("Stack underflow!\n");
        return -1;
    }
    int item = s->array[s->top];
    s->top--;
    return item;
}

void moveDisk(char from_rod, char to_rod, int disk)
{
    printf("Move disk %d from rod %c to rod %c\n", disk, from_rod, to_rod);
}

void iterativeTowerOfHanoi(int num_disks, struct stack *src, struct stack *aux, struct stack *dest)
{
    int total_moves = pow(2, num_disks) - 1;
    char s = 'A', a = 'B', d = 'C';
    if (num_disks % 2 == 0)
    {
        char temp = a;
        a = d;
        d = temp;
    }
    for (int i = num_disks; i >= 1; i--)
        push(src, i);
    for (int i = 1; i <= total_moves; i++)
    {
        if (i % 3 == 1)
            moveDisk(s, d, pop(src));
        else if (i % 3 == 2)
            moveDisk(s, a, pop(src));
        else if (i % 3 == 0)
            moveDisk(a, d, pop(aux));
    }
}

int main()
{
    int num_disks;
    printf("Enter the number of disks: ");
    scanf("%d", &num_disks);
    struct stack *src = createStack(num_disks);
    struct stack *aux = createStack(num_disks);
    struct stack *dest = createStack(num_disks);
    iterativeTowerOfHanoi(num_disks, src, aux, dest);
    return 0;
}
