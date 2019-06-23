def main():
    vowel=dict()
    vowel['a']=True
    vowel['e']=True
    vowel['i']=True
    vowel['o']=True
    vowel['u']=True
    consonants=['b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z']
    # accept s and t
    s=input()
    t=input()
    if len(s)!=len(t):
        print("No")
        return
    flag=1
    for i in range(len(s)):
        # print(s[i])
        # print(t[i])
        # either both should be vowel or both should be consonant
        if  s[i] not in vowel and t[i] not in vowel or s[i] in vowel and t[i] in vowel:
            flag=1
        else:
            flag=0
            break
    # print("Yes")
    if flag==1:
        print("Yes")
    else:
        print("No")
    return
main()
        # else:

