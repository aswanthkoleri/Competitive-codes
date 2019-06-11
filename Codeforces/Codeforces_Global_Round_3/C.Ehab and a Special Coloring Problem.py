if __name__=="__main__":
# Write the main function here
    n=int(input())
    a={}
    c=0
    for i in range(2,n+1):
        if i not in a:
            c+=1
            a[i]=c
            for j in range(2*i,n+1,i):
                a[j]=a[i]
    for i in range(2,n+1):
        print(a[i],end=" ")
    