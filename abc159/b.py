str = input()

fstr = str[:(len(str)-1)//2]
tstr = str[(len(str)+3)//2-1:]

if fstr != tstr[::-1]:
    print("No")
else:
    fstr = str[:(len(str)-1)//2]
    tstr = str[(len(str)+3)//2-1:]

    if fstr == fstr[::-1] and tstr == tstr[::-1]:
        print("Yes")
    else:
        print("No")
