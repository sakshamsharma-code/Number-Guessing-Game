# 🎯Number Guessing Game
This is a simple Number Guessing Game written in C, where the computer generates a random number between 1 and 100, and the user tries to guess it. The program provides hints whether the guessed number is too high or too low until the correct number is guessed.

# 📋Features
Random number generation using rand() and srand().

User interaction through terminal input.

Hints to guide the user ("Higher number please!" / "Lower number please!").

Displays the number of guesses taken to find the correct number.

# 🚀 How to Run
**Compile the code:**

```bash```

```gcc guessing_game.c -o guessing_game```

**Run the executable:**

```bash```

```./guessing_game```
# 🧠 How It Works
Uses srand(time(0)) to seed the random number generator based on current time.

**Generates a random number between 1 and 100:**

```C```

```int randomNumber = (rand() % 100) + 1; ```

Takes user input in a loop until the correct number is guessed.

Gives feedback for each guess:

If the guess is too high, it says: "Lower number please!"

If too low, it says: "Higher number please!"

Once the correct number is guessed, it prints a congratulations message and displays the total number of attempts.

# 🛠 Example Output
```bash ```
```
Guess the number: 
50
Higher number please!
75
Lower number please!
63
Congrats!!
You guessed the number in 3 guesses
```
# 📝 Author
**Developed by Saksham Sharma**

