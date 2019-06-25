# import random
def is_prime(n):
  if n == 2 or n == 3: return True
  if n < 2 or n%2 == 0: return False
  if n < 9: return True
  if n%3 == 0: return False
  r = int(n**0.5)
  f = 5
  while f <= r:
    # print (" ",f)
    if n%f == 0: return False
    if n%(f+2) == 0: return False
    f +=6
  return True  

def main():
  # *****************Input********************
  n=int(input()) 

  # *****************Algo*********************
  # Check whether n is greater that >25
  if is_prime(n):
    print(-1)
    return

  if n>=25:
    # Algo !! 
    # Find j such that  i>5 
    j=-1
    for i in range(5,n):
      if n%i==0 and n//i >= 5:
        j=n//i
        break
    # Construct the word now 
    # print(i,j)
    if j==-1:
      print(-1)
      return
    # word=''
    # vow="aeiou".split()
    r=i
    c=j
    vowels=['a','e','i','o','u']
    # print(vowels)
    word=''
    k=0
    for i in range(r):
      t=k
      for j in range(c):
        word+=vowels[(j+t)%5]
        # print(word)
        # if j==4:
          # t+=1
      k+=1
  else:
    print(-1)
    return
  # *****************Output*******************
  # print(is_prime(n))
  print(word)
  
main()