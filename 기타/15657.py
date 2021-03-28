n, m = map(int, input().split())
arr = list(map(int, input().split()))

result =[]

arr.sort()

def dfs(cnt, idx):
    if cnt==m:
        print(*result)
        return
    for i in range(idx,n):
        result.append(arr[i])
        dfs(cnt+1,i)
        result.pop()            

dfs(0,0)