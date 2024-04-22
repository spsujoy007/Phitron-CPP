from collections import Counter
n = int(input())
array = list(map(int, input().split()))

count = Counter(array)
removals = 0

for num, freq in count.items():
        if num < freq:
            removals += freq - num
        elif num > freq:
            removals += freq
print(removals)