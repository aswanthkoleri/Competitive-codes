#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define stacksize 1000002
struct stack{
    int top;
    int item[stacksize];
};
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
int isEmpty(struct stack *s){
    return (s->top==-1)?1:0;
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
int getTop(struct stack *s){
    if(s->top==-1){
        printf("empty stack");
        return -1;
    }
    else{
        return s->item[s->top];
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    long long int ar[n+1];
    int x[n+1],y[n+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&ar[i]);
    }   
    struct stack s;
    /* Compute x[i] */
    for(int i=1;i<=n;i++)
    {
        while(isEmpty(&s)!=1){
            int del;
            if(ar[i]>=ar[getTop(&s)])
            del=pop(&s);
        }
        if(isEmpty(&s)==1){
            x[i]=-1;
        }
        else{
            x[i]=getTop(&s);   
        }
        push(&s,i);
    }
    while(isEmpty(&s)!=1){
        int del=pop(&s);
    }
    for(int i=n;i>=1;i--)
    {
        printf("%lld",ar[getTop(&s)]);
        while(isEmpty(&s)!=1){
            int del;
            if(ar[i]>=ar[getTop(&s)])
         del=pop(&s);
        }
        if(isEmpty(&s)==1){
            y[i]=-1;
        }
        else{
            y[i]=getTop(&s);   
        }
        push(&s,i);
    }
    for(int i=1;i<=n;i++){
int yello = y[i]+x[i];
        printf("%d ",yello);
    }
return 0;
}