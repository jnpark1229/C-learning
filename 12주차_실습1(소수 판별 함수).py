# Write your code below this line 👇
def prime_checker(n):
    if n == 1:
            print(f'1은 소수가 아닙니다.')

    for i in range(2,n):
        if n % i == 0:
            print(f'{n}은(는) 소수가 아닙니다.')
            break

    else:
        print(f'{n}은(는) 소수입니다.')


def prime_checker(n):
    is_not_prime = False

    if n == 1:
         is_not_prime = True

   # elif n == 2:
        # is_not_prime = False

    for i in range(2,n):
          if n % i == 0:
               is_not_prime = True
               break
          
    if is_not_prime == True:
        print(f'{n}은(는) 소수가 아님')
    else:
         print(f'{n}은 소수임')
     

#Write your code above this line 👆

#Do NOT change any of the code below👇
number = int(input("Check this number: "))
prime_checker(n = number)