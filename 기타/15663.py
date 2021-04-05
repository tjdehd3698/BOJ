n,m = map(int, input().split())
arr = list(map(int, input().split()))

visited = [0 for i in range(0,n)]
result=[]
anwser=[]

arr.sort()

def dfs(cnt):
    if cnt==m:
        tmp=[]
        for i in anwser:
            tmp.append(i)

        if tmp not in result:
            result.append(tmp)
            return

    for i in range(0,n):
        if(visited[i]==0):
            visited[i]=1
            anwser.append(arr[i])
            dfs(cnt+1)
            anwser.pop()
            visited[i]=0

dfs(0)
for i in result:
    print(*i)