def removeSigns(s):
    news = ""
    for i in s:
        if i in "_-;":
            continue
        if i >= 'A' and i <= 'Z':
            news += chr(ord(i) + 32)
        else:
            news += i
    return news

a = removeSigns(input());aa = len(a)
b = removeSigns(input());bb = len(b)
c = removeSigns(input());cc = len(c)
concats = [ a+b+c, a+c+b, b+a+c, b+c+a, c+a+b, c+b+a]
T = int(input())
ans = []
for _ in range(T):
    t = removeSigns(input())
    if t in concats:
        ans.append("ACC")
    else:
        ans.append("WA")

for i in ans:
    print(i)
