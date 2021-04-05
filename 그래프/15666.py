def f(index,k):
    if(index == m):
        a = ""
        for i in res:
            a += str(i)+ " "
        box.append(a)
        return
    else:
        for i in range(n):
            if(arr[i] >= k):   
                visited[i] = 1
                res[index] = arr[i]
                k = arr[i]
                f(index+1,k)
                visited[i] = 0

def check(box):
    checks = {}
    idx = 0
    for item in box:
        if(item not in checks):
            checks[item] = True
            box[idx] = item
            idx += 1
    del box[idx:]


n, m = map(int, input().split())
arr = sorted(list(map(int, input().split())))
visited = [0 for i in range(n)]
res = [0] * m
box = []
f(0,0)
check(box)
for i in box:
    print(i)