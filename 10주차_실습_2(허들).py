#다양한 장애물 뛰어넘기
def turn_right():
    turn_left()
    turn_left()
    turn_left()

def jump_var():
    turn_left()
    while wall_on_right():
        move()
    turn_right()
    while front_is_clear():
        move()
    turn_left()

while not at_goal():
    if wall_in_front():
        jump_var()
    else:
        move()

#미로찾기
def turn_right():
    turn_left()
    turn_left()
    turn_left()
while not at_goal():
    if front_is_clear():
       move()
    if right_is_clear():
        if front_is_clear():
            move()
        else:
            turn_right()
    else:
        turn_left()