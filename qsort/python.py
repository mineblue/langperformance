def qsort(seq):
    if len(seq) < 1:
        return seq
    pivot = seq[0]
    left = []
    right = []
    for x in range(1, len(seq)):
        if seq[x] <= pivot:
            left.append(seq[x])
        else:
            right.append(seq[x])
    left = qsort(left)
    right = qsort(right)
    foo = [pivot]
    return left + foo + right



data = []
f = open('./data')
line = f.readline()
line = line.replace('\n','')
line = line.replace('\r','')
data.append(int(line))
while line:
    line = f.readline()
    line = line.replace('\n','')
    line = line.replace('\r','')
    try :
        data.append(int(line))
    except ValueError:
        break

f.close()
data = qsort(data)
#print(data)

