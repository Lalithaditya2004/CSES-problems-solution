t = int(input())
while t>0 :
    y , x = map(int,input().split())
    if x >= y :
        if x % 2 ==0 :
            print(((x-1)**2)+y)
        else :
            print(((x)**2) - y + 1)
    else:
        if y % 2 == 0 :
            print((y**2) - x + 1)
        else :
            print(((y-1)**2) + x)
    t-=1


