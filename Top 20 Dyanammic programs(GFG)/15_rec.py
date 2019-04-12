def coin(val,length,s):
    if val==0:
        return 1
    elif val<0:
        return 0
    elif length<=0 and val>0:
        return 0
    else:
        # exclude coin and include coin
        return coin(val,length-1,s) + coin(val-s[length-1],length,s)

def main():
    # value
    N=int(input())
    # Array
    s=list(map(int,input().split()))
    print(coin(N,len(s),s))
main()
