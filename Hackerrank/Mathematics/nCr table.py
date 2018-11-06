# def comb(n,i):
#     count=0
#     mul=i
#     denominator=1
#     for k in range(i):
#         denominator*=mul
#         mul-=1
#     numerator=1
#     mul=n
#     for k in range(i):
#         numerator*=mul
#         mul-=1
#     return int(numerator/denominator)%10**9

# def printResult(n):
#     c = 1
#     for i in range(1,n+2):
#         print(int(c%(10**9)),end=" ")
#         c = c * (n+1-i)//i
    
# # Main
# def main():
#     t=int(input())
#     while t:
#         n=int(input())
#         printResult(n)
#         print()
#         t-=1
# main()
def comb(n,i):
    count=0
    mul=i
    denominator=1
    for k in range(i):
        denominator*=mul
        mul-=1
    numerator=1
    mul=n
    for k in range(i):
        numerator*=mul
        mul-=1
    return (numerator//denominator)%10**9

def printResult(n):
    for i in range(n+1):
        result=comb(n,i)
        print(result,end=" ")

# Main
def main():
    t=int(input())
    while t:
        n=int(input())
        printResult(n)
        print()
        t-=1
main()

