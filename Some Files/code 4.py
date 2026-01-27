def add(a,b):
    return a+b

def substract(a,b):
    if a>b:
        return a-b
    else:
        return b-a
    
def multiply(a,b):
    return a*b

def divide(a,b):
    if a>b:
        return a/b
    else:
        return b/a
    
a=int(input("Enter the number: "))
b=int(input("Enter the number: "))
print("""The process available are: 
      1. ADD
      2. SUBSTRACT
      3. MULTIPLY
      4. DIVIDE""")
while True:
    ask=int(input("Enter the process number you want to perform: "))
    if ask==1:
        print(add(a,b))
    if ask==2:
        print(substract(a,b))
    if ask==3:
        print(multiply(a,b))
    if ask==4:
        print(divide(a,b))
    if ask>=5:
        break
    else:
        print("Invalid Input")

