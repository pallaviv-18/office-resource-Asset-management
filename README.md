# **Office Resource Assets Management System**

## **Abstract**

The *Office Resource Assets Management System* is a simple console-based application developed in **C programming language**.
It allows users to manage office inventory using basic operations such as adding, viewing, searching, and deleting asset records.
The system uses **structures** for data organization and **file handling** for permanent storage in a text file (`assets.txt`), making it suitable for academic projects and file-handling demonstrations.

---

## **Features**

* **Add Asset** – Stores asset name and quantity in a file
* **View All Assets** – Displays all existing assets in a formatted table
* **Search Asset** – Retrieves asset details by name
* **Delete Asset** – Removes a selected asset using temporary file replacement
* **Persistent Storage** – Data remains saved even after program exit
* **Menu-Driven Interface** – Easy to navigate and user friendly

---

## **Technical Requirements**

### **1. System Requirements**

* A computer capable of running a terminal/command-line interface
* Basic file system access (read/write/delete permission)
* Minimum RAM required to run lightweight console applications

### **2. Software Requirements**

* GCC, Clang, or any standard C compiler
* Command-line interface (Terminal/PowerShell/CMD)
* Text editor (VS Code, CodeBlocks, Dev-C++, Notepad++, etc.)

### **3. Programming Requirements**

* Knowledge of structured programming
* Use of:

  * Structures (`struct`)
  * Functions
  * Conditional statements and loops
  * Standard I/O operations (`printf`, `scanf`)

### **4. File Handling Requirements**

* Ability to create and maintain a text file named `assets.txt`
* Support for:

  * Reading from files (`fopen`, `fscanf`)
  * Writing to files (`fprintf`)
  * Temporary file handling for deletion
  * File replacement (`remove`, `rename`)

### **5. Compilation Requirements**

* C compiler installed and accessible through system PATH
* Compilation command example:

  ```
  
## ⚙️ **Fundamental Requirements**


### **1. User Interface**

* Provide a clear menu displaying all available operations
* Allow users to enter input using keyboard
* Display formatted output (tables, messages, errors)
* Menu should loop until user chooses to exit

### **2. Asset Operations**

*(Replaces "appointment" since it is not an appointment-based application)*

* Add new assets with name and quantity
* Search for specific assets by name
* View complete list of assets
* Delete selected asset entries

### **3. Data Management**

* Store asset records in `assets.txt`
* Maintain data integrity while reading and writing
* Use temporary files to safely remove assets
* Ensure all data persists after program termination

### **4. Program Flow**

* Display menu → accept user choice
* Redirect to appropriate function:

  * `addAsset()`
  * `viewAssets()`
  * `searchAsset()`
  * `deleteAsset()`
* Handle invalid input with error messages
* Exit cleanly when user selects the exit option
* No data loss between operations

---

## **Project File Structure**

```
Office-Asset-Management/
│
├── assets.txt         # Stores all asset records
├── main.c             # Source code containing the program
└── README.md          # Project documentation
```

---

## **How to Compile and Run**

### **Step 1: Open Terminal / Command Prompt**

Navigate to the folder containing the project files.

### **Step 2: Compile the Program**

```
gcc main.c -o asset_manager
```

### **Step 3: Run the Program**

```
./asset_manager
```

### **On Windows (CMD/PowerShell):**

```
asset_manager.exe
```
Screenshots:
MAIN MENU:

<img width="590" height="186" alt="Screenshot 2025-11-24 221120" src="https://github.com/user-attachments/assets/22f88a65-9c6a-48c1-89a7-6106b462bef0" />

1.ADD ASSETS:

<img width="533" height="336" alt="Screenshot 2025-11-24 221140" src="https://github.com/user-attachments/assets/5d1e8cfd-e1a0-4840-a7b3-019d90c58067" />

2.VIEW ALL ASSETS:

<img width="444" height="332" alt="Screenshot 2025-11-24 221213" src="https://github.com/user-attachments/assets/6185b8cc-5ba0-4761-8d2d-378003cd087f" />

3.SEARCH ASSETS:

<img width="473" height="338" alt="Screenshot 2025-11-24 221232" src="https://github.com/user-attachments/assets/939becfe-547a-49b8-a0e6-e1a20b47c6c4" />

4.DELETE ASSETS:

<img width="456" height="277" alt="Screenshot 2025-11-24 221246" src="https://github.com/user-attachments/assets/56e48bb5-b143-4b29-8ad9-83f5b80394ac" />

5.EXIT:

<img width="480" height="218" alt="Screenshot 2025-11-24 221259" src="https://github.com/user-attachments/assets/cfe49a23-1392-4058-bc1e-3dce7f63841a" />













