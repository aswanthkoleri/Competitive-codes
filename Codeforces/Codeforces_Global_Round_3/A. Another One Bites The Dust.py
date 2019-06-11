def maxLen(a,b,c):
    smallest=a if a<=b else b
    extra=0
    if a-b != 0:
        extra=1
    final=c*2 + smallest*2 +extra
    return final
if __name__=="__main__":
# Write the main function here
    # a b c 
    [a,b,c]=list(map(int,input().split()))
    print(maxLen(a,b,c))