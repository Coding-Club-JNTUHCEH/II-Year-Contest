n, h = map(int, input().split())
a = list(map(int, input().split()))
width = 0

for i in range(n):
    if a[i] <= h:
        width += 1
    else:
        width += 2

print(width)
