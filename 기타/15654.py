n, m = map(int, input().split())
arr = list(map(int, input().split()))

visited = [0 for i in range(n)]
result = []

arr.sort()

def dfs(cnt):
    if cnt==m:
        print(*result)
        return
    for i in range(0,n):
        if visited[i]==0:
            visited[i]=1
            result.append(arr[i])
            dfs(cnt+1)
            result.pop()
            visited[i]=0

dfs(0)