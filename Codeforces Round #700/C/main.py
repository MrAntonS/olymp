import sys
n = int(sys.stdin.readline())

l = 1
r = n
a = [-1 for i in range(n + 2)]
a[0] = n + 1
a[-1] = n + 1

while l != r:
    mid = (l + r) // 2
    if mid - 1 != 0:
        print(f"? {mid - 1}")
        sys.stdout.flush()
        a[mid - 1] = int(sys.stdin.readline())
    print(f"? {mid}")
    sys.stdout.flush()
    a[mid] = int(sys.stdin.readline())
    if mid + 1 != n + 1:
        print(f"? {mid + 1}")
        sys.stdout.flush()
        a[mid + 1] = int(sys.stdin.readline())
    if a[mid] < a[mid - 1] and a[mid] < a[mid + 1]:
        l = mid
        break
    if a[mid] > a[mid - 1]:
        r = mid - 1
    else:
        l = mid + 1
print(f"! {l}")
sys.stdout.flush()
