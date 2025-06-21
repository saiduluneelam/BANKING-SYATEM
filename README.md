📘 BANKING MANAGEMENT SYSTEM - README

🛠️ PROJECT OVERVIEW:
This is a mini-project developed in C for managing banking operations via a terminal-based interface. It supports features like account creation, deposits, withdrawals, transaction history, file persistence, and more—designed using structures, pointers, and singly linked lists (SLL).

🎯 OBJECTIVE:
To simulate a secure and user-friendly banking environment through a modular C program with persistent data handling.

💡 FEATURES:
- 🆕 Account Creation
- 📜 Last 5 Transactions (Mini Statement)
- 💸 Withdraw Money
- 💰 Deposit Funds
- 🔄 Transfer Between Accounts
- 💼 Balance Inquiry
- 🔍 Search for Specific Accounts
- 📁 Save Account Info to File
- 📊 Display All Existing Accounts

🔧 USAGE:

📦 Compile using the Makefile:
    $ make

▶️ Run the application:
    $ ./bank

🧭 MENU OPTIONS DISPLAYED AT RUNTIME:
    -->c/C --- Create Account              Mini Statement --- h/H<--
    -->w/W --- Withdrawal                  Deposit ---------- d/D<--
    -->b/B --- Balance Enquiry            Transfer --------- t/T<--
    -->e/E --- Show Accounts              Save To File ----- s/S<--
    -->f/F --- Find Account               Exit ------------- q/Q<--

📂 FILE STRUCTURE:
- `main.c`        – Main menu and routing logic  
- `create.c`      – Logic for creating new accounts  
- `withdraw.c`    – Handles withdrawal operations  
- `deposit.c`     – Deposit transaction logic  
- `transfer.c`    – Fund transfer handling  
- `transaction.c` – Transaction tracking and mini-statements  
- `fileops.c`     – File reading/writing and syncing  
- `headers/`      – Header files for structures, typedefs, enums  
- `Makefile`      – For compilation  
- `README.txt`    – Project documentation

🧠 TECHNICAL HIGHLIGHTS:
- Uses structures, typedefs, enums, and unions where appropriate  
- Accounts stored as SLL nodes with structure pointers  
- Transaction history maintained via embedded structures  
- Unique account numbers prevent duplication  
- Persistent data storage using file operations on re-launch  

📌 TIPS:
- Multiple accounts can have the same name, but must have unique account numbers  
- Prior data is automatically restored on subsequent launches via file sync  
- Every function is written modularly in a separate file  

📫 CONTACT:
This project is part of a structured mini-project assignment. For suggestions or collaboration, feel free to get in touch or fork the repository!
