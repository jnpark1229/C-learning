# 랜덤 선택을 위해 random 모듈을 가져옵니다
import random

# hangman_art.py에서 logo와 stages를 가져옵니다
from hangman_art import logo
from hangman_art import stages

# TODO-1: 게임 시작 시 logo를 출력합니다.
print(logo)

# hangman_words에서 단어 목록을 가져옵니다
from hangman_words import word_list

# TODO-2: word_list에서 무작위 단어를 선택합니다.
index=random.randint(0, len(word_list)-1)
chosen_word = word_list[index]

# 디버깅을 위해 선택된 단어를 출력합니다
print(f'디버깅용으로만 알려주자면, 답은 {chosen_word}야.')

# 화면에 표시할 빈 리스트를 초기화합니다
display = []

# TODO-3: 선택된 단어의 글자 수만큼 '_'를 리스트에 추가합니다.
for i in range((len(chosen_word))):
  display.append('_') # == display += '_
print(display)

# 목숨을 6으로 설정합니다
lives = 6

# 메인 게임 루프 시작
end_of_game = False
while not end_of_game:
    # TODO-4: 사용자로부터 추측할 글자를 입력받습니다.
    guess = input("어떤 글자를 추측하시겠습니까: ").lower()

    # TODO-*: 사용자가 이미 추측한 글자를 입력했으면,
    #         해당 글자를 보여주고 이미 추측했음을 알립니다.
    if guess in display:
      print(f"{guess} (은) 는 이미 추측되었습니다.")
      lives-=1



    # TODO-5-1: 추측한 글자를 선택된 단어의 각 글자와 비교하여,
    #            일치하면 display에 해당 글자를 저장합니다.
    #chosen_word = apple
    #guess = p
    #display = ['_','_','_','_','_']
    for i in range(len(chosen_word)):
      if guess == chosen_word[i]:
          display[i] = guess




    # TODO-5-2: 추측한 글자가 단어에 없으면 목숨을 1 줄입니다.
    #           목숨이 0이 되면 게임 오버 메시지를 출력합니다.
    if guess not in chosen_word:
      lives-=1
    
    if lives == 0:
      print(stages[0])
      print("GAME OVER")
      break
          

    # 현재 상태를 출력합니다 (join()으로 리스트를 문자열로 변환).
    print(' '.join(display))

    # TODO-6: display에 '_'가 남아있지 않으면 모든 글자를 맞춘 것이므로 승리 메시지를 출력합니다.
    if '_' not in display:
      print("WIN")
      break


    # hangman_art.py의 stages에서 현재 목숨 수에 해당하는 단계를 출력합니다.
    print(stages[lives])
