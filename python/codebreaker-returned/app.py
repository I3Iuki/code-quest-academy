import re
from collections import Counter
import math

for _ in range(int(input())):
    digraphs = []
    trigraphs = []

    sentences = ""

    for i in range(int(input())):
        sentences += re.sub(r'[^A-Z\s]', '', input().upper()) + " "

    for index, char in enumerate(sentences[:-2]):
        if ' ' not in f"{char}{sentences[index + 1]}":
            digraphs.append(f"{char}{sentences[index + 1]}")
        if ' ' not in f"{char}{sentences[index + 1]}{sentences[index + 2]}":
            trigraphs.append(f"{char}{sentences[index + 1]}{sentences[index + 2]}")
        
    if ' ' not in f"{sentences[len(sentences) - 2]}{sentences[len(sentences) - 1]}":
        digraphs.append(f"{sentences[len(sentences) - 2]}{sentences[len(sentences) - 1]}")


    digraphs = dict(sorted(Counter(digraphs).items()))
    trigraphs = dict(sorted(Counter(trigraphs).items()))

    for key, value in digraphs.items():
        print(f"{key}: {(round((value / Counter.total(digraphs) * 100), 3)):.3f}%")

    for key, value in trigraphs.items():
        print(f"{key}: {round((value / Counter.total(trigraphs) * 100), 3):.3f}%")
