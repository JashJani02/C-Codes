import json

def create_account():
    try:
        with open("accounts.json", "r") as file:
            accounts = json.load(file)
    except FileNotFoundError:
        accounts = []

    print("Create Account")
    print("-------------")

    name = input("Enter your name: ")
    balance = float(input("Enter your balance: "))

    account_number = len(accounts) + 1

    new_account = {
        "account_number": account_number,
        "name": name,
        "balance": balance
    }

    accounts.append(new_account)

    with open("accounts.json", "w") as file:
        json.dump(accounts, file, indent=4)

    print("Account created successfully!")
    print("Account number:", account_number)

if __name__ == "__main__":
    try:
        create_account()
    except Exception as e:
        print("An error occurred:", e)