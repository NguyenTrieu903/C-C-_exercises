def check(password):
    n = len(password)
    if n < 8:
        return False
    else:
        demSo = 0
        demChu = 0
        demKytu = 0
        for i in range(0, n):
            if password[i].isdigit():
                demSo += 1
            elif password[i].isalpha():
                demChu += 1
            else:
                demKytu += 1
    if demSo >= 1 and demKytu >= 1 and demChu >= 1:
        return True
    return False


print(check('!e3123123'))
