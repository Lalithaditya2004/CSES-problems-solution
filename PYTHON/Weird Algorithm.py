def algfun(n):
    print(n , end=' ')
    if n==1:
        return 1
    elif n%2 == 0:
        return algfun(n//2)
    else:
        return algfun((n*3)+1)


n =  int(input())
algfun(n)
