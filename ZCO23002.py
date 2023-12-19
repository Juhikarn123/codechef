# cook your dish here
# cook your dish here

from collections import deque

n, p = map(int, input().split())
A, B, res = [0] * n, [0] * n, []
L = set()
mxa, mxb = 0, 0

for i in range(n):
    A[i], B[i] = map(int, input().split())
    L.add((A[i], B[i]))
    mxa = max(mxa, A[i])
    mxb = max(mxb, B[i])

Q = deque([(0, 0)])

for l in sorted(L):
    while len(Q) > 1:
        last, last2 = Q[-1], Q[-2]
        if (l[0] >= last[0] and l[1] >= last[1]) or (l[1] - last[1]) * (last2[0] - l[0]) < (l[1] - last2[1]) * (last[0] - l[0]):
            Q.pop()
        else:
            break
    Q.append(l)

while len(Q) > 1:
    first, second = Q[0], Q[1]
    if first[1] < second[1]:
        Q.popleft()
    else:
        break

L.clear()
for l in Q:
    L.add(l)

for i in range(n):
    if A[i] == mxa or B[i] == mxb or (A[i], B[i]) in L:
        res.append(i + 1)

print(len(res))
print(*res)        