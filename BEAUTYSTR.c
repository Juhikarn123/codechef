#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CUSTOM_MOD 1000000007

long long calculateResult(char* input_str, int str_length) {
    int char_freq[256] = {0};
    for (int i = 0; i < str_length; ++i) {
        char_freq[input_str[i]]++;
    }

    long long result_product = 1;
    for (int char_index = 0; char_index < 256; ++char_index) {
        if (char_freq[char_index] > 0) {
            result_product = (char_freq[char_index] + 1) * result_product % CUSTOM_MOD;
        }
    }

    return (result_product - 1 + CUSTOM_MOD) % CUSTOM_MOD;
}

int main() {
    int num_cases;
    scanf("%d", &num_cases);

    for (int case_index = 0; case_index < num_cases; ++case_index) {
        int str_length;
        scanf("%d", &str_length);

        char input_str[str_length + 1];
        scanf("%s", input_str);

        long long result = calculateResult(input_str, str_length);

        printf("%lld\n", result);
    }

    return 0;
}
