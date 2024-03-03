import math

n = int(input())
c  = 0

while n>=5:
    n = n // 5
    c+=n
    
print(c)    
