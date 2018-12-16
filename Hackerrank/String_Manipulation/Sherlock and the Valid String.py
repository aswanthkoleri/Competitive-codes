# def gcd(m,n):
#     if m%n==0:
#         return n
#     return gcd(n,m%n)
# def main():
#     string=input()
#     # print(string)
#     dict={}
#     sum=0
#     for i in string:
#         if dict.get(i):
#             dict[i]+=1
#         else:
#             dict[i]=1
#     print(dict)
#     # val=dict[string[0]]
#     # for i in dict:
#     #     val=gcd(dict[i],val)
#     # # print(val)
    
#     # if val!=1:
#     #     print("YES")
#     #     # print("1")
#     # else:
#     #     # Find some way to detect odd one out
#     #     temp=dict[string[0]]
#     #     flag=0
#     #     for i in dict.values():
#     #         if flag!=0:
#     #             print("NO")
#     #             return
#     #         if temp!=i:
#     #             flag=1
#     #         if temp!=i and i-1 != temp and i-1 != 0:
#     #             print("NO")
#     #             return
#     #     print("YES")
#     # for i in dict.values():
#     #     set.add(i)
#     # print()
#     newdict={}
#     values=list(dict.values())
#     for i in values:
#         if newdict.get(i):
#             newdict[i]+=1
#         else:
#             newdict[i]=1
#     print(newdict)
    
#     sambhavam=list(set(list(dict.values())))
#     print(newdict[sambhavam[0]])

#     print(newdict[sambhavam[1]])
#     print(sambhavam)
#     print(len(sambhavam))
#     # if len(sambhavam) > 2:
#     #     print("NO")
#     # elif len(sambhavam)==2 and abs(sambhavam[0] - sambhavam[1]) > 1 and sambhavam[0]!=1 and sambhavam[1]!=1:
#     #     print("NO")
#     # elif len(sambhavam)==2 and abs(sambhavam[0] - sambhavam[1]) == 1 and newdict[sambhavam[0]]>1 and newdict[sambhavam[1]]>1 :
#     #     print("NO")
#     # else:
#     #     print("YES")  
#     listOfFreq=list(dict.values())
#     print(listOfFreq)
#     FreqOfFreq=newdict
#     if len(sambhavam) == 1:
#         print("YES")
#     elif len(sambhavam)==2 and (FreqOfFreq[sambhavam[0]]==1 or FreqOfFreq[sambhavam[1]]==1) :
#         print("YES")
#     elif len(sambhavam)==2 and  
        
     

                
# main()
    

def main():
    string=input()
    # First case is all the letters are of same freq
    #  Take the freq 
    dict={}
    for i in string:
        if dict.get(i):
            dict[i]+=1
        else:
            dict[i]=1
    setOfFreq=list(set(list(dict.values())))
    # print(setOfFreq)
    Y="YES"
    N="NO"
    # Frequency of numbers should also be taken
    FreqOfNum={}
    for i in dict.values():
        if FreqOfNum.get(i):
            FreqOfNum[i]+=1
        else:
            FreqOfNum[i]=1
    
    if len(setOfFreq)==1:
        print(Y)
        # Two posiibilities :
        # 1. One letter with frequency one and that letter is can be removed
        # 2. The letter with Frequence not one and if removed can balance
    elif len(setOfFreq)==2 and setOfFreq[0]==1 and FreqOfNum[1]==1 :
        print(Y)
    elif len(setOfFreq)==2 and setOfFreq[1]==(setOfFreq[0]+1) and FreqOfNum[setOfFreq[1]]==1:
        print(Y)
    else: 
        print(N)
main()