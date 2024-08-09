n = int(input("Nhập số nguyên dương n: "))
for i in range(n, 0, -1):
    for j in range(1, i + 1):
        print(j**2, end=" ")
    print()
