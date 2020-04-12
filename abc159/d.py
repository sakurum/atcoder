import collections

N = int(input())
A = list(map(int, input().split()))

cc = collections.Counter(A)

# くみあわせ
for i in range(N):
    a =









for i in range(N):
    k_val = A[i]
    cnt = 0

    for k, v in cc.items():
        if int(k) == k_val:
            cnt += (v-1)*(v-2)//2
        else:
            cnt += v*(v-1)//2

    print(cnt)
