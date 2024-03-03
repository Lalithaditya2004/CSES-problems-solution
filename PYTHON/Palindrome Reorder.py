s = str(input())
count = dict()
for x in s:
    count[x] = 1 + count.get(x,0)
tot = 0
n = len(s)
t = [0]*n
for x in count.keys():
    if count[x]%2 != 0:
        tot  = tot + 1
    if tot>1:
        break
if tot>1:
    print("NO SOLUTION")
else:
    i = 0
    for x in count.keys():
        if count[x] % 2 == 0:
            while( count[x]/2 > 0 ):
                t[i] = t[n-i-1] = x  
                count[x] = count[x] - 2
                i = i+1
        else:
            t[(n-1)//2] = x 
            if count[x]>1:
                for y in range(1,(count[x]+1)//2):
                    t[((n-1)//2) - y] = t[((n-1)//2) + y] = x
    print("".join(t))            
