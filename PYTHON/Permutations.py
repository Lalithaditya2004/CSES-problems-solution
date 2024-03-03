n = int(input())
if n%2==0:
    t = n-1
else:
    t = n
sub = t//2
add = sub+1
intial = 1

for i in range(n):
    if n==2 or n==3:
        print("NO SOLUTION")
        break
    if n==4:
        print('2 4 1 3')
    print(intial,end=' ')
    if i%2 != 0 :
        intial = intial - sub
    else:
        intial = intial + add