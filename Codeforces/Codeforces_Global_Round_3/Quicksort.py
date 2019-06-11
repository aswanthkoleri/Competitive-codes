def partition(arr,low,high): 
    i = ( low-1 )         # index of smaller element 
    pivot = arr[high]     # pivot 
    # print("Pivot 1 = ",pivot)
# What we are basically doing in the next few steps :
# 1. Whenever we find an element less than the pivot element we swap it with the element starting from the 0th index.
# 2. Point to note is that there can be unnecessary swapping as the 0th index element can itself be less than the pivot.
# 3. Finally when we arrange all the elements less than pivot in one side, the index right after that is the exact position for the pivot
# 4. Swap the pivot with that position.This way we can get the correct position of an element in the sorted array.
# 5. After that we will find the correct position for the pivot in the elements before and after the current pivot got. 
    for j in range(low , high): 
  
        # If current element is smaller than or 
        # equal to pivot 
        # print(arr[j],pivot,arr[j]+pivot)
        if arr[j] < pivot: 
            # increment index of smaller element 
            i = i+1 
            arr[i],arr[j] = arr[j],arr[i]
    # print("Pivot 2 = ",pivot,arr[high])
    # if (arr[i+1]+arr[high])%2!=0:
    arr[i+1],arr[high] = arr[high],arr[i+1] 
    return ( i+1 )
# The main function that implements QuickSort 
# arr[] --> Array to be sorted, 
# low  --> Starting index, 
# high  --> Ending index 
  
# Function to do Quick sort 
def quickSort(arr,low,high):
    if low < high: 
  
        # pi is partitioning index, arr[p] is now 
        # at right place 
        pi = partition(arr,low,high) 
        # print("array=",arr,"i+1= ",pi)
        # Separately sort elements before 
        # partition and after partition 
        quickSort(arr, low, pi-1) 
        quickSort(arr, pi+1, high)

if __name__=="__main__":
# Write the main function here
    n=int(input())
    ar=list(map(int,input().split()))
    # print(ar)
    quickSort(ar,0,len(ar)-1)
    # print(ar)
    for i in ar:
        print(i,end=" ")
    # # Find the minimum number and the index
    # minimum=min(ar)
    