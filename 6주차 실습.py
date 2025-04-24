# #실습 1번
# # Write your code below this line 👇
# # random 모듈을 import 해 오세요.
# import random
# # random 모듈의 randint 함수를 이용하여 원하는 범위 내의 정수를 임의로 발생시키세요.
# random.randint(1,10)



# #실습 2번 
# # Write your code below this line 👇
# # random 모듈을 import 해 오세요.🎲
# import random
# # random 모듈의 randint 함수를 이용하여 0 또는 1이 도출되도록하고, 조건문을 이용하세요.
# coin=random.randint(0,1)
# if coin==1:
#   print("앞면 (front)")
# else:
#   print("뒷면 (back)")




import random
#실습 3번(가위바위보)
rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''
paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''
scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''

# 위 rock, paper, scissors의 string 형 변수들을 배열에 담은 list형 변수 생성
game=[scissors,rock,paper]

# input 함수를 이용하여 사용자 입력을 받음
user=int(input("가위바위보! 뭘 내셨나요? 가위는 0, 바위는 1, 그리고 보자기는 2를 입력하세요.\n"))

# print 함수로 사용자 입력을 출력하여 확인시켜줌
print(f'{game[user]}\n을 내셨습니다!]\n')

# random.randint() 함수를 활용하여 컴퓨터가 낼 것에 해당하는 숫자를 임의로 발생시킴
computer=random.randint(0,2)

# print 함수로 컴퓨터가 무엇을 내는지 알려줌
print(f'컴퓨터는{game[computer]}\n를 냈습니다!\n')
# if/elif/else 구문으로 각 경우별로 승패를 판별하여 출력함
if user==0 and computer==2:
    print("당신이 이겼습니다!")
elif user==computer:
    print("비겼습니다!")
elif user==2 and computer==0:
    print("당신이 졌습니다!")
elif user>computer:
    print("당신이 이겼습니다!")
else:
    print("당신이 졌습니다!")
