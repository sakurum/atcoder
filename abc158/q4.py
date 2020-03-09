array = []
array.append(input())

Q = int(input())

for i in range(Q):
    query = input().split()

    if query[0]=="1":
        array.reverse()
    else:
        if query[1]=="1":
            array.insert(0, query[2])
        else:
            array.append(query[2])

ans = "".join(array)
print(ans)
