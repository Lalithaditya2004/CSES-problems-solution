n = int(input())

lis = ['0','1']
if n==1:
    for x in lis:
        print(''.join(x))
else:
    t = 2
    while(t<=n):
        lis.extend(reversed(lis))
        for i,x in enumerate(lis):
            if(i<len(lis)/2):
                lis[i] = ''.join(x) + '0'
            else:
                lis[i] = ''.join(x) + '1'
        t += 1    
    for x in lis:
        print(x)