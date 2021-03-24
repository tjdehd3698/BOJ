n,m = map(int, input().split())

l = [i+1  for i in range(0,n)]
visited = [0 for i in range(0,n)]

arr = []

def dfs(cnt) :
    if cnt==m : 
        print(*arr)
        return

    for i in range(0,n):
        if visited[i]==0 :
            visited[i]=True
            arr.append(l[i])
            dfs(cnt+1)
            arr.pop()

            for j in range(i+1,n):
                visited[j]=False


dfs(0)
