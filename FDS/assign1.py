'''
Write a Python program to store marks scored in subject “Fundamental of Data Structure” by N students
in the class. Write functions to compute following:
a) The average score of class
b) Highest score and lowest score of class
c) Count of students who were absent for the test
d) Display mark with highest frequency
'''

marks = []
present = []
absent = []

nos=int(input("Enter the number of students in the class"))

i=0

while(i<nos):
    b=input("Enter the marks of student :")
    marks.append(b)
    i=i+1

j=0
while(j<nos):
    if(marks[j]=='ab'):
        absent.append(marks[j])
    else:
        b=int(marks[j])
        present.append(b)
    j=j+1

i=0
while(i<len(present)):
    print(present)
    i=i+1

def avg():
    total=0
    avg=0
    i=0
    while(i<len(present)):
        total = total + present[i]
        i=i+1
    avg=total/len(present)
    print("The total marks of the class is ", total)
    print("The average marks of the class is", avg)

def high():
    highest=0
    i=0
    while(i<len(present)):
        if(highest<present[i]):
            highest=present[i]
        i=i+1
    print("The highest marks in the class is ", highest)

def low():
    lowest=999
    i=0
    while(i<len(present)):
        if(lowest>present[i]):
            lowest=present[i]
        i=i+1
    print("The lowest marks in the class is ", lowest)

def abs():
    print("The number of absent students in the class are ", len(absent))

def frequency():
    hf=0
    for i in range(0,len(present)):
         fr=1
         for j in range(0,len(present)):
                if(present[i]==present[j]):
                    fr=fr+1
                    j=j+1
    if(hf<fr):
        hf=fr
        p=present[i]
    i=i+1
    print("The highest frequency is",hf,"for marks",p)

avg()
abs()
frequency()
high()
low()