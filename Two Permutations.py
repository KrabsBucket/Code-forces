t = input()
m = []
for _ in t:
    m.append(_)
    
for _ in range(len(m)):
    if m[_] == ' ':
        del m[_]


