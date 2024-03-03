s = str(input())

l = 0
count = 0
res = 0
for r in range(len(s)):
    if s[r] == s[l]:
        count+=1
    else:
        l=r
        res = max(res,count) 
        count = 1
res = max(res,count)
print(res)        
        