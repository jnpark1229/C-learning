a=[1,2,3]
b=[4,5,6]
#대입 연산자 활용
a+=[7,8,9]
print(a,end=" ")
print(b)

#split 함수: 문자열을 쪼개서 리스트로 바꿔줌
#문자열.split("구분자",최대분할횟수)
#유의사항
# ① 구분자가 없는 경우, 문자열 전체가 리스트 하나로 들어감

#sum 함수: sum(리스트)
numbers = [1, 2, 3, 4, 5]
total = sum(numbers)
print(total)  # 출력: 15

#append 함수: 리스트의 맨 끝에 요소를 추가
#리스트.append(요소)
fruits = ['apple', 'banana']
fruits.append('orange')
print(fruits)  # 출력: ['apple', 'banana', 'orange']

#insert 함수:리스트의 특정 위치에 요소를 삽입
# 리스트.insert(인덱스, 요소)
nums = [1, 2, 4]
nums.insert(2, 3)  # 인덱스 2 자리에 3 삽입, 그 다음에 있는건 뒤로 밀림
print(nums)  # 출력: [1, 2, 3, 4]

#extend 함수: 리스트.extend(다른 리스트(뒤에 붙여짐))
a = [1, 2]
b = [3, 4]
a.extend(b)
print(a)  # 출력: [1, 2, 3, 4]

#remove 함수: 리스트에서 지정된 값 하나를 삭제 (가장 먼저 나오는 것만)
#리스트.remove(값)
items = [1, 2, 3, 2, 4]
items.remove(2)
print(items)  # 출력: [1, 3, 2, 4]


