def mutate_string(string, position, character):
    s = list(string)
    s[position] = character
    string0 ="".join(s)
    return string0
