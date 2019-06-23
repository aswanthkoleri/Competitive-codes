def main():
    [x,y,z]=list(map(int,input().split(" ")))
    [green,purple,black]=list(map(int,input().split(" ")))
    if x>green:
        print("NO")
        return
    green-=x

    if y>purple+green:
        print("NO")
        return
    remaining=green+purple+black - y
    if z > remaining:
        print("NO")
        return
    print("YES")
    return
main()
