m=[]
def super_digit(s):
    if len(s)==1:
        return s[0]
    else:
        return super_digit(str(sum(list(map(int,s)))))

def main():
    totalInput=input().split(" ")
    n=totalInput[0]
    k=int(totalInput[1])
    string=""
    for _ in range(k):
        string+=n
    print(string)
    print(super_digit(string))
main()