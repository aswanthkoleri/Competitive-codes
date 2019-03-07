def main():
    # accept the two strings
    string1=list(input())
    string2=list(input())
    length=len(string1)
    set1=[]
    for i in range(length):
        if string1[i] in string2:
            set1.append(string1[i])
    set2=[]
    for i in range(length):
        if string2[i] in string1:
            set2.append(string2[i])
    print(set1)
    print(set2)
    i=0
    j=0
    count1=0
    while True:
        if i>=len(set1) or j>=len(set2):
            break
        if set1[i]==set2[j]:
            count1+=1
            i+=1
            j+=1
        else:
            
            i+=1
        
    i=0
    j=0
    count2=0
    while True:
        if i>=len(set1) or j>=len(set2):
            break
        if set1[i]==set2[j]:
            count2+=1
            i+=1
            j+=1
        else:
            j+=1
        
    i=0
    j=0
    count3=0
    while True:
        if i>=len(set1) or j>=len(set2):
            break
        if set1[i]==set2[j]:
            count3+=1
            i+=1
            j+=1
        else:
            j+=1
            i+=1
        
    result=max(count1,count2,count3)
    print(result)

main()