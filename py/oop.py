class A:
    def fnc():
        print("method")

    def add(x, y):
        return x + y

    def info(self):
        print("Parent")


__aa = 34


class B(A):
    def fnb():
        print("class B")

    def info(self):
        super().info()
        print("child")


a = A
a.fnc()
print(a.add(4, 9))

b = B
b.fnc()
b.fnb()

c = B()
c.info()
