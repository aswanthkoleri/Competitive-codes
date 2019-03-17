def isThereSubset(n,ar,sumVal):
    # Last element can be included in the set or can be exclude
    if n<0:
        return False
    if sumVal<0:
        return False
    elif sumVal == 0:
        return True
    else:
        return isThereSubset(n-1,ar,sumVal-ar[n-1]) or isThereSubset(n-1,ar,sumVal)

def main():
    ar=list(map(int,input().split(" ")))
    sumVal=int(input())
    print(isThereSubset(len(ar),ar,sumVal))
main()