weight = float(input("Enter your weight: "))
unit = input("(K)g or (L)bs? ")
if unit.capitalize()=='K':
    print("Weight in Lbs: " + str(weight*2.20462))
elif unit.capitalize()=='L':
    print("weight in Kg: " + str(weight/2.20462))
else:
    print("wrong input")