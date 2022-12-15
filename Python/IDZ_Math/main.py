from scipy.special import erf

def lapl(x):
    return erf(x/2**0.5)/2


def print_hi(name):
    print(f'Hi, {name}')


def main():
    # x = [423, 445, 432, 424, 445, 425, 447, 441, 435, 433, 424, 446, 444, 434, 433, 436, 437, 424, 428, 430, 443, 433, 429, 437, 438, 435, 436, 427, 424, 429, 438, 436, 441, 440, 437, 438, 441, 438, 436, 432, 425, 429, 436, 447, 436, 433, 435, 427, 426, 438, 441, 445, 447, 435, 427, 446, 441, 440, 437, 438, 433, 435, 439, 422, 423]
    # x1= [345, 302, 356, 342, 341, 300, 325, 324, 350, 324, 311, 346, 301, 325, 350, 345, 311, 315, 324, 328, 345, 346, 341, 321, 322, 321, 318, 319, 311, 315, 321, 347, 350, 325, 318, 301, 305, 315, 306, 347, 303, 308, 316, 329, 308, 315, 350, 327, 301, 302]
    # x.sort()
    # x1.sort()
    # print(sum(x))
    # print(sum(list(map(lambda x: x*x, x))))
    # print(len(x)," ",x)
    # print(len(x1)," ",x1)
    # print_hi("Pyton")
    # print(len(x))
    # dictionary = {}
    # for i in x:
    #     if i in dictionary:
    #         dictionary[i] = dictionary[i] + 1
    #     elif i not in dictionary:
    #         dictionary[i] = 1
    # print(dictionary)
    #------
    # xj = [423, 426, 429, 433, 436, 439, 443, 446]
    # wj = [0.1077, 0.0923, 0.0769, 0.1231, 0.2308, 0.1385, 0.1077, 0.1231]
    # xzirochka = sum(list(map(lambda x, y: x*y, xj, wj)))
    # print("x* = ", xzirochka)
    # szirochka2 = (sum(list(map(lambda x, y: x*x*y, xj, wj))) - xzirochka*xzirochka)*65/64
    # print("s*^2 = ", szirochka2)
    # szirochka = 5.66
    # uj = list(map(lambda x: (x - xzirochka)/szirochka, xj))
    # print("uj = ", uj)
    # ujplus1 = (xj[-1] + 1 - xzirochka)/szirochka
    # print("uj+1 = ", uj[1:], ujplus1)
    # uj =      [-2.16, -1.63, -1.11, -0.39, 0.14, 0.67, 1.38, 1.91]
    # ujplus1 = [-1.63, -1.11, -0.39, 0.14, 0.67, 1.38, 1.91, 2.08]
    # pj = list(map(lambda x, y: erf(abs(x)/2**0.5)/2 - erf(abs(y)/2**0.5)/2, uj, ujplus1))
    # print("pj = ", pj)
    # pj = [0.0362, 0.0819, 0.2148, 0.2074, 0.1929, 0.1676, 0.0557, 0.0093]
    # npj = list(map(lambda x: x*65, pj))
    # print("npj = ", npj)
    # mminusnpj = [5.3235, -8.962, -5.481, 2.4615, 8.881]
    # npj = [7.6765, 13.962, 13.481, 12.5385, 15.119]
    # print("mminusnpj^2 / npj = ", list(map(lambda x, y:x*x/y, mminusnpj, npj)))
    #--------
    # n = 10
    # xy = [75.75, 95.76, 123.669, 152.412, 157.78, 150.944, 169.44, 137.35, 155.82, 106.548]
    # x =  [3, 4.5, 6.3, 7.8, 9.2, 10.6, 12, 13.4, 14.7, 15.6]
    # y =  [25.25, 21.28, 19.63, 19.54, 17.15, 14.24, 14.12, 10.25, 10.6, 6.83]
    # a = (n*sum(xy) - sum(x)*sum(y))/(n*sum(list(map(lambda x: x*x, x))) - sum(x)*sum(x))
    # print("a = ", a)
    # b = 28.499
    # yp = list(map(lambda x: a*x+b, x))
    # print("yp = ", yp)
    # xser = 9.7
    # yser = 15.9
    # kxy = 1/n * sum(list(map(lambda x, y: (x - xser)*(y - yser), x, y)))
    # print("kxy = ", kxy)
    # dx = 1/n * sum(list(map(lambda x: (x - xser)*(x - xser), x)))
    # print("dx = ", dx)
    # dy = 1/n * sum(list(map(lambda x: (x - yser)*(x - yser), y)))
    # print("dy = ", dy)
    #---test---
    n = 5
    x = [0, 1.2, 2.8, 4.1, 5.5]
    xser = sum(x)/len(x)
    y = [1.5, 2, 4.8, 8, 10]
    yser = sum(y) / len(y)
    print("yser = ", yser)
    a = (n * sum(list(map(lambda x, y: x*y, x, y))) - sum(x) * sum(y)) / (n * sum(list(map(lambda x: x * x, x))) - sum(x) * sum(x))
    print("a = ", a)
    b = yser - a*xser
    print("b = ", b)


if __name__ == '__main__':
    main()