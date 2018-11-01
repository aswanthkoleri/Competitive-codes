def solve(n,d):
    s=[]
    s.append(d)
    while s:
        new=s
        s=[]
        flag=0
        for i in new:
            if i%n==0:
                flag=1
                answer=i
                break
        
        if flag==1:
            break
        else:
            # Push the new elements to the array
            for i in new:
                s.append(int(str(i)+'0'))
                s.append(int(str(i)+'9'))

    return answer
        



def main():
    t=int(input())
    while t:
        n=int(input())
        d=9
        res=solve(n,d)
        print(res)
        t-=1

main()

