def row_maker(board):
    board = board.split("\n")
    return [list(x) for x in board]

def collumn_maker(board):
    board = row_maker(board)
    ret_list = []
    for x in range(3):
        l = []
        for y in range(3):
            l.append(board[y][x])
        ret_list.append(l)
    return ret_list

def diagonal_maker(board):
    board = row_maker(board)
    diag1 = [board[0][0], board[1][1], board[2][2]]
    diag2 = [board[0][2], board[1][1], board[2][0]]
    return [diag1,diag2]

def pos_translator(atuple):
    x_dict = {0:"A", 1:"B", 2:"C"}
    x,y=atuple
    return (x_dict[x] + str(y+1))

        
def tic_tac_toe(board, player):
    board_rows = row_maker(board)
    board_collumns = collumn_maker(board)
    board_diags = diagonal_maker(board)

    #these dictionaries exist because i was too lazy to change my method :)
    col_2_board = {"A1":"A1", "A2":"B1", "A3":"C1", "B1":"A2", "B2":"B2", "B3":"C2", "C1":"A3", "C2":"B3", "C3":"C3"}
    diag_2_board = {"A1":"A1", "A2":"B2", "A3":"C3", "B1":"A3", "B2":"B2", "B3":"C1"}

    if player == "x":
        player_not = "o"
    else:
        player_not = "x"
    
    #check rows:
    for rn, row in enumerate(board_rows):
        if row.count(player) == 2 and row.count(player_not) == 0:
            return pos_translator((rn, row.index(" ")))
        
    #check collumns:
    for rn, collumn in enumerate(board_collumns):
        if collumn.count(player) == 2 and collumn.count(player_not) == 0:
            return col_2_board[pos_translator((rn, collumn.index(" ")))]
        
    #check diagonals:
    for rn, diag in enumerate(board_diags):
        if diag.count(player) == 2 and diag.count(player_not) == 0:
            return diag_2_board[pos_translator((rn, diag.index(" ")))]
