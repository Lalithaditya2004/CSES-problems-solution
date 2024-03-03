n = int(input())
s = (n*(n+1))//2
s1 = set()
s2 = set()
if s % 2!=0 :
    print("NO")
else:
    if n%4==0:
        for i in range(1,(n//4)+1):
            s1.add(i)
            s1.add(n-i+1)
            s2.add(i+(n//4))
            s2.add(n-i+1-(n//4))
            
    else:
        s1.add(1)
        s1.add(2)
        s2.add(3)
        for i in range((n-3)//4):
            s1.add(i+4)
            s1.add(n-i)
            s2.add(i+4+((n-3)//4))
            s2.add(n-i-((n-3)//4))
    print("YES")
    print(len(s1))
    for i,x in enumerate(s1):
        if i!=len(s1)-1:
            print(x,end = ' ')
        else:
            print(x)
    print(len(s2))
    for x in s2:
        print(x,end = ' ')    
    
        