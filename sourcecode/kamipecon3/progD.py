n = int(input())
pair = []
for i in range(n):
    x, y = map(int, input().split())
    pair.append([x, y])

current = [0, 0]
res = 0
while len(pair) > 0:
    nearpair = []
    nearpath = 9999999999999999
    for elem in pair:
        nx = abs(max(elem[0], current[0]) - min(elem[0], current[0]))
        ny = abs(max(elem[1], current[1]) - min(elem[1], current[1]))
        if len(nearpair) == 0 or nx + ny < nearpath:
            nearpair = elem
            nearpath = nx + ny
    res += nearpath
    current = nearpair
    pair.remove(nearpair)
print(res)
