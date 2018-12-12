def main():
    n=int(input())
    string=input().split()
    a=[]
    for i in range(len(string)):
        a.append(int(string[i]))
    # print(a)
    # print(min(a))
    start=max(a)
    end=sum(a)
    # print(end)
    for i in range(start,end+1):
        # print(i)
        if (end)%i == 0:
            print(i,end=" ")
main()