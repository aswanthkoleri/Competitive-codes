def findSumOfDigits(digit):
    arrayOfDigits=[int(i) for i in list(str(digit))]
    return sum(arrayOfDigits)
    
def main():
    no=int(input())
    max=1
    maxValue=1
    for i in range(1,no+1):
        if no%i==0:
            # print("i=="+str(i))
            # if divisible then check sum and then update the max value
            sumOfDigits=findSumOfDigits(i)
            # print(sumOfDigits)
            if sumOfDigits>max:
                max=sumOfDigits
                maxValue=i
    print(maxValue)
main()


