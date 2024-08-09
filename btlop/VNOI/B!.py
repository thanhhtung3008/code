a, b, m = map(int, input().split())
def fibonacci(n):
    f0 = 1
    f1 = 1
    fn = 1
    if (n < 0):
        return -1
    elif (n == 0 or n == 1):
        return 1
    else:
        for i in range(2, n):
            f0 = f1
            f1 = fn
            fn = f0 + f1
        return fn

def usclnhat(a, b):
    if (b == 0):
        return a
    return usclnhat(b, a % b)
u=usclnhat(fibonacci(a),fibonacci(b))
print(u%m)