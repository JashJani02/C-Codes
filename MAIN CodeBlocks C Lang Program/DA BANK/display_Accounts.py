import json

def display_accounts():
    # Load existing accounts
    try:
        with open("accounts.json", "r") as file:
            accounts = json.load(file)
    except FileNotFoundError:
        print("No accounts found.")
        return

    if not accounts:
        print("No accounts found.")
        return

    print("All Accounts:")
    for acc in accounts:
        print(f"Account Number: {acc['account_number']}\nAccount Holder: {acc['name']}\nBalance: {acc['balance']:.2f}\n-------------------------")

if __name__ == "__main__":
    display_accounts()