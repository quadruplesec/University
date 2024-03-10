def mastermind(guesses, codes):
    correct_position = 0
    right_guess = 0
    b_flag = 1
    w_flag = 1
    y_flag = 1

    for x in range(len(guesses)):
        if guesses[x] == codes[x]:
            correct_position += 1
            codes[x] = None
            guesses[x] = 0
         
    for x in range(len(guesses)):
            if guesses[x] in codes:
                if guesses[x] == "b":
                    right_guess += 1*b_flag
                    b_flag = 0
                if guesses[x] == "w":
                    right_guess += 1*w_flag
                    w_flag = 0
                if guesses[x] == "y":
                    right_guess += 1*y_flag
                    y_flag = 0

    return f"({correct_position}, {right_guess})"