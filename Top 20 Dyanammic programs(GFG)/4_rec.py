def findmin(i,ar,sum1,sum2):
    # if the traversal of array has finished then return the difference
    if i==0:
        return abs(sum1-sum2)
    else:
        # find the min difference of subsets by including the current element being traversed and not including it too
        return min(findmin(i-1,ar,sum1+ar[i-1],sum2-ar[i-1]),findmin(i-1,ar,sum1,sum2))

def main():
    #  accept array 
    ar=list(map(int,input().split(" ")))
    print(findmin(len(ar),ar,0,sum(ar)))

main()