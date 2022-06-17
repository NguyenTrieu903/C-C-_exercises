from collections import Counter


def ChuanHoa(string):
    string = string.lower()
    new_text = ''
    for character in string:
        if character.isalnum():
            new_text += character
    return new_text


str = ChuanHoa(
    'Lap trinh ung dung trong ki thuat – Nganh Ki thuat cong nghiep – Dai Hoc Su Pham Ki Thuat Thanh Pho Ho Chi Minh.')


def Handle(str):
    str = str.lower()
    lst = []
    for i in range(0, len(str)):
        d = 0
        for j in range(0, len(str)):
            if str[i] == str[j]:
                if j < i:
                    break
                else:
                    d += 1
        if d != 0:
            lst.append(str[i])
            lst.append(d)

    return lst


print(Handle(str))
