# Box stacking problems :
# Note :
# This is same as the Longest Increasing Subsequence problem. We are given the dimensions of the Boxes 
# And we are suppose to create an array of the base areas. So basically the array contains elements 3 times that of 
# of the orginal no of boxes. Then we find the Longest increasing subsequence in this array.

# Class box
class Box:
    # constructor
    def __init__(self,h,w,l):
        self.l=l
        self.w=w
        self.h=h
    # This is for sorting the boxes according to the base area
    def __lt__(self, other): 
        return self.l * self.w < other.l * other.w

def maxStack(arr,n):
    rot = [Box(0, 0, 0) for _ in range(3 * n)] 
    index = 0
    for i in range(n): 
  
        # Copy the original box 
        rot[index].h = arr[i].h 
        rot[index].l = max(arr[i].l, arr[i].w) 
        rot[index].w = min(arr[i].l, arr[i].w) 
        index += 1
  
        # First rotation of the box 
        rot[index].h = arr[i].w 
        rot[index].l = max(arr[i].h, arr[i].l) 
        rot[index].w = min(arr[i].h, arr[i].l) 
        index += 1
  
        # Second rotation of the box 
        rot[index].h = arr[i].l 
        rot[index].l = max(arr[i].h, arr[i].w) 
        rot[index].w = min(arr[i].h, arr[i].w) 
        index += 1
    n*=3
    rot.sort(reverse = True) 
    msh = [0] * n 
    for i in range(n): 
        msh[i] = rot[i].h
    for i in range(1, n): 
        for j in range(0, i): 
            if (rot[i].w < rot[j].w and rot[i].l < rot[j].l): # If the base is larger than the previous base
                if msh[i] < msh[j] + rot[i].h: 
                    msh[i] = msh[j] + rot[i].h

    maxm = -1
    for i in range(n): 
        maxm = max(maxm, msh[i])   
    return maxm
if __name__=="__main__":
    # The boxes 
    arr=[Box(4, 6, 7), Box(1, 2, 3),Box(4, 5, 6), Box(10, 12, 32)]
    n=len(arr)
    print(maxStack(arr,n))