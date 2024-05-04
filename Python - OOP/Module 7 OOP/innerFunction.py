def double_decker():
    print("OUter")
    def inner_fun():
        print("Inner")
        return 300
    return inner_fun()

def do_something(work):
    print("Working stared")
    # print(work)
    work()
    print("work ended")
# print(double_decker()())
def coding():
    # print("I write codes now")
    pass
# do_something(coding)

def timer(func):
    def innerFun():
        print("Starting")
        func()
        print("end")
    return innerFun

@timer
def get_factorial():
    print("Coding")
get_factorial()

