const express = require('express');
const bodyParser = require('body-parser');
const cors = require('cors');

const app = express();
const PORT = 3000;

app.use(cors());
app.use(bodyParser.json());

let accounts = [];
let accountCount = 0;

app.post('/createAccount', (req, res) => {
    if (accountCount >= 100) {
        return res.status(400).send("Cannot create more accounts. Limit reached.");
    }

    const { name, balance } = req.body;
    if (balance < 0) {
        return res.status(400).send("Invalid balance.");
    }

    const newAccount = {
        accountNumber: accountCount + 1,
        name: name,
        balance: balance
    };

    accounts.push(newAccount);
    accountCount++;
    res.send(`Account created successfully. Account Number: ${newAccount.accountNumber}`);
});

// Additional routes for deposit, withdraw, check balance, and display accounts can be added here.

app.listen(PORT, () => {
    console.log(`Server is running on http://localhost:${PORT}`);
});