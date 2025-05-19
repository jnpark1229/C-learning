# 1번
# 숫자 세기
import time
n = 1
while n <= 10:
  print(n)
  n = n + 1
  time.sleep(1)
print("숫자 세기 끝")


# 주의사항: 무한반복 #time 함수 공부!!!*********
import time
n = 1
while n <= 5:
  print("파이썬 재밌네")
  time.sleep(1)
  # n = n + 1
print("파이썬 쉽네")


#구구단
i=1
while i<10:
  print(f'3*{i}={3*i}')
  i+=1






#암호 생성기(while문)*********
#Password Generator Project using While loop
import random
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
symbols = ['!', '#', '$', '%', '&', '(', ')', '*', '+']

print("PyPassword Generator!")
nr_letters = int(input("암호에 문자는 몇 개 넣을까요? How many characters?\n"))
nr_symbols = int(input(f"특수문자는 몇 개 넣을까요? How many special characters?\n"))
nr_numbers = int(input(f"숫자는 몇 개 넣을까요? How many numbers?\n"))

#e.g. 4 letter, 2 symbol, 2 number = JduE&!91
#각 list에서 랜덤하게 선택 (random.randint 함수 활용)
#list 마지막에 추가할 때는: list이름.append(추가할 element)

#Write your code below this row 👇
password_list = []
n1=0
while n1 < nr_letters:
  x = random.randint(0,len(letters)-1)
  password_list.append(letters[x])
  n1+=1
n2=0
while n2 < nr_symbols:
  y = random.randint(0,len(symbols)-1)
  password_list.append(symbols[y])
  n2+=1

n3=0
while n3 < nr_numbers:
  z = random.randint(0,len(numbers)-1)
  password_list.append(numbers[z])
  n3+=1

# 🚨 Don't change the code below 👇(중요!!!******)
password = ""
for char in password_list:
  password += char
print(f"Your password is: {password}")
# 🚨 Don't change the code above 👆


#암호 생성기(for문)*********
import random
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
symbols = ['!', '#', '$', '%', '&', '(', ')', '*', '+']

print("PyPassword Generator!")
nr_letters = int(input("암호에 문자는 몇 개 넣을까요? How many characters?\n"))
nr_symbols = int(input(f"특수문자는 몇 개 넣을까요? How many special characters?\n"))
nr_numbers = int(input(f"숫자는 몇 개 넣을까요? How many numbers?\n"))

#e.g. 4 letter, 2 symbol, 2 number = JduE&!91
#각 list에서 랜덤하게 선택 (random.randint 함수 활용)
#list 마지막에 추가할 때는: list이름.append(추가할 element)

#Write your code below this row 👇
password_list = []

for i in range(nr_letters):
  x = random.randint(0,len(letters)-1)
  password_list.append(letters[x])
i=0
for i in range(nr_symbols):
  y = random.randint(0,len(symbols)-1)
  password_list.append(symbols[y])
i=0
for i in range(nr_numbers):
  z = random.randint(0,len(numbers)-1)
  password_list.append(numbers[z])


# 🚨 Don't change the code below 👇
password = ""
for char in password_list:
  password += char

print(f"Your password is: {password}")
# 🚨 Don't change the code above 👆