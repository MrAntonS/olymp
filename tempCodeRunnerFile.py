a = 12
a = bin(a)
a = a.repquitlace('0b','',1)
print(a[-1] == 0)
a = a + a[-1]
print(int(a, 2))