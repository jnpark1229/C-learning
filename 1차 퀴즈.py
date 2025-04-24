# #동전 개수 개산 문제
amount=int(input("금액을 입력하세요:"))

obak=amount//500
amount=amount%500

bak=amount//100
amount=amount%100   

osip=amount//50 
amount=amount%50    

sip=amount//10
amount=amount%10

print(f'500원 동전 개수: {obak}')
print(f'100원 동전 개수: {bak}')
print(f'50원 동전 개수: {osip}')
print(f'10원 동전 개수: {sip}')

#연비 계산 
#연비 = 주행거리 / 소비된 연료

dist=float(input("주행 거리를 입력하세요 (km):"))
fuel=float(input("소비된 연료를 입력하세요 (L):"))   

cost=round(dist/fuel,2)
print(f'연비: {cost} km/L') 


#성적계산
score=input('점수를 입력하세요: ')  
if score>=90:
    grade="A"
elif score>=80:
    grade="B"
elif score>=70:
    grade="C"
elif score>=60:
    grade="D"
else:
    grade="F"   
print(f'당신의 성적은 {grade}입니다.')

