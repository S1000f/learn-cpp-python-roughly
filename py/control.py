a = 10

if a % 2 == 0:
    print("even")
else:
    print("odd")

a = 4
for i in range(1, 10):
    print(a, "*", i, "=", a * i)

i = 1
a = 5
while i <= 9:
    print(a, "*", i, "=", a * i)
    i += 1

i = 0
while True:
    print(i)
    i += 1
    if i >= 5:
        break

for i in range(10, 20):
    if i % 3 == 0:
        continue
    print(i)

