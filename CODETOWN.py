def is_vowel(char):
    vowels = 'AEIOU'
    return char.upper() in vowels

def check_similarity(word1, word2):
    return sum(1 for w1, w2 in zip(word1, word2) if is_vowel(w1) == is_vowel(w2)) == len(word1)

def main():
    test_cases = int(input())
    
    for _ in range(test_cases):
        user_input = input()
        codetown_word = 'CODETOWN'
        
        if check_similarity(user_input, codetown_word):
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    main()
