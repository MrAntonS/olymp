t = int(input())
while t:
    t -= 1
    A,B,n = list(map(int, input().split()))
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    damage = 0
    for i in range(n):
        num = (b[i] + A - 1)//A
        damage += num * a[i]
    if damage - max(a) < B:
        print("YES")
    else:
        print("NO")