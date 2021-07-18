#### What i actually did 

a = int(input())
alist = []

# for taking the nested input  

for i in range(0, a):

    alist.append([])

    for j in range(0, 2):
        if(j == 0):
            str = input()
            alist[i].append(str)
        else:
            into = float(input())
            alist[i].append(into)

#################################

#  found the last or the min value of the list


l = []
for i in range(0, len(alist)):
    l.append(alist[i][1])

mini = min(l)

# after the excluding the min value i made a new containing all the other elements

newlist = []
for i in range(0, len(alist)):
    if(alist[i][1] != mini):
        newlist.append(alist[i])

# again found the new min for that list which will be the 2nd min value accc to the actual list

m = []
for i in range(0, len(newlist)):
    m.append(newlist[i][1])

mini = min(m)

# extracted the all the similar min value present in the list to a newlist to sort it according to
# to the alphabatical order

namesortlist = []


for i in range(0, len(newlist)):
    if(newlist[i][1] == mini):
        namesortlist.append(newlist[i])

namesortlist.sort()

# at last just printed the list

for i in range(0, len(namesortlist)):
    print(namesortlist[i][0])
