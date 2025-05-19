#1번 
'''입력되는 키 값들의 평균치를 구하는 프로그램을 구현하세요.
입력된 키 값들이 예를 들어 아래와 같을 때
student_heights = [180, 124, 165, 173, 189, 169, 146]

키 값들의 총합
180 + 124 + 165 + 173 + 189 + 169 + 146 = 1146을 student_heights list의 
원소 개수인 7 로 나누면 아래의 값
1146 ÷ 7 = 163.71428571428572이 계산되는데, 
이를 반올림하여 최종 값 = 164 을 도출하면 됩니다.

***중요 구현하는 코드 내에서 sum() 및 len() 함수를 사용하지 말고 구현하도록 하세요.***
for loop에 대해 학습한 내용을 활용하여 구현해 보세요.
'''

'''예시 입력
156 178 165 171 187'''
'''예시 출력 
     171'''

student_heights = input("학생 키 목록을 입력하시오(Enter the height values): ").split()
print(student_heights)

n = 0 #<--*****중요
for h in student_heights: # for <item> in <collection>: 
  #collection에 있는 원소를 h에 저장->for문 한 턴 끝나면 다음 원소로 업뎃
  student_heights[n] = int(h)
  n += 1
print(student_heights)

sum=0
for i in student_heights:
  sum=sum+i
print(sum)
result=round(sum/n)
print(result)



#2번
''' 1부터 시작하여 1씩 증가하며 20까지 증가하는 수열'''
for i in range(1,21):
  print(i,end=' ')
print()

'''10부터 시작하여 5씩 증가하며 200까지 증가하는 수열'''
for i in range(10,201,5):
  print(i,end=' ')
print()

a=list(range(10,101,5))
print(a)



#3번
  # 숫자 세기
for t in range(1, 11, 1):
  print(f"Count {t}")

  # 숫자 거꾸로 세기
for t in range(10, 0, -1):
  print(f"Count {t}")

  # 파라미터 생략하기 (1)
for n in range(1, 11):
  print(f"Count {n}")

  # 파라미터 생략하기 (2)
for n in range(11):
  print(f"Count {n}")

  # 원하는 횟수만큼 반복하기
for n in range(5):
  print("Hello Python")

  # 1부터 500까지 더하기
sum=0
for i in range(1,501):
  sum+=i
print(sum)


#4번
'''실습 2 - 짝수 더하기
안내
1 부터 100 사이의 모든 짝수의 합을 계산하는 프로그램을 구현하세요.

즉, 아래의 계산을 수행하는 프로그램을 구현하시면 됩니다:

i.e. 2 + 4 + 6 + 8 +10 ... + 98 + 100

모든 짝수들을 더한 값 하나만을 출력시키면 됩니다.'''

#Write your code below this row 👇
sum=0 #<--*****중요!

#sol1
for i in range(0,101,2):
  sum+=i
print(sum)

#sol2
for i in range(0,101):
  if i%2==0:
    sum+=i
print(sum)


#5번
'''369 게임의 과정을 프린트하는 프로그램을 구현하시오.

1부터 100까지의 수를 순차적으로 프린트 하되, 해당 수의 각 자리수에 3, 6, 또는 9가 포함되어 있을 경우 '박수'가 프린트되도록 하세요.'''
print(
"""
 _____  __   ___
|___ / / /_ / _ \\
  |_ \\| '_ \\ (_) |
 ___) | (_) \\__, |
|____/ \\___/  /_/
"""
)
#3 6 9 13 16 19 23 26 29
#아래에 코드를 작성하세요~👇
for i in range(1,101):
  i=str(i)
  if ('3'in i) or ('6'in i) or ('9'in i):
    print("박수")
  else: print(i)
