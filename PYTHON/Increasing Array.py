n = int(input())
t = list(map(int,input().split()))

steps = 0
for i in range(1,n):
    if t[i-1]>t[i]:
        steps = steps + (t[i-1] - t[i])
        t[i]= t[i-1]


print(steps)
