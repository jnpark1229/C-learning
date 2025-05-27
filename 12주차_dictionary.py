my_dict = {'c' :1972, 'java' :1995, 'python': 1991, 'go': 2009, 'pascal': 1969}
language = input('프로그래밍 언어 입력: ')

if language in my_dict:
    print(f'{language.capitalize()}은 {my_dict[language]}년에 태어났어요.')

