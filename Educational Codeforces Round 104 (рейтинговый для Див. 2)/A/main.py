def solve():
    n, k = list(map(int, input().split()))
    cnt = 0
    b, a = 0, n - 1
    c = [b]
    while True:
        a -= 1
        if a < 0:
            a = n - 1
        if (b + 1) % n == a:
            b += 2
            b %= n
        else:
            b += 1
            b %= n
        if b == 0 and a == n - 1 or len(c) == k:
            break
        c.append(b)
    print(c)
    print(c[(k - 1) % len(c)] + 1)

        



def main():
    t = int(input())
    while t:
        t-=1
        solve()
main()