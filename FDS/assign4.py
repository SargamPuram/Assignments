'''
Q.) Write a python program to store roll numbers of student array who
attended training program in sorted order.
Write function for searching whether particular student attended training
program or not, using Binary search and Fibonacci search'''



nos=int(input("enter no of students"))
start=0
end=nos-1
present=[]
print("enter present student Roll NO ")
for i in range(0,nos):
 b=int(input())
 present.append(b)
key=int(input("enter roll no you want to search"))
flag=False
def binary(present1,start,end):
    if(start<=end):
        mid=int((start+end)/2)
    if(key==present1[mid]):
        print("Roll no found at position",mid)
        flag=True
    elif(key>present1[mid]):
        binary(present,mid+1,end)
    elif(key<present1[mid]):
        binary(present1,start,mid-1)
    else:
        print("roll no not found")
binary(present,start,end)

'''
nos = int(input("Enter the number of students: "))
start = 0
end = nos - 1
present = []

print("Enter present student Roll Numbers:")
for i in range(0, nos):
    b = int(input())
    present.append(b)

key = int(input("Enter the Roll Number you want to search: "))
flag_binary = False
flag_fibonacci = False


def binary(present1, start, end):
    global flag_binary
    if start <= end:
        mid = int((start + end) / 2)
        if key == present1[mid]:
            print("Roll number found at position (Binary Search):", mid)
            flag_binary = True
        elif key > present1[mid]:
            binary(present1, mid + 1, end)
        elif key < present1[mid]:
            binary(present1, start, mid - 1)
    else:
        print("Roll number not found (Binary Search)")


def fibonacci(present1, key):
    global flag_fibonacci
    fib_m_minus_2 = 0
    fib_m_minus_1 = 1
    fib_current = fib_m_minus_1 + fib_m_minus_2

    while fib_current < nos:
        fib_m_minus_2 = fib_m_minus_1
        fib_m_minus_1 = fib_current
        fib_current = fib_m_minus_1 + fib_m_minus_2

    offset = -1

    while fib_current > 1:
        i = min(offset + fib_m_minus_2, nos - 1)

        if present1[i] == key:
            print("Roll number found at position (Fibonacci Search):", i)
            flag_fibonacci = True
            break
        elif present1[i] < key:
            fib_current = fib_m_minus_1
            fib_m_minus_1 = fib_m_minus_2
            fib_m_minus_2 = fib_current - fib_m_minus_1
            offset = i

        elif present1[i] > key:
            fib_current = fib_m_minus_2
            fib_m_minus_1 = fib_m_minus_1 - fib_m_minus_2
            fib_m_minus_2 = fib_current - fib_m_minus_1

    if not flag_fibonacci:
        print("Roll number not found (Fibonacci Search)")


binary(present, start, end)
fibonacci(present, key)

'''