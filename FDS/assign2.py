'''
Q. Write a Python program that computes the net amount of a bank account based a transaction log from console input. The transaction log format is shown as following: D 100 W 200 (Wit

'''

net_amount=0

while(True):
    str=input("Enter transaction")

    transaction = str.split(" ")

    type=transaction[0]
    amount=int(transaction[1])

    if(type=="D" or type=="d"):
        net_amount +=amount
    elif(type=="W" or type=="w"):
        net_amount -= amount
    else:
        pass

    str=input("Do you want to continue the transaction :")
    if not(str[0]=="Y" or str[0]=="y"):
        break

print("Net amount : ", net_amount)