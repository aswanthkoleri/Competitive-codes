#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define stacksize 1000002
struct stack{
    int top;
    int item[stacksize];
}
void push(struct stack *s,int item)
{
    if(s->top==stacksize-1){
        printf("Stack overflow");
    }
    else{
        s->top++;
        s->item[s->top]=item;
    }
}
bool isEmpty(struct stack *s){
    return (s->top==-1)?true:false;
}
int pop(struct stack *s){
    if(s->top==-1)
    {
        printf("stack underflow");
        return -1;
    }
    else{
        int item=s->item[s->top];
        s->top--;
        return item;
    }
}

int main()
{
return 0;
}