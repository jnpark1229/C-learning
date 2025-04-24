friends=['민재','태웅','태민','진영','원준']
print(f'친구목록:{friends}')
friends.remove('민재')
friends.insert(0,'김민나리') #['김민나리','태웅','태민','진영','원준']
friends.extend(['완보민재','찢민재']) #리스트 안에 원소만 추가됨
friends.append(['이병김민나리','죄송합니다!']) #리스트 안에 리스트 추가됨
friends+=['극뚱땡이','노다이어트민재'] # 리스트 안에 원소만 추가됨
print(f'친구목록:{friends}')
print('김민나리는 친구가 있나?','이병 김민나리!'in friends)
print(f'죄송하면 군생활 끝나나? 아닙니다 {friends[7][1]}\n')

li=[1,2,['a','b','c'],3,4,5]
print(li[0:3])
print(li[2][:])#이렇게도 가능함
li.remove(2)
print(li[:5])

li1=li
li1[0]='1'
print(li)

li2=li[:]
li2[0]='one'
print(li)
print(li2)

