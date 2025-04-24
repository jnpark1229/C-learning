# 🚨 Don't change the code below 👇
weight = input("몸무게를 kg 단위로 입력하시오: ")
height = input("키를 m 단위로 입력하시오: ")
# 🚨 Don't change the code above 👆

#Write your code below this line 👇

## data type 확인 및 변환 (type-casting) ##
weight=float(weight)
height=float(height)

## BMI 수치 계산 ##
BMI=round(weight/height**2)

## 결과 출력 ##

#참고
# BMI=round (weight/height**2)

print(f"몸무게가 {weight}kg이고, 키가 {height}m인\n65당신의 BMI는 {BMI}입니다.")