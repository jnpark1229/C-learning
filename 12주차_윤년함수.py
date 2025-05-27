def is_leap(year):
  if year % 4 == 0:
    if year % 100 == 0:
      if year % 400 == 0:
        return True # 코드 수정 필요
      else:
        return  False # 코드 수정 필요
    else:
      return True # 코드 수정 필요
  else:
    return False # 코드 수정 필요

# days_in_month 함수를 완성하세요.
def days_in_month(y, m):
  month_days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31] 
  leap = is_leap(y)
  if m == 2 and leap == True :
    return 29
  elif 1 <= m <= 12:
    return month_days[m-1]


#🚨 Do NOT change any of the code below
year = int(input("Enter a year: "))
month = int(input("Enter a month: "))
days = days_in_month(year, month)
if 1<= month <=12:
  print(days)
else: 
  print('오류')