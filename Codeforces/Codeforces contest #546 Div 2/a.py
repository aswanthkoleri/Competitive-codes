def main():
    n=int(input())
    m=dict()
    for i in range(n):
        [start,end]=list(map(int,input().split(" ")))
        for j in range(start,end+1):
            m[j]=i
    page=int(input())
    k=m[page]
    print(n-k)
main()
