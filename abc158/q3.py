a, b = map(int, input().split())

x = 0

ans = -1

while x <= 2000:
    x_a = int(0.08*x)
    x_b = int(0.10*x)

    if x_a == a and x_b == b:
        ans = x
        break

    x += 1

print(int(ans))
