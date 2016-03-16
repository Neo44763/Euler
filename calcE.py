import sys


def ecalc():
    n = int(sys.argv[1])
    m = n
    dic = {}

    sys.stdout.write("2.")

    for j in reversed(range(2, m)):
        dic[j] = 1

    for i in range(1, n):
        carry = 0
        for j in reversed(range(2, m)):
            temp = dic[j] * 10 + carry
            carry = temp / j
            dic[j] = temp - carry * j

        sys.stdout.write(str(carry))

ecalc()
