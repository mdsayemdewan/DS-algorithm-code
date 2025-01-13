#include <stdio.h>
#define MAXSIZE 5

struct stack
{
    int stk[MAXSIZE];
    int top;
}s;

void push ()
{
    char ch;
    if (s.top == (MAXSIZE - 1))
    {
        printf ("Don't do overflow\n");
        return;
    }
    else
    {
        printf ("Enter the element to be pushed\n");
        scanf (" %c", &ch);
        s.top = s.top + 1;
        s.stk[s.top] = ch;
    }
    return;
}