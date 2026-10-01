class BankAccount:
    def __init__(self, account_number, name, balance):
        self.account_number = account_number
        self.name = name
        self.balance = balance
    
    def deposit(self, d):
        if d > 0:
            self. balance = self.balance + d
        elif d == 0:
            self.balance = self.balance
    
    def withdrawing_money(self, w):
        if self.balance >= w:
            self.balance -= w
        else:
            print("Недостатъчна наличност по сметката")
    
    def print_info(self):
        print(f"Номер на сметка - {self.account_number}; Име - {self.name}; Баланс - {self.balance}")
    
account_list = []
n = 10
for i in range(n):
    account_number = input("Въведи номер на сметка")
    name = input("Въведи име")
    balance = float(input("Въведи баланс по сметка"))
    person = BankAccount(account_number, name, balance)
    account_list.append(person)

def max_balance(account_list):
    account_list.sort(key = lambda x:x.balance, reverse = True)
    return account_list[0]

def sort_by_name(account_list):
    account_list.sort(key = lambda x:x.name, reverse = True)
    return account_list
    