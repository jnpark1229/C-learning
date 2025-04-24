# #실습 1
# import random
# names_string = input("각 이름은 콤마(,)와 빈칸으로 구분하여 참여자들의 이름을 모두 제시하시오: \n")
# names = names_string.split(",") 
# print(names)

# computer=random.randint(0,len(names)-1)
# print(f'{names[computer]}이(가) 쏜다!')

# #실습 2
# num = [[11, 12, 13], [21, 22, 23], [31, 32, 33, 34], [41, 42]]
# sum1=sum(num[0])
# sum2=sum(num[1])
# sum3=sum(num[2])
# sum4=sum(num[3])
# print(f'1행의 합 {sum1}')
# print(f'2행의 합 {sum2}')
# print(f'3행의 합 {sum3}')
# print(f'4행의 합 {sum4}')

# # hap=[]
# # for i in range(len(num)-1):
# #     hap.append(sum(num[i]))
# #     print(f'{i+1}행의 합 {hap[i]}')




#실습 3
# 🚨 Don't change the code below 👇
row1 = ["⬜️","⬜️","⬜️"]
row2 = ["⬜️","⬜️","⬜️"]
row3 = ["⬜️","⬜️","⬜️"]
map = [row1, row2, row3]

print(f"{row1}\n{row2}\n{row3}")
# 🚨 Don't change the code above 👆
pos=input("보물 위치를 입력하세요(열,행 순서로)")
#Write your code below this row 👇
x=int(pos[0])-1
y=int(pos[1])-1

if 0<=x<=2 and 0<=y<=2:
    map[y][x]='X'
    print(f'{row1}\n{row2}\n{row3}')
else: 
    print("알맞은 범위 내의 열과 행 번호를 입력하세요(1~3 사이의 숫자)")

#Write your code above this row 👆

# 🚨 Don't change the code below 👇


