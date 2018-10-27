    def checkSame(b1,n1,b2,n2):
        # Find val of first number
        val1=0
        numSplit=list(str(n1))
        i=len(numSplit)-1
        flag=0
        for item in numSplit:
            if int(item) < b1 :
                val1+=(int(item)*(b1**i))
            else:
                flag=1
                break
            i-=1

        if flag==1:
            return 0
        # print("Val1",end=" ")
        # print(val1)
        val2=0
        numSplit=list(str(n2))

        i=len(numSplit)-1
        for item in numSplit:
            if(int(item)<b2):
                val2+=(int(item)*(b2**i))
            else:
                flag=1
                break
            i-=1
        if flag==1:
            return 0
        # print("Val2",end=" ")
        # print(val2)
        if val1==val2:
            return 1
        else:
            return 0
    def convert(base,number):
        value=0
        flag=0
        numberSplit=list(str(number))
        i=len(numberSplit)-1
        # print(numberSplit)
        for item in numberSplit:
            # print(item)
            if int(item) < base:
                value+=(int(item)*(base**i))
                # print(value)
            else:
                flag=1
                break
            i-=1
        if flag==1:
            return -1
        else:
            # print(value)
            return value


    def main():
        n=int(input())
        dates=[]
        m={}
        
        while n:
            inputVal=input().split()
            base = int(inputVal[0])
            number = int(inputVal[1])
            date=(base,number)
            dateVal=convert(base,number)
            if dateVal!=-1:
                dates.append(dateVal)

                if dateVal in m:
                    m[dateVal]+=1
                else:
                    m[dateVal]=1
            n-=1
        uniqueDates=set(dates)
        # print(uniqueDates)
        count=0
        for item in uniqueDates:
            # print(item)
            # print(m[item])
            if m[item]>1:
                count+=((m[item]*(m[item]-1))/2)
        
        # print(dates)
        print(int(count))

    # Now dates are in dates [] array

    # Calculating the no of jokes possible
        """ count=0
        noOfDates=len(dates)
        for i in range(noOfDates):
            for j in range(noOfDates):
                if i!=j:
                    if checkSame(dates[i][0],dates[i][1],dates[j][0],dates[j][1]):
                        # print(str(dates[i][0])+str(dates[i][1])+str(dates[j][0])+str(dates[j][1]))
                        count+=1           
        print(int(count/2)) """

    main()
