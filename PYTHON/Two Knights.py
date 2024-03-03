n = int(input())
for i in range(1,n+1):
    s= i*i
    net = ((s)*(s-1))//2
    t = i-2
    opposing = 4*((t)**2)+(4*t)
    print(net - opposing)
