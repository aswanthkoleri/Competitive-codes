def binarySearch(arr, l, r, x): 
  
    while l <= r: 
  
        mid = l + (r - l)/2; 
          
        # Check if x is present at mid 
        if arr[mid] == x: 
            return mid 
  
        # If x is greater, ignore left half 
        elif arr[mid] < x: 
            l = mid + 1
  
        # If x is smaller, ignore right half 
        else: 
            r = mid - 1
      
    # If we reach here, then the element 
    # was not present 
    return -1
def searchMatrix(A, B):
    # A->Matrix
    # B->Integer

def main():
    # *****************Input********************
    [r,c]=list(map(int,input().split()))
    A=[]
    for i in range(r):
        temp=list(map(int,input().split()))
        A.append(temp)
    search=int(input())
    # *****************Algo*********************
    answer=searchMatrix(A,search)

    # *****************Output*******************
    print(answer)
    
main()

