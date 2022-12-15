def is_defended(attackers, defenders):
    if len(attackers) == 0:
        return True
    elif len(defenders) == 0:
        return False
    result = list(map(lambda x, y: x - y, attackers, defenders))
    if len(list(filter(lambda x: x < 0, result))) == len(list(filter(lambda x: x > 0, result))):
        return sum(list(result)) <= 0
    return len(list(filter(lambda x: x < 0, result))) > len(list(filter(lambda x: x > 0, result)))


def print_hi(name):
    print(f'Hi, {name}')  # Press Ctrl+F8 to toggle the breakpoint.


def main():
    print_hi("Pyton")


if __name__ == '__main__':
    main()