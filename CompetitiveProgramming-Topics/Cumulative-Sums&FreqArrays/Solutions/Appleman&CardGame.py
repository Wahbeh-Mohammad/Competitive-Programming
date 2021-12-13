d = dict()
n, k = map(int,input().split())
s = input()
for i in s:
    try:
        d[i] += 1
    except KeyError:
        d[i] = 1
l = []
for i in d:
    l.append(d[i])
l.sort(reverse=True)
i, ans = 0, 0
while(k):
    if(l[i] <= k):
        ans += l[i] * l[i]
        k -= l[i]
    else:
        ans += k * k
        k = 0
    i+=1
print(ans)
