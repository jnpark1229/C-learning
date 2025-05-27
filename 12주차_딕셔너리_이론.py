#1번
dict = {"강아지":"dog", "고양이":"cat", "새":"bird"}
#key는 무조건 문자열로 표기한다.
print(dict)
print(dict.keys())
print(dict.values())
print(dict["강아지"]) #key값에 해당하는 value값 얻기
print(f'딕셔너리 크기 = {len(dict)}') #item 개수수
print()

persons = {"name":"홍길동","age":18, "is_student":False}
print(f'당신은 학생입니까? {persons["is_student"]}')
print(f'당신의 나이는? {persons["age"]}')
print(f'당신의 이름은? {persons["name"]}')
print('\n\n')

#2번
mydict = {}
mydict['홍길동'] = '010-1111-1111'
mydict['이순신'] = '010-2222-2222'  
print(mydict)
del mydict['이순신']
print(mydict)

mydict.clear()  
print(mydict)

# del mydict
# print(mydict)
print('\n\n')
#3번
mydict = {'kim':'1111', 'park':'2222', 'lee':'3333'}
for item in mydict.items(): # item == key값과 value값
    print(item) 
    print(item[0])
    print(item[1])
    print(type(item)) #item은 튜플 class임

mydict = {'kim':'1111','park':'2222', 'lee':'3333'}
for k in mydict.keys():
    v = mydict[k]
    print(f'{k:10s} {v:10s}')

for x in mydict:
    print(f'key값:{x:4s} ==> value값:{mydict[x]}')

print(f'key만 출력: {mydict.keys()}')
print(f'value만 출력: {mydict.values()}')


#활용 예제
words = {"사과": "apple", 
         "딸기": "strawberry", 
         "바나나": "banana", 
         "오렌지":"orange", 
         "배": "pear"}
correct = 0
for word in words: #딕셔너리를 반복하는 경우 key값을 반복한다.
    answer = input(f"\n{word}를 영어로 표현하면 무엇인가?")

    if answer == words[word]:
        correct += 1
score = (correct / len(words))*100

print(f'총 {len(words)}개 중 {correct}개 맞으셨습니다! ==> 100점 만점 중 {score}점')