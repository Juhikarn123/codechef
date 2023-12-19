def process_sequence(sequence_values):
    processed_sequence = [0] * (len(sequence_values) + 1)
    max_value = 0
    result = []

    for i in range(1, len(sequence_values) + 1):
        processed_sequence[i] = sequence_values[i - 1]
        max_value = max(processed_sequence[i], max_value)

    unique_values = set()
    for i in range(1, len(sequence_values) + 1):
        if processed_sequence[i] in unique_values:
            result.append(max_value)
        else:
            result.append(processed_sequence[i])
        unique_values.add(processed_sequence[i])

    return result


def main():
    num_sequences = int(input())

    for _ in range(num_sequences):
        sequence_length = int(input())
        sequence_values = list(map(int, input().split()))

        processed_result = process_sequence(sequence_values)

        print(*processed_result)


if __name__ == "__main__":
    main()
