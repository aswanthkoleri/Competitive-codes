def isFibo():
    t=int(input())
    for i in range(t):
        target=int(input())
        prev1=0
        prev2=1
        current=prev1+prev2
        flag=0
        while current<=target:
            if current==target:
                flag=1
                break
            prev1=prev2
            prev2=current
            # print(current)
            current=prev1+prev2
        
        if flag==1:
            print("IsFibo")
        else:
            print("IsNotFibo")
        
isFibo()