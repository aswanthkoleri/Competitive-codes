def tonum(character):
    return ord(character)-ord('a')

def main():
    q=int(input())
    for _ in range(q):
        # accept the string
        string=input()
        m={}
        # find all the substring in the string
        for i in range(len(string)):
            freq=[0 for _ in range(26)]
            for j in range(i, len(string)):
                freq[tonum(string[j])]+=1
                if str(freq) in m:
                    m[str(freq)]+=1
                else:
                    m[str(freq)]=1
        # print(m)
        # No we have to iterate through all the values of m
        countOfAnagrams=0
        for i in m.values():
            countOfAnagrams+=((i*(i-1))/2)
        print(int(countOfAnagrams))

main()