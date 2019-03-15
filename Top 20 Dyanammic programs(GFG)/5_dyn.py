# We can do Top down programming in this
table=[]
def count(n):
    if table[n]!=0:
        return table[n]
    if n==0:
        table[n]=1
        return table[n]
    elif n<0:
        return 0
    else:
        table[n]=count(n-1)+count(n-2)+count(n-3)
        return table[n]

def main():
    global table
    t=int(input())
    for i in range(t):
        n=int(input())
        table=[0 for _ in range(n+1)]
        print(count(n))
main()