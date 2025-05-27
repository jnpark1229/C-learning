alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

direction = input("'encode'를 입력하면 암호화, 'decode'를 입력하면 복호화를 진행합니다:\n")
text = input("메시지를 입력하세요:\n").lower()
shift = int(input("이동시킬 숫자를 입력하세요:\n"))

# #TODO-1-1: encode() 함수의 내부를 구현하시오.
# #e.g.
# #plain_text = "hello"
# #shift = 5
# #cipher_text = "mjqqt"

'''def encode(plain_text, shift_amount):
  #sol 1)
  cipher_text =''
  for letter in plain_text:
    pos = alphabet.index(letter)
    new_pos = pos + shift_amount
    cipher_text += alphabet[new_pos]
  return cipher_text
  
  #sol 2)
  cipher_text=[]
  for letter in plain_text:
    pos = alphabet.index(letter)
    new_pos = pos + shift_amount
    cipher_text.append(alphabet[new_pos])
  return "".join(cipher_text)
'''

# #TODO-1-2: encode() 함수를 호출하여 암호화된 메시지를 출력하고 변수로 저장하시오.
# #e.g. print output: "암호화된 메시지는 mjqqt 입니다."

'''# encoded_text = encode(text, shift)
# print(f'암호화된 메세지는 {encoded_text}')
'''

# #TODO-2-1: decode() 함수의 내부를 구현하시오. 

# #e.g.
# #cipher_text = "mjqqt"
# #shift = 5
# #plain_text = "hello"

'''def decode(ciper_text, shift_amount):
  plain_text = ""
  for letter in ciper_text:
    pos = alphabet.index(letter)
    new_pos = pos - shift_amount
    plain_text += alphabet[new_pos]
  return plain_text'''
  

# #TODO-2-2: decode() 함수를 호출하여 저장된 암호화된 메시지를 복구하고 복구된 메시지를 출력하시오.
# #e.g. print output: "복구된 메시지는 hello 입니다."

'''# decoded_text = decode(encoded_text,shift)
# print(f'복구된 메세지는 {decoded_text}입니다.')'''

#TODO-3-1: encode와 decode 기능을 통합한 함수를 구현하시오.
def caesar_cipher(start_text, shift_amount, mode):
  end_text = ""
  if mode == 'decode':
    shift_amount *= -1
  for letter in start_text:
   ori_inx = alphabet.index(letter)
   new_inx = ori_inx + shift_amount
   end_text += alphabet[new_inx]
  return end_text

#TODO-3-2: caesar_cipher() 함수를 호출하여 위의 1-2, 2-2와 같은 출력이 나오도록 하시오.
if direction != 'encode' or direction != 'decode':
  print("encode 또는 decode를 입력하세요")
result = caesar_cipher(text, shift, direction)

if direction =='decode':
  print(f"복구된 메세지는 {result} 입니다.")
elif direction == 'encode' :
  print(f"암호화된 메세지는 {result} 입니다.")