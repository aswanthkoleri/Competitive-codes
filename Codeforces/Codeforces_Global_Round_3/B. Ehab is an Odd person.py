# def bubbleSort(arr): 
#     n = len(arr) 
  
#     # Traverse through all array elements 
#     for i in range(n): 
  
#         # Last i elements are already in place 
#         for j in range(0, n-i-1): 
  
#             # traverse the array from 0 to n-i-1 
#             # Swap if the element found is greater 
#             # than the next element 
#             if arr[j] > arr[j+1] and (arr[j]+arr[j+1])%2!=0 : 
#                 arr[j], arr[j+1] = arr[j+1], arr[j] 
if __name__=="__main__":
# Write the main function here
    n=int(input())
    ar=list(map(int,input().split()))
    odd=0
    even=0
    for i in ar:
        if i%2==0:
            even=1
        else:
            odd=1
    
    if odd==1 and even==1:
        ar.sort()
    for i in ar:
        print(i,end=" ")
