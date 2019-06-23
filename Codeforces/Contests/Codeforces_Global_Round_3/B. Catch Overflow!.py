MAX=2**32-1
ANS="OVERFLOW!!!"
def main():
# Write the main function here
    n=int(input())
    x=0
    m=1
    stack=[]
    overflow=0
    for i in range(n):
        line=list(input().split())
        if line[0]=="add":
            if overflow>0:
                print(ANS)
                return
            x+=m
        elif line[0]=="for":
            if overflow==0:
                if m*int(line[1])<=MAX:
                    m=m*int(line[1])
                else:
                    overflow+=1
            else:
                overflow+=1
            stack.append(int(line[1]))
        elif line[0]=="end":
            popped=stack.pop()
            if overflow>0:
                overflow-=1
            else:
                m=m//popped
        if x>MAX or x<0:
            print(ANS)
            return
    print(x)
        

    # if overflow==1:    
    #     print(ANS)
    # else:
    #     print(x)
main()