cases = int(input())

for _ in range(cases):
    crypt = str(input())
    shifted = list(str(input()))
    strings = [input() for akjsdfhsd in range(int(input()))]

    alphabet = list("abcdefghijklmnopqrstuvwxyz")

    if crypt == "ENCRYPT":
        for i, string in enumerate(strings):
            temp = []
            for char in string:
                if char in alphabet:
                    temp += shifted[alphabet.index(char)]
                elif char.lower() in alphabet:
                    temp += shifted[alphabet.index(char.lower())].upper()
                else: 
                    temp += char
            strings[i] = "".join(temp)


    if crypt == "DECRYPT":
        for i, string in enumerate(strings):
            temp = []
            for char in string:
                if char in shifted:
                    temp += alphabet[shifted.index(char)]
                elif char.lower() in shifted:
                    temp += alphabet[shifted.index(char.lower())].upper()
                else:
                    temp += char
            strings[i] = "".join(temp)

            
    for string in strings:
        print(string) 
