Goods = {
    "Quần": 1,
    "Áo": 2,
    "Giày": 3,
    "Dép": 4
}


def Addgoods(Goods, key, quantity):
    if key in Goods.keys():
        Goods[key] += quantity
    else:
        Goods[key] = quantity


print(Goods)
key = input()
quantity = int(input())
Addgoods(Goods, key, quantity)
print(Goods)
