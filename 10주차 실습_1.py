def func1(a,b):
  c = a+b
  print("x,y의 값: ", x, y)

def func2(x,y):
  x = x*2
  y = y*2
  print("x,y의 값: ", x, y)
  global z
  z = x+y

x = 10
y = 20
func1(x,y)
#print(c)

func2(x,y)
print(x,y)
print(z)




# 나이 계산 함수를 정의하고 호출하세요 👇

def age_calc(a):
  age = 2025 - a
  return age
year = int(input("태어난 연도: "))
res = age_calc(year)
print(f'{year}년생: 올해 {res}살 입니다.')




# 인사하기 함수를 정의하고 호출하세요 👇
def hello(name,times):
  for i in range(times):
    print(f'hello {name}')
name = input("이름: ")
times = int(input("반복 횟수: "))
hello(name,times)