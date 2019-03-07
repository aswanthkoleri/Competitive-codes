'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here
def main():
    # accept X Y N W P1 P2
    t=int(input())
    for _ in range(t):
        inputString=input().split(" ")
        x=int(inputString[0])
        y=int(inputString[1])
        N=int(inputString[2])
        w=int(inputString[3])
        p1=int(inputString[4])
        p2=int(inputString[5])
        max=0
        if x>=w:
            max=p1
        if y>=w and p2>max:
            max=p2
        if x<w and y<w and x+y>=w:
            max=(p1*p2)/100
        if n<2:
            max=0
        # print(round(max,6))
        print(str.format('{0:.6f}',max))
main()