class A:
    def call_test(self):
        pass


class B(A):
    def call_test(self):
        print("class B")


class C(A):
    def call_test(self):
        print("class C")


b = B()
c = C()
b.call_test()
c.call_test()
