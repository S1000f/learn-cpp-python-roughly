temp = 0
a = [1, 4, 3, 2, 5]

# Bubble
for i in range(0, 4):
    for j in range(0, 4 - i):
        if a[j] > a[j + 1]:
            temp = a[j]
            a[j] = a[j + 1]
            a[j + 1] = temp

print(a)

# Insertion
j = 0
temp = 0
a = [5, 7, 3, 4, 6]

for i in range(1, 5):
    j = i - 1
    while a[j] > a[j + 1] and j >= 0:
        temp = a[j]
        a[j] = a[j + 1]
        a[j + 1] = temp
        j = j - 1

print(a)
