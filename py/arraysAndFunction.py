b = 0
a = [4, 3, 5, 7, 1]

for i in range(0, 5):
    b += a[i]

print(b)

a = [[1, 2], [4, 5]]
b = [[1, 2], [3, 4]]
c = []

for i in range(0, 2):
    for j in range(0, 2):
        c.append(a[i][j] + b[i][j])

print(c)


def add(x, y):
    return x + y


print(add(4, 5))
