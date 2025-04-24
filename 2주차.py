#아래의 코드를 디버깅하여 교정하시오.

print("1일 - String 응용")
print('String 연결은 '+' 연사자를 이용하여 수행됨.')
print('예: print("Hello " + "world")')
print(("새 줄은 backslash와 n을 이용하여 생성할 수 있음."))



print()

#1. 프로그램의 인사말을 작성하세요.

#2. 사용자의 상태에 대한 질문을 제시하세요.

#3. 사용자와 관련되는 명사를 입력하도록 질문을 제시하세요.

#4. 두 가지 답을 합하여 닉네임을 제공하세요.

print()
name=input("what's your name?")
print("hi",name,"nice to meet you")


print("안녕하세요")
emotion=input("지금 생각나는 감정은 무엇인가요(ex:화남,배고픔 등)\n")   
object=input("제일 아끼는 물건이 무엇인가요?\n")  
print("당신의 이름은",emotion,object,"입니다")



a=input("a: ")   
b=input("b: ")
a,b=b,a
print('a의 값은:',a)
print('b의 값은:',b)

a=input("a: ")#5
b=input("b: ")#3
tmep=a
a=b
b=tmep
print(a,b)

a=int(input("a: "))
b=int(input("b: "))
print(a+b)

x=10
y=3.14
z="안녕"    

print(type(y))
print(type(x))  
print(type(z))
