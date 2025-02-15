import random
print("Number Guessing Game!")
small_number=int(input("Enter smallest number: "))
large_number=int(input("Enter largest number: "))
my_number= random.randint(small_number,large_number)
number_of_tries=0
while True:
    number=int(input("Enter a number: "))
    if number<my_number:
        print("Your guess is too low")
        number_of_tries+=1
    elif number>my_number:
        print("Your guess is too high")
        number_of_tries+=1
    else:
        print("Congratulation! Your guess is correct")
        print("Your number was " + str(my_number))
        print("Total tries: ",number_of_tries)
        break
