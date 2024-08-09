# Generate input.inp with 1,000,000 elements each with a value of 2
with open("input.inp", "w") as file:
    n = 1000000
    m = 1000000
    file.write(f"{n} {m}\n")
    file.write(" ".join(["2"] * n) + "\n")
