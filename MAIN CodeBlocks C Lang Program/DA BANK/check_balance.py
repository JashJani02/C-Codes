import json

def check_balance():
    # Load existing accounts
    try:
        with open("accounts.json", "r") as file:
            accounts = json.load(file)
    except FileNotFoundError:
        print("No accounts found.")
        return

    # Input account number
    account_number = int(input("Enter account number: "))

    # Find the account
    account = next((acc for acc in accounts if acc["account_number"] == account_number), None)

    if not account:
        print("Account not found.")
    else:
        print(f"Account Holder: {account['name']}\nCurrent Balance: {account['balance']:.2f}")

if __name__ == "__main__":
    check_balance()