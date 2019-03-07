mod=(10**10+7)
dp=[-1]*100001
def foo(n):
    if n==0:
        return 1
    elif n<0:
        return 0
    elif dp[n]!=-1:
        return dp[n]
    dp[n] = foo(n-1)%mod
    dp[n]=(dp[n]+foo(n-2))%mod
    dp[n]=(dp[n]+foo(n-3))%mod
    return dp[n]

def main():
    q=int(input())
    for _ in range(q):
        steps=int(input())
        count=0
        count=foo(steps)
        print(count)
main()  