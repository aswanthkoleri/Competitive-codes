def main():
    # accept the string 
    length=int(input())
    string=input()
    count=length
    # find the all the substrings which have alll elements same
    prev=string[0]
    mul=1
    flag=0
    for i in range(1,length):
        if string[i]==prev:
            count+=1*mul
            # print("even")  
            # print(string[i])
            mul+=1
            # flag=1
        else:
            # flag=0
            mul=1
        prev=string[i]
    # find all the substrings which have only the middle element different and rest everything same
    for i in range(1,length-1):
        j=1
        k=1
        store=string[i-j]
        while i-j >=0 and i+k < length and string[i-j]==string[i+k] and string[i]!=string[i-j] and string[i]!=string[i+k] and store==string[i-j] :
            count+=1
            # print("odd")
            # print(str(i-j) + " "+ str(i)+" "+str(i+k))
            j+=1
            k+=1
    print(count)
main()