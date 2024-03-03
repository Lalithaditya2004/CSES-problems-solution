def toh(num : int,first: int,second: int,last: int):
    if num == 1:
        print(f"{first} {last}")
    else:
        toh(num-1,first,last,second)
        print(f"{first} {last}")
        toh(num-1,second,first,last)


n = int(input())
moves = (2**n)-1
print(moves)
toh(n,1,2,3)
