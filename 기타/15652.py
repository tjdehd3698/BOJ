n,m = map(int, input().split())

result=[]

def dfs(cnt, num):
    if cnt==m:
        print(*result)
        return
    for i in range(num,n+1):
            result.append(i)
            dfs(cnt+1, i)
            result.pop()

dfs(0, 1)