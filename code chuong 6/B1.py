def ChanMax(n):
    while n <= 0:
        n = int(input())

    l = []
    for i in range(0, n):
        x = int(input())
        l.append(x)

    max = -1
    for i in range(0, n):
        if l[i] % 2 == 0 and l[i] > max:
            max = l[i]

    print(max)


while True:
    n = int(input())
    ChanMax(n)
    case = input()
    if case == 'y':
        ChanMax(n)
    else:
        break
