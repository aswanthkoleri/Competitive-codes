class Solution:
    # @param A : integer
    # @param B : integer
    # @return an integer
    def divide(self, A, B):
        
        dividend=A
        divisor=B
        if dividend > 2147483647 or divisor == 0:
            return 2147483647
        sign = (-1 if((dividend < 0) ^  
                      (divisor < 0)) else 1); 
       
        dividend = abs(dividend); 
        divisor = abs(divisor); 
          
         
        quotient = 0; 
        temp = 0; 
          
        
        for i in range(31, -1, -1): 
            if (temp + (divisor << i) < dividend): 
                temp += divisor << i; 
                quotient |= 1 << i; 
        quotient = -quotient if negative else quotient
        return 2147483647 if quotient >= 2147483647 or quotient = -2147483648 else quotient  
        # return sign * quotient;
        