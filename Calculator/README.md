# 🧮 D.G Calculator

It is a console-based multi-operation calculator built in **C**, Supports 8 operations including recursion-based factorial and power calculations.

---

## 📌 About the Project

D.G Calculator is a menu-driven C program that runs in a continuous loop until the user chooses to exit. It handles integer and float operations, input validation, and edge cases like division by zero — all built from scratch without any external libraries.

---

## ⚙️ Features

| # | Operation | Details |
|---|---|---|
| 1 | Addition | Sum of two integers |
| 2 | Subtraction | Always returns positive result (larger − smaller) |
| 3 | Division | Float division with divide-by-zero check |
| 4 | Multiplication | Product of two integers |
| 5 | Factorial | Recursive factorial of both numbers |
| 6 | Modulus | With divide-by-zero guard |
| 7 | Power | Recursive a raised to b |
| 8 | Exit | Cleanly exits the loop |

- ♾️ **Continuous loop** — stays running until user selects Exit
- 🛡️ **Edge case handling** — division by zero caught in both `divide()` and modulus
- 🔁 **Recursion** — factorial and power both use recursive function calls

---

## 🧠 Concepts Used

| Concept | Usage |
|---|---|
| Functions | Modular design — `divide()`, `printfact()`, `calpower()` |
| Recursion | `printfact(a)` and `calpower(a,b)` use recursive calls |
| `switch` statement | Operation selection (cases 1–7) |
| `while` loop | Keeps calculator running until exit |
| Float vs Int | `divide()` takes `float` args for precise division |
| Input Validation | Checks for valid operation number and zero-division |
| Pointers / Memory | Stack-based recursive calls for factorial and power |

---

## 🚀 How to Run

### Prerequisites
- GCC compiler (or any C compiler)

### Steps



On Windows:
```bash
gcc calculator.c -o calculator.exe
calculator.exe
```

---

## 🎮 Sample Output

```
----------------------------

Welcome to D.G Calculator
1.Add
2.Subtract
3.Divide
4.Multiply
5.Factorial
6.Modulus
7.Power
8.Exit

Enter Operation Number to be performed(1-8): 5
Enter value of first Numbers: 5
Enter value of second Numbers: 3

Factorial of first number is 120
Factorial of second number is 6

Thank you for using D.G calculator
```

---



### Future Scope
I will do all these updates in this calculator file in future
- [ ] It will support floating-point factorial (Gamma function)
- [ ] I will add a history log of all operations performed in a session
- [ ] I will port it to a GUI using GTK or a web interface

---

## 📁 Project Structure

```
Calculator/
│
├── calculator.c      # Main source file
└── README.md         # Project documentation
```

---

## 👤 Author

**Dev Gothi**
VLSI Student — SVNIT Surat
Built at: VLSI Lab, SVNIT (`vlsilab-client37`)

🔗 [GitHub](https://github.com/dev-gothi) | [LinkedIn](https://linkedin.com/in/dev-gothi)

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).
