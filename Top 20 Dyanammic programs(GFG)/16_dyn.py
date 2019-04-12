DICTIONARY={
    "mobile": True,
    "sam" : True,
    "sung" : True,
    "samsung" : True,
    "man" : True,
    "mango" : True,
    "icecream": True,
    "and" : True,
    "go":True,
    "i":True,
    "like" : True,
    "ice" : True,
    "cream": True
}

def wordBreak(sentence,size):
    if size==0:
        return True
    else:
        for i in range(size):
            if sentence[:i+1] in DICTIONARY and wordBreak(sentence[i+1:],size-(i+1)):
                DICTIONARY[sentence]=True
                return True
    return False
def main():
    # Accept the sentence
    sentence=input()
    print(wordBreak(sentence,len(sentence)))

main()
