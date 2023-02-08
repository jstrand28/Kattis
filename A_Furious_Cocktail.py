
n, s = map(int, input().split())
potions = []

for i in range(n):
    potions.append(int(input()))

potions.sort(reverse=True)

for i, val in enumerate(potions):
    if val - s * (n - i - 1) <= 0:
        print("NO")
        break
else:
    print("YES")