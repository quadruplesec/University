def intro():
    print("After a drunken night out with friends, you awaken in a thick, dank forest. A slobbering orc is running towards you.")
    print("A. Grab a nearby rock and throw it at the orc")
    print("B. Lie down and wait to be mauled")
    print("C. Run")
    option = str(input())
    if option in ["A", "a"]:
        return option_rock()
    if option in ["B", "b"]:
        print("Welp, that was quick. You died!")
    if option in ["C", "c"]:
        return option_run()

def option_rock():
    print('The orc is stunned, but regains control. He begins running towards you again.')
    print("A. Run")
    print("B. Throw another rock")
    print("C. Run towards a nearby cave")
    option = str(input())
    if option in ["A", "a"]:
        return option_run()
    if option in ["B", "b"]:
        print("The rock flew well over the orcs head. You missed. You died!")
    if option in ["C", "c"]:
        return option_cave()

def option_cave():
    print("Before you fully enter, you notice a shiny sword on the ground. Do you pick up a sword. Y/N?")
    option = str(input())
    sword = False
    if option in ["Y", "y"]:
        sword = True
    
    print("What do you do next?")
    print("A. Hide in silence")
    print("B. Fight")
    print("C. Run")
    option = str(input())
    if option in ["A", "a"]:
        print("I think orcs can see very well in the dark, right? You died!")
    if option in ["B", "b"]:
        if sword:
            print("As the orc reached out to grab the sword, you pierced the blade into its chest. You survived!")
        else:
            print("You're defenseless. You died!")
    if option in ["C", "c"]:
        print("The orc turns around and sees you running.")
        return option_run()

def option_run():
    print("You run as quickly as possible.")
    print("A. Hide behind boulder")
    print("B. Trapped, so you fight")
    print("C. Run towards an abandoned town")
    option = str(input())
    if option in ["A", "a"]:
        print("You're easily spotted. You died!")
    if option in ["B", "b"]:
        print("You're no match for an orc. You died!")
    if option in ["C", "c"]:
        return option_town()

def option_town():
    print("You notice a purple flower near your foot. Do you pick it up? Y/N")
    option = str(input())
    if option in ["Y", "y"]:
        print("You quickly hold out the purple flower. The orc was looking for love. This got weird, but you survived!")
    if option in ["N", "n"]:
        print("Maybe you should have picked up the flower. You died!")

if __name__ == "__main__":
    intro()
