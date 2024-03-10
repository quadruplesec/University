from cards import create_deck, deal_hands, choose, player_order
import random

def card_value(card):
    suit, rank = card
    sum = 0
    if rank.isnumeric(): sum += int(rank)
    elif rank == "A": sum += 11
    else: sum += 10

    if suit in ["♠","♣"]:
        sum = sum*2
    return sum

def play(seed_value):
    random.seed(seed_value)
    deck = create_deck(shuffle=True)
    names = "P1 P2 P3 P4".split()
    hands = {n: h for n, h in zip(names, deal_hands(deck))}
    start_player = choose(names)
    turn_order = player_order(names, start=start_player)

    wins = [0,0,0,0]

    while hands[start_player]:
        round_list = []
        for name in turn_order:
            card = choose(hands[name])
            round_list.append(card_value(card))
            hands[name].remove(card)

        round_max = max(round_list)
        for i in range(4):
            if round_list[i] == round_max:
                wins[i] += 1

    max_rounds_won = max(wins)

    winner_list = [a for a in names if wins[turn_order.index(a)] == max_rounds_won]

    return " ".join(winner_list)


