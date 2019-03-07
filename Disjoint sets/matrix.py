def find(parent,i):
    if parent[i]==-1:
        return i
    else:
        return find(parent,parent[i])

def union(m,parent,v1,v2):
    x=find(parent,v1)
    y=find(parent,v2)
    parent[x]=y
    if m[x]==True or m[y]==True:
        m[x]=True
        m[y]=True

def main():
    [cities,machines]=list(map(int,input().split(" ")))
    table=[]
    for _ in range(cities-1):
        # accept the edges and the time
        [v1,v2,time]=list(map(int,input().split(" ")))
        table.append([v1,v2,time])
    table.sort(key=lambda x: x[2],reverse=True)
    # print(table)
    # mark the machines
    m=[False]*cities
    # for i in range(cities):
        # m[i]=False 
    for _ in range(machines):
        m[int(input())]=True
    
    # Now Iterate through the table and find the vertices to be removed
    # print(table)
    parent=[-1]*cities 
    result=0
    for row in table:
        x=row[0]
        y=row[1]
        time=row[2]
        # print(str(x) + " "+ str(y) +" "+ str(time))
        parentOfx=find(parent,x)
        parentOfy=find(parent,y)
        # print("parentofX="+str(parentOfx))
        # print("parentofy="+str(parentOfy))
        # if both of their parents are machines then they cannot be joined
        if m[parentOfx] and m[parentOfy]:
            # add it to the result
            result+=time
            # print(result)
        else:
            union(m,parent,x,y)

    print(result)
main()