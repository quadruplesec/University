#if this problem were any good, Saitama would always win by default
def fight(heroes, villain):
    encounter_class = villain["category"]
    capable_heroes = []  
    
    for x in heroes:
        if x["category"] != encounter_class:
            continue
        else:
            capable_heroes.append(x)

    count = 0

    for x in capable_heroes:
        if x["health"] >= villain["health"]:
            x["score"] += 1
            return f"{x['name']} defeated the villain and now has a score of {x['score']}"
        
        else:
            villain["health"] += -(x["health"] / 2)
            if count == len(capable_heroes) - 1:
                return(f"{villain['name']} prevailed with {villain['health']}HP left")

        count += 1
        

print(fight([{'name': 'Genos', 'health': 3000, 'category': 'S', 'score': 0}, {'name': 'Blizzard of Hell', 'health': 1000, 'category': 'B', 'score': 0}, {'name': 'Saitama', 'health': 9001, 'category': 'C', 'score': 0}, {'name': 'King', 'health': 2000, 'category': 'S', 'score': 1}], {'name': 'Hero Killer', 'health': 4000, 'category': 'S'}))
