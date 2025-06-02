# class Person:
#     name = None
#     age = 0

#     def info(self,pName,pAge):
#         self.name = pName
#         self.age = pAge
    
#     def introduce(self):
#         print(f"안녕하세요 제 이름은 {self.name}입니다.")
#         print(f'나이는 {self.age}살 입니다.')
    
# p1 = Person()
# p1.info("홍길동",21)
# p1.introduce()


# class Circle:
#     radius = None

#     def __init__(self,radius = 20):
#         print("Circle 객체 생성")
#         self.radius = radius
    
#     def setR(self, radius):
#         self.radius = radius
    
#     def get_area(self):
#         return 3.14 * self.radius ** 2
    
#     def get_len(self):
#         return 2 * 3.14 * self.radius
        

# c1 = Circle()
# print(c1.radius)

# c1.setR(10)

# print(c1.get_area())
# print(c1.get_len())


class FourCal():
    def __init__(self,x,y):
        self.n1 = x
        self.n2 = y
    def add(self):
        print(f'두 수의 덧셈: {self.n1 + self.n2}')
    def mul(self):
        print(f'두 수의 곱셈: {self.n1 * self.n2}')
    def sub(self):
        print(f'두 수의 뺄셈: {self.n1 - self.n2}')
    def div(self):
        print(f'두 수의 나눗셈:{self.n1 // self.n2}')

f = FourCal(4,2)
f.add()
f.mul()
f.sub()
f.div()

# class Car:
#     color =''
#     speed = 0
    
#     def upSpeed(self,value):
#         self.speed += value
    
#     def downSpeed(self,value):
#         self.speed -= value
  
# myCar1 = Car()
# myCar1.color = "빨강" 
# myCar1.speed = 0

# myCar2 = Car()
# myCar2.color = "노랑" 
# myCar2.speed = 0 

# myCar3 = Car()
# myCar3.color = "파랑" 
# myCar3.speed = 0

# myCar1.upSpeed(30)
# print(f'자동차1의 색은 {myCar1.color}이며, 현재 속도는 {myCar1.speed}km/h 입니다.')
# myCar2.upSpeed(60)
# print(f'자동차2의 색상은 {myCar2.color}이며, 현재 속도는 {myCar2.speed}km/h 입니다.')
# myCar3.upSpeed(0)
# print(f'자동차3의 색상은 {myCar3.color}이며, 현재의 속도는 {myCar3.speed}km/h 입니다.')


# class Car:
#     color = ""
#     speed = 0
#     count = 0
    
#     def __init__(self):
#         self.speed = 0
#         Car.count += 1
# myCar1 = Car()
# myCar1.speed = 30
# print(f'자동차1의 현재 속도는 {myCar1.speed}km/h,생산된 총 자동차는 총 {myCar1.count}대 입니다. ')


# class Car:
#     color =""
#     speed = 0

#     def upSpeed(self,value):
#         self.speed += value 

#     def downSpeed(self,value):
#         self.speed += value
    
# myCar1 = Car()
# myCar1.color = "black"
# myCar1.upSpeed(300)
# print(f'자동차1의 색상은 {myCar1.color}이며, 속도는 {myCar1.speed}km/h 입니다.')

# class Car:
#     color =''
#     speed = 0

#     def __init__(self):
#         self.color = "빨강"
#         self.speed = 0

#     def upSpeed(self,value):
#         self.speed += value

#     def downSpeed(self,value):
#         self.speed -= value

# myCar1 = Car()
# myCar1.upSpeed(523)
# print(f'자동차1의 색상은 {myCar1.color}이며, 현재 속도는 {myCar1.speed}km/h 입니다.')

# class Car:
#     color = ''
#     speed = 0
#     count = 0

#     def __init__(self):
#         self.speed = 0
#         Car.count += 1
#         self.count +=1

# myCar1 = Car()
# myCar1.speed = 30
# print(f'자동차1의 현재 속도는 {myCar1.speed}km/h, 생산된 총 자동차 수는 {Car.count}대 입니다.')

# myCar2 = Car()
# myCar2.speed = 60
# print(f"자동차2의 현재 속도는 {myCar2.speed}km/h, 생산된 총 자동차는 총 {myCar1.count}대입니다.")


# class Car:
#     speed = 0
#     def upSpeed(self,value):
#         self.speed += value
#         print(f'현재 속도는 {self.speed} (슈퍼 클래스)')

# class sedan(Car):
#     def upSpeed(self,value):
#         self.speed += value
#         if self.speed > 150:
#             self.speed = 150
#         print(f'현재 속도는 {self.speed} (서브 클래스)')

# class truck(Car):
#     pass


# sedan1 = sedan()
# truck1 = truck()

# print("트럭 -->",end = '')
# truck1.upSpeed(200)

# print('세단 -->',end = '')
# sedan1.upSpeed(0)


