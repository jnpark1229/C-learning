#1번
#가리키는 부분의 문자 변경
li = ['U','B']
li2 = li
li2[0] = 'W'
print(li[0])

# 리스트 복사
li = ['U','B']
li2 = li[:]
li2[0] = 'W'
print(li[0])


#2번(배열 요소 다루기)
#[start:end:step]
#index:0,1,2,3,4,5,6,7,8 = -9,-8,-7,-6,-5,-4,-3,-2,-1(양수 인덱스-음수 인덱스 = 전체 원소 개수)
numbers=[1,2,3,4,5,6,7,8,9]
#처음부터(0부터) 3까지(4 미포함)
print(numbers[:4]) #-->1,2,3,4

#2칸씩 건너뛰면서 원소 추출
print(numbers[::2]) #--> 1,3,5,7,9

#전체 리스트 역순으로 추출
print(numbers[::-1])#-->9,8,7,6,5,4,3,2,1

#인덱스 7부터 3까지 역순으로 추출
print(numbers[7:3:-1])#-->8,7,6,5

#인덱스 처음부터 끝까지 출력력
print(numbers[:])

#3번(반복)
lang=("C","JAVA","PYTHON")
langs=lang*3 #lang을 3번 반복하여 langs에 저장

nat = '대한민국'*50 #문자열을 50번 반복하여 저장

nat=['대한민국']*50 #리스트 원소를 50번 반복하여 저장
#['대한민국','대한민국','대한민국',...,]



#4번(+연산자)
s1='I like'
s2=s1+ "Python Language"
print(s2)
a=(100,200,300,400,500)
b=(600,700,800,900)
c=a+b

# city=['서울시',800,'부산시',400]    
# tot=a+city #서로 다른 문자 합칠 수 없음


#5번(in 연산자)
# 시퀀스 자료형에 특정 원소가 있는지를 True/False 로 알려줌(출력X)
color=['red','green','blue','white']
'black'in color

s1='Python'
't' in s1

#6번(len()함수) 
s1="I like calculus"
print(len(s1))

city=["서울시",800,'부산시','400']
print(len(city)) #len함수를 시퀀스 자료형에 쓰면 원소 개수를 알려줌