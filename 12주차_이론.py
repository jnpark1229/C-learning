while True:
  command = input("입력(q: 종료): ")
  if command == 'q':
    break  # 반복문 안에서 if 조건이 참이면 break 실행
  print("계속 실행 중")

#안쪽 for문만 탈출
for i in range(1, 4):            # 바깥쪽 for문
  for j in range(1, 4):        # 안쪽 for문
    print(f"i={i}, j={j}")
    if i == 2 and j == 2:
      break                # 안쪽 for문만 종료됨

#이중 for문 한 번에 탈출
found = False
for i in range(1,4):
    for j in range(1,4):
        print(f'i = {i}, j = {j}')
        if i == 2 and j == 2:
            found = True
            break
    if found:
        break

#반복문과 continue
for i in range(1, 6):
  if i == 3:
    continue
  print(i)