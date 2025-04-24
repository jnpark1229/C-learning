# import random
# names_str=input("각 이름은 콤마(,)와 빈칸으로 구분하여 참여자들의 이름을 모두 제시하시오: \n")
# names=names_str.split(",")
# print(names)

# computer=random.randint(0,len(names)-1)
# print(f"고향에 내려가면 밥은 {names[computer]}(이)가 모두에게 쏜다!")



# # 🚨 Don't change the code below 👇
# row1 = ["⬜️","⬜️","⬜️"]
# row2 = ["⬜️","⬜️","⬜️"]
# row3 = ["⬜️","⬜️","⬜️"]
# map = [row1, row2, row3]

# print(f"{row1}\n{row2}\n{row3}")
# position = input("보물을 어디에 둘까요? ")
# # 🚨 Don't change the code above 👆
# #Write your code below this row 👇
# x=int(position[0])
# y=int(position[1])
# if 1<=x<=3 and 1<=y<=3:
# 	map[y-1][x-1]="X"
# else: 
# 	print("알맞은 범위 내의 숫자(1~3 사이의 숫자)를 입력하세요.")

# #Write your code above this row 👆

# # 🚨 Don't change the code below 👇
# print(f"{row1}\n{row2}\n{row3}")


hello,hi=map(str,input("안녕").split())
print(hello,hi)
