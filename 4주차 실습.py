weight = input("몸무게를 kg 단위로 입력하시오: ")
height = input("키를 m 단위로 입력하시오: ")
# 🚨 Don't change the code above 👆

## data type 확인 및 변환 (type-casting) ##
heightf = float(height)
weightf = float(weight)

# BMI < 18.5일 경우 저체중
# 18.5 <= BMI < 23일 경우 정상
# 23 <= BMI < 25일 경우 비만 전 단계(과체중 or 위험체중)
# 25 <= BMI < 30일 경우 1단계 비만
# 30 <= BMI < 35일 경우 2단계 비만
# 35 <= BMI일 경우 3단계 비만

## BMI 수치 계산 ##
result=round(weightf/heightf**2,2)
stat=' '

if result<18.5:
  stat='저체중'
elif result>=18.5 and result<23:
  stat='정상'
elif result>=23 and result<25:
  stat='과체중'
elif result>=25 and result<30:
  stat='1단계 비만'
elif result>=30 and result<35:
  stat='2단계 비만'
elif result>=35:
  stat='3단계 비만'

print(f'당신의 BMI는{result}로 {stat}에 해당합니다.')



