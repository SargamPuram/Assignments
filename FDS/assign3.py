'''
Q.) Write a Pythonprogram for department library which has N books, write
functions for following:
a)Delete the duplicate entries
b) Display books in ascending order based on cost of books
c) Count number of books with cost more than 500.
d)Copy books in a new list which has cost less than 500.

'''
cost=[]
bname=[]

while True:
    data = input()
    if(data==""):
        break
    else:
        data=data.split(" ")
        cost.append(int(data[0]))
        bname.append(data[1])

print(bname)
print(cost)

def duplicate():
    p=len(bname)
    for i in range (0,p-1):
        for j in range (i+1,p-1):
            if(bname[i]==bname[j]):
                del(bname[j])
                del(cost[j])
                p=len(bname)
    
    print("After deletion of duplicate entries")
    for i in range (0,len(bname)):
        print(bname[i],cost[i])

def sorting1():
    for i in range (0,len(bname)):
        for j in range (i+1, len(bname)):
            if(cost[i]>cost[j]):
                cost[i]=temp
                bname[i]=temp1
                cost[i]=cost[j]
                banme[i]=bname[j]
                cost[j]=temp
                banme[j]=temp1
    print("After sorting ")
    for i in range (0,len(bname)):
        print(bname[i],"",cost[i])

def count():
    print("Number of books having cost more then 500")
    counter = 0
    for i in range (0,len(bname)):
        if(cost[i]>500):
            counter=counter+1
            print(bname[i]," ",cost[i])
    
    print("total = ", counter)

def copylist():
    list1=[]
    list2=[]

    for i in range(0,len(bname)):
        if(cost[i]<500):
            list1.append(bname[i])
            list2.append(cost[i])

    for i in range (0,len(list1)):
        print(list1[i], " ", list2[i])

duplicate()
sorting1()
count()
copylist()



