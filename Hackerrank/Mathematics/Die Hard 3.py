def main():
    t=int(input())
    while t:
        line=input().split()
        a=int(line[0])
        b=int(line[1])
        c=int(line[2])
        # print(c%abs(b-a))
        # print(c%a)
        # print(c%b)
        # if c%a==0 or c%b==0:
        #     print("YES")
        # elif cabs(b-a)
        #     print("NO") 
        # Possible numbers formed
        pos=[]
        if a>=b:
            diff=(a-b)
            pos.append(diff)
            pos.append(a)
            pos.append(b)
            r=b-diff
            if r>0:
                e=a-r
            else:
                e=-r
            pos.append(e)
        elif b>a:
            diff=(b-a)
            pos.append(diff)
            pos.append(a)
            pos.append(b)
            r=a-diff
            if r>0:
                e=b-r
            else:
                e=-r
            pos.append(e)
        if c in pos:
            print("YES")
            print(pos)
        else:
            print(pos)
            print("NO")
        t-=1
main()