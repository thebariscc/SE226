import math


def factorial(n):
    if n == 1:
        return 1
    return n * factorial(n - 1)


step = lambda x, n : (pow(-1, n) * pow(x, (2 * n) + 1)) / factorial((2 * n) + 1)

def sine_x(x,n):
    total = 0
    for i in range(1, n + 1):
        total += step(x * math.pi / 180.0, i)
    return total




value = 0
def harmonic(n):
    '''This func calculates sum of harmonic series'''
    global value
    if n == 1:
        value += 1
    else:
        value += 1 / n
        harmonic(n - 1)