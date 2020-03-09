N, A, B = map(int, input().split())

q, mod = divmod(N, A+B)
ans = q*A + min([A, mod])

print(ans)
