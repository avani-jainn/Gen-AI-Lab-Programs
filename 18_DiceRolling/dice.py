import random

while True:
    choice = input("Roll the dice? (y/n): ")

    if choice.lower() == "y":
        print("You rolled:", random.randint(1, 6))
    else:
        print("Game ended.")
        break
