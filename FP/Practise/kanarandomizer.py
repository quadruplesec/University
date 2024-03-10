import random
i = 1
romaji_kana_list = ["a", "e", "i", "o", "u", "ka", "ke", "ki", "ko", "ku", "sa", "se", "shi", "so", "su", "ta", "te", "chi", "to", "tsu", "na", "ne", "ni", "no", "nu", "ha", "he", "hi", "ho", "fu", "ma", "me", "mi", "mo", "mu", "ya", "yo", "yu", "ra", "re", "ri", "ro", "ru", "wa", "wo", "n", "ga", "ge", "gu", "gi", "go", "za", "ji", "zu", "ze", "zo", "da", "di", "du", "de", "do", "ba", "bi", "bu", "be", "bo", "pa", "pi", "pu", "pe", "po", "kya", "kyu", "kyo", "sha", "shu", "sho", "cha", "chu", "cho", "nya", "nyu", "nyo", "hya", "hyu", "hyo", "mya", "myu", "myo","rya", "ryu", "ryo", "gya", "gyu", "gyo", "jya", "jyu", "jyo", "dya", "dyu", "dyo", "bya", "byu", "byo", "pya", "pyu", "pyo"]
while i != 0:
    print(random.choice(romaji_kana_list))
    input("Press Enter to repeat...")