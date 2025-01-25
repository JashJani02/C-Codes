let accounts = [];
let accountCount = 0;

function createAccount() {
    if (accountCount >= 100) {
        document.getElementById("output").innerText = "Cannot create more accounts. Limit reached.";
        return;
    }

    const name = prompt("Enter account holder's name:");
    const balance = parseFloat(prompt("Enter initial balance:"));

    if (isNaN(balance) || balance < 0) {
        document.getElementById("output").innerText = "Invalid balance. Please try again.";
        return;
    }

    const newAccount = {
        accountNumber: accountCount + 1,
        name: name,
        balance: balance
    };

    accounts.push(newAccount);
    accountCount++;

    document.getElementById("output").innerText = `Account created successfully. Account Number: ${newAccount.accountNumber}`;
}

function depositMoney() {
    const accountNumber = parseInt(prompt("Enter account number:"));
    const account = accounts.find(acc => acc.accountNumber === accountNumber);

    if (!account) {
        document.getElementById("output").innerText = "Account not found.";
        return;
    }

    const amount = parseFloat(prompt("Enter amount to deposit:"));

    if (isNaN(amount) || amount < 0) {
        document.getElementById("output").innerText = "Invalid amount. Please try again.";
        return;
    }

    account.balance += amount;
    document.getElementById("output").innerText = `Deposit successful. New balance: ${account.balance.toFixed(2)}`;
}

function withdrawMoney() {
    const accountNumber = parseInt(prompt("Enter account number:"));
    const account = accounts.find(acc => acc.accountNumber === accountNumber);

    if (!account) {
        document.getElementById("output").innerText = "Account not found.";
        return;
    }

    const amount = parseFloat(prompt("Enter amount to withdraw:"));

    if (isNaN(amount) || amount < 0) {
        document.getElementById("output").innerText = "Invalid amount. Please try again.";
        return }

    if (amount > account.balance) {
        document.getElementById("output").innerText = "Insufficient balance.";
    } else {
        account.balance -= amount;
        document.getElementById("output").innerText = `Withdrawal successful. New balance: ${account.balance.toFixed(2)}`;
    }
}

function checkBalance() {
    const accountNumber = parseInt(prompt("Enter account number:"));
    const account = accounts.find(acc => acc.accountNumber === accountNumber);

    if (!account) {
        document.getElementById("output").innerText = "Account not found.";
    } else {
        document.getElementById("output").innerText = `Account Holder: ${account.name}\nCurrent Balance: ${account.balance.toFixed(2)}`;
    }
}

function displayAccounts() {
    if (accounts.length === 0) {
        document.getElementById("output").innerText = "No accounts found.";
        return;
    }

    let output = "All Accounts:\n";
    accounts.forEach(acc => {
        output += `Account Number: ${acc.accountNumber}\nAccount Holder: ${acc.name}\nBalance: ${acc.balance.toFixed(2)}\n-------------------------\n`;
    });

    document.getElementById("output").innerText = output;
}

document.getElementById("create-account-button").addEventListener("click", createAccount);
document.getElementById("deposit-button").addEventListener("click", depositMoney);
document.getElementById("withdraw-button").addEventListener("click", withdrawMoney);
document.getElementById("check-balance-button").addEventListener("click", checkBalance);
document.getElementById("display-accounts-button").addEventListener("click", displayAccounts);