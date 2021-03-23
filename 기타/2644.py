n, m = map(int, input().split())
l = list(map(int, input().split()))
visited = [0 for i in range(n)]

l.sort()
result = []

def cal(idx,n, m):
    if(idx==m):
        print(*result)
        return;
    for i in range(n):
        if not visited[i]:
            visited[i]=True
            result.append(l[i])
            cal(idx+1,n,m)
            result.pop()
            visited[i]=False

cal(0,n,m)