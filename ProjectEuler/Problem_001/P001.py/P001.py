def P001():
    result = 0

    # Add multiple of three.
    for count in range(1, int(1000/3)+1):
        result += (3*count)

        # Add multiple of five that is not a multiple of three.
        if (count * 5 < 1000) and ((count * 5) % 3 is not 0):
            result += (count * 5)
    
    print(result)


if __name__ == '__main__':
    P001()

""" EXPLANATION:
Notice that this is not the only solution to the problem and various approachs exist.
It is highly encouraged to try out different methods and use this as a reference instead.

    [LINE 4]
    Multiples of 3 gives much more numbers (1000/3 = 333.3) than multiples of 5 (1000/5 = 200).
    Because of this, it is convenient to check the first condition whether the number is multiple of three.

    [LINE 9]
    Later checks for multiple of 5 but since the statement is nested, duplicated sum must be ignored, thus having additional condition.
"""