def problem1():
    with open("day3.txt") as input:
        inp = [line.rstrip() for line in input]
        i = 0
        c = 0
        for x in inp:
            l = len(x)
            if i >= l:
                i -= l
            if x[i] == "#":
                c += 1
            i += 3
        print("Solution : ", c)


def manueverTrees(right, down):
    with (open("day3.txt")) as input:
        inp = [line.rstrip() for line in input]


if __name__ == "__main__":
    manueverTrees(1, 1)
