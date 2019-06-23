def main():
    n=int(input())
    ar=list(map(int,input().split(" ")))
    # find the maximum in the Array 
    maximum=max(ar)
    # Find the count of  consecutive occurence of that element 
    maxCount=1
    continous=0
    count=0
    for i in range(len(ar)):
        if ar[i]==maximum and continous==0:
            count+=1
            continous=1
        elif ar[i]==maximum and continous==1:
            count+=1
            if count>maxCount:
                maxCount=count
        else:
            count=0
            continous=0
    print(maxCount)
main()
    
            
             