#metodo basico gg
n = int(input("Dame un numero "))

def collatz(n):
    print(n)
    while n != 1:
        if n % 2:
            return collatz(n * 3 + 1)
        else:
            return collatz(n // 2)

if n > 0:
    collatz(n)
