# 🏏 Cricket Match Simulation Engine

A console-based cricket match simulator built in **C** from scratch — featuring two-innings gameplay, live scorecards, toss logic, run-rate calculation, and extras handling.

---

## 📌 About the Project

This project simulates a complete cricket match between two teams. Every ball is randomly generated, and the program tracks the full match state — runs, wickets, overs, extras, and run rate — updating a live scorecard after every delivery.

Built as a personal project to apply C programming concepts including structs, pointers, functions, and randomized simulation logic.

---

## ⚙️ Features

- 🏟️ **Stadium Selection** — Choose from 10 real international cricket venues across India, Australia, England, New Zealand, and South Africa
- 🪙 **Toss Simulation** — Randomized toss with choice of bat or bowl
- 🎯 **Configurable Overs** — Set any number of overs before the match begins
- 📊 **Live Scorecard** — Ball-by-ball score, wickets, overs, and run rate displayed after every delivery
- ➕ **Extras Handling** — Wide/no-ball extras add runs without consuming a ball
- 🏆 **Two Full Innings** — First innings sets the target; second innings chases it
- 📋 **Final Scorecard** — Formatted summary table with both teams' scores, overs, and run rates
- 🎉 **Winner Declaration** — Automatically declares the match winner

---

## 🧠 Concepts Used

| Concept | Usage |
|---|---|
| Structs | `struct cricket` stores balls, wickets, runs, run rate per team |
| Pointers | Score update functions use pointer arguments to modify state |
| Functions | Modular design — `runs()`, `wicket()`, `extras()`, `scorecard()`, `finalscorecard()` |
| `rand()` / `srand()` | Ball-by-ball random outcome generation seeded with `time(0)` |
| Loops & Conditionals | Ball iteration, wicket/target checks, toss logic |
| `switch` statement | Stadium selection menu |
| `goto` | Input validation loops for stadium and toss choices |

---

## 🏟️ Available Stadiums

| # | Stadium | Location |
|---|---|---|
| 1 | Wankhede Stadium | Mumbai, India |
| 2 | Dharamshala Stadium | Himachal Pradesh, India |
| 3 | The Gabba | Brisbane, Australia |
| 4 | Optus Stadium | Perth, Australia |
| 5 | Melbourne Cricket Ground (MCG) | Melbourne, Australia |
| 6 | Lord's Cricket Ground | London, England |
| 7 | Old Trafford | Manchester, England |
| 8 | Eden Park | Auckland, New Zealand |
| 9 | Wanderers Stadium | Johannesburg, South Africa |
| 10 | Newlands Cricket Ground | Cape Town, South Africa |

---


## 🎮 How to Play

```
1. Select a stadium (1–10)
2. Enter Team 1 name, then Team 2 name
3. Enter number of overs
4. Toss happens automatically — choose Bat (1) or Bowl (2)
5. Watch the 1st innings ball-by-ball
6. Chase the target in the 2nd innings
7. Final scorecard and winner declared
```

### Sample Output
```
Select Stadium From Below List
1. WANKHADE STADIUM, MUMBAI, INDIA
...
Enter Team Name: INDIA AUSTRALIA
NO. OF OVERS: 5

------------------TOSS-----------------
INDIA Wins Toss
Choose 1 for Bat / 2 for Ball: 1

1st Inning
Ball 1: 4 run(s)   Team Name: INDIA  Score: 4/0  Overs: 0.1  Runrate: 40.00
Ball 2: Wicket!    Team Name: INDIA  Score: 4/1  Overs: 0.2  Runrate: 20.00
...
Target = 87

2nd Inning
...
AUSTRALIA wins the match
```

---

## 📁 Project Structure

```
cricket-simulation/
│
├── cricketproject.c      # Main source file
└── README.md             # Project documentation
```

---

## 🔧 Possible Improvements (Future Scope)

- [ ] Add individual player batting/bowling statistics
- [ ] Implement DLS method for rain interruptions
- [ ] Add powerplay and death-over logic
- [ ] Build a GUI version using a graphics library
- [ ] Export match scorecard to a `.txt` file

---

## 👤 Author

**Dev Gothi**
VLSI Student — SVNIT Surat
🔗 [GitHub](https://github.com/dev-gothi) | [LinkedIn](https://linkedin.com/in/dev-gothi)

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).
