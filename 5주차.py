# # 🚨 Don't change the code below 👇
number = int(input("아무 정수를 입력하시오: "))
# # 🚨 Don't change the code above 👆

# #Write your code below this line 👇
if number%2==0:
    print("이 숫자는 짝수임")
else:
    print("이 숫자는 홀수임")



# # 🚨 Don't change the code below 👇
print("Python 피자에 오신 것을 환영합니다!")
size = input("사이즈는 뭘로 하시겠습니까? (S/M/L) ")
add_pepperoni = input("페페로니 추가하시겠습니까? (네/아니오) ")
add_cheese = input("치즈 추가하시겠습니까? (네/아니오) ")
# # 🚨 Don't change the code above 👆

# #Write your code below this line 👇
if size=='S':
    cost=10000
elif size=='M':
    cost=15000
elif size=='L':
    cost=20000

if add_pepperoni=="네":
    if size=='S':
        cost=cost+2000
    elif size=='M' or size=='L':
        cost=cost+3000
    
if add_cheese=="네":
    cost=cost+1000

print(f'결제 금액은 {cost}원 입니다.')



# 하단에 조건문을 활용하여 완성하세요.
# 💡 조건
# 나이가 10세 이상이고 키가 120cm 이상이면: "탑승 가능"
# 나이가 10세 미만이지만 키가 140cm 이상이면: "보호자 동반 시 탑승 가능"
# 그 외의 경우: "탑승 불가"

age = int(input("나이를 입력하세요: "))
height = int(input("키를 입력하세요 (cm): "))

if age>=10 and height>=120:
    print("탑승 가능")
elif age<10 and height>=140:
    print("보호자 동반 시 탑승 가능")
else:
    print("탑승 불가")



