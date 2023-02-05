def main():
    n = int(input())
    for _ in range(n):
        r, c = [int(x) for x in input().split()]
        print((3 ** (c + r)) * (2 ** (c * r)) % (10 ** 9 + 7))

main()
