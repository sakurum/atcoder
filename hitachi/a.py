str = input()

if len(str)%2 == 1:
    print("No")
else:
    for i in range(0, len(str), 2):
        if str[i:i+2] != "hi":
            print("No")
            break
    else:
        print("Yes")
