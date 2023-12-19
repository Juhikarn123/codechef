# cook your dish here
from collections import defaultdict

def get_integer_input():
    return int(input())

def get_string_input():
    return input()

def get_integer_list_input():
    return list(map(int, input().split()))

def get_string_list_input():
    return list(map(str, input().split()))

def get_float_list_input():
    return list(map(float, input().split()))

def solve_test_case():
    num_cases = get_integer_input()

    for _ in range(num_cases):
        array_length = get_integer_input()
        input_string = list(get_string_input())
        result = 1
        char_count = defaultdict(int)

        for char in input_string:
            char_count[char] += 1

        for char, count in char_count.items():
            result = (count + 1) * result % int(1e9 + 7)

        result = (result - 1 + int(1e9 + 7)) % int(1e9 + 7)
        result = (result + int(1e9 + 7)) % int(1e9 + 7)
        result = result % int(1e9 + 7)

        print(result)

# Call the function to run the program
solve_test_case()
