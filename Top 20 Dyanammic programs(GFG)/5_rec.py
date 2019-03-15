def count(n):
    if n==0:
        return 1
    elif n<0:
        return 0
    else:
        return count(n-1)+count(n-2)+count(n-3)

def main():
    n=int(input())
    print(count(n))
main()