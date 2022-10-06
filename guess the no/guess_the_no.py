import random

while(1):
    life=3
    y=random.randint(1,10)
    print("\n\n----------------Welcome to the game----------------",y)
    num=int(input("\nEnter your guess between 1 to 10 (Or 0 to exit game): "))
    print(num)
    if (num==0):
        print("Thank you for playing the game!!")
        break
    while(life):
        if (num==y):
            print("Perfect!! You guessed the number!!!")
            break;
        else:
            life=life-1
            print("Oops wrong guess :( \t\t You have ",life," life left")
            if (life==0):
                continue
            num=input("Enter your guess between 1 to 10: ")
    