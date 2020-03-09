A, B, M = map(int, input().split())

ref = list(map(int, input().split()))
mic = list(map(int, input().split()))

price = min(ref)+min(mic)

for i in range(M):
    arg = list(map(int, input().split()))
    val = ref[arg[0]-1]+mic[arg[1]-1]-arg[2]
    if price > val:
        price = val

print(price)
