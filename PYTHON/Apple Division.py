n = int(input())
lis = list(map(int,input().split()))
lis1 = []
lis2 = []
if len(lis)>1:
    lis1.append(max(lis))
    lis.remove(max(lis))
    lis2.append(max(lis))
    lis.remove(max(lis))
    while len(lis)>0:
        if sum(lis1)>=sum(lis2):
            lis2.append(max(lis))
            lis.remove(max(lis))
        else:
            lis1.append(max(lis))
            lis.remove(max(lis))
else:
    lis1.append(max(lis))
    lis2.append(0)
if sum(lis1)>=sum(lis2):
    print(sum(lis1)-sum(lis2))
else:
    print(sum(lis2)-sum(lis1))
