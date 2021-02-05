
import os
import sys
from io import BytesIO, IOBase

def solve():
    n, m = list(map(int, input().split()))
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = list(map(int, input().split()))
    res = []
    lol = -1
    e = [[] for _ in range(n)]
    if c[-1] not in b:
        print("NO")
        return
    else:
        lol = b.index(c[-1]) 
        for i in range(len(b)):
            if b[i] == a[i]:
                b[i] = -1
                a[i] = -1
            else:
                e[b[i] - 1].append(i)
        #print(e)
        if c[-1] in b:
            lol = b.index(c[-1])
        a[lol] = -1
        b[lol] = -1
        c.pop()

    for i in range(len(c)):
        if len(e[c[i] - 1]) == 0:
            res.append(lol + 1)
        else:
            x = e[c[i] - 1].pop() 
            res.append(x + 1)
            a[x] = -1
            b[x] = -1
    res.append(lol + 1)
    if a != b:
        print("NO")
        return
    else:
        print("YES")
        for i in res:
            print(i, end = ' ')
        print()
        return
# region fastio
BUFSIZE = 8192
class FastIO(IOBase):
    newlines = 0
 
    def __init__(self, file):
        self._fd = file.fileno()
        self.buffer = BytesIO()
        self.writable = "x" in file.mode or "r" not in file.mode
        self.write = self.buffer.write if self.writable else None
 
    def read(self):
        while True:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            if not b:
                break
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines = 0
        return self.buffer.read()
 
    def readline(self):
        while self.newlines == 0:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            self.newlines = b.count(b"\n") + (not b)
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines -= 1
        return self.buffer.readline()
 
    def flush(self):
        if self.writable:
            os.write(self._fd, self.buffer.getvalue())
            self.buffer.truncate(0), self.buffer.seek(0)
 
 
class IOWrapper(IOBase):
    def __init__(self, file):
        self.buffer = FastIO(file)
        self.flush = self.buffer.flush
        self.writable = self.buffer.writable
        self.write = lambda s: self.buffer.write(s.encode("ascii"))
        self.read = lambda: self.buffer.read().decode("ascii")
        self.readline = lambda: self.buffer.readline().decode("ascii")
 
 
sys.stdin, sys.stdout = IOWrapper(sys.stdin), IOWrapper(sys.stdout)
input = lambda: sys.stdin.readline().rstrip("\r\n")

def main():
    t = int(input())
    while(t):
        t -= 1
        solve()
main()