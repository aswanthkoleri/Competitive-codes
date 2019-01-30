def main():
    q=int(input())
    for _ in range(q):
        s1=input()
        s2=input()
        m1={}
        flag=0
        for i in s1:
            m1[i]=1
        for i in s2:
            if i in m1:
                # print("NO")
                flag=1
                break
        if flag==0:
            print("NO")
        else:
            print("YES")
    return

main()