#함수의 매개변수
def volume_box(width,height,depth):
    vol = width * height * depth
    return vol
w = int(input())
h = int(input())    
d = int(input())    

volume = volume_box(w,h,d)
print(f'부피는 {volume}입니다')

#묵시적 값을 가진 매개변수
def volume_box2(width = 1, height = 1, depth = 1):
    vol = width * height * depth
    return vol
wid = int(input("가로: "))
hei = int(input("세로: "))
dep = int(input("높이: "))

volume1 = volume_box2()
print(f'volume1은 {volume1}입니다.')
volume2 = volume_box2(wid)
print(f'volume2는 {volume2}입니다.')
volume3 = volume_box2(wid,hei)
print(f'volume3는 {volume3}입니다.')

#이름에 의한 값 전달
def volume_box3(width, height, depth):
    vol = width * height * depth
    return vol
vol1 = volume_box3(depth = 15, height = 5, width = 30)
print(vol1)
vol2 = volume_box3(height = 20, width = 10, depth = 15)
print(vol2)