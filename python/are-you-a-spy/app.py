import re

for _ in range(int(input())):
    og = re.sub(r'[^a-z|]', '', input().lower()).split("|")
    
    ok = False

    for c in og[1]:
        if c not in og[0]:
            ok = True

    print("That's my secret contact!" if ok == False else "You're not a secret agent!")