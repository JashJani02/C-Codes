import json

def withdraw_money():
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
        return

    # Input withdrawal amount
    amount = float(input("Enter amount to withdraw: "))

    if amount <= 0:
        print("Invalid amount. Please enter a positive value.")
        return

    if amount > account["balance"]:
        print("Insufficient balance.")
        return

    # Update balance
    account["balance"] -= amount

    # Save updated accounts to file
    with open("accounts.json", "w") as file:
        json.dump(accounts, file, indent=4)

    print(f"Withdrawal successful. New balance: {account['balance']:.2f}")

if __name__ == "__main__":
    withdraw_money()