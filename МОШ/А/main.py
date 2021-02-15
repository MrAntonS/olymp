def gen(curNum, k, p, q, a, c):
    if curNum >= p:
        if q in a and curNum == p:
            return c + 1
        return c
    c = gen(curNum + 1, k, p, q, a + [curNum + 1], c)
    c = gen(curNum * k, k, p, q, a + [curNum * k], c)
    return c

def solve():
    with open('12.txt', 'a') as f:
        p,q,k = list(map(int, input().split()))
        c = gen(1, k, p, q, [], 0)
        f.write(str(c) + '\n')

def main():
    with open('12.txt', 'w') as f:
        pass
    t = int(input())
    while(t):
        t -= 1
        solve()
main()