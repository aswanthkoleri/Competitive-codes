def comparator(a,b):
    a=str(a)
    b=str(b)
    ab=a+b
    ba=b+a
    # print((int(ba) > int(ab)) - (int(ba) < int(ab)))
    return ((int(ba) > int(ab)) - (int(ba) < int(ab)))

def myCompare(mycmp):       
    # Convert a cmp= function into a key= function 
    class K(object): 
        def __init__(self, obj, *args): 
            self.obj = obj 
        def __lt__(self, other): 
            return mycmp(self.obj, other.obj) < 0
        def __gt__(self, other): 
            return mycmp(self.obj, other.obj) > 0
        def __eq__(self, other): 
            return mycmp(self.obj, other.obj) == 0
        def __le__(self, other): 
            return mycmp(self.obj, other.obj) <= 0
        def __ge__(self, other): 
            return mycmp(self.obj, other.obj) >= 0
        def __ne__(self, other): 
            return mycmp(self.obj, other.obj) != 0
    return K 


def largestNumber(A):
    s=sorted(A,key=myCompare(comparator))
    # print("sorted",)
    s="".join(map(str,s))
    return s
    

if __name__=="__main__":
# Write the main function here
    A=list(map(int,input().split()))
    print(largestNumber(A))