#include <iostream>

int main() {
	int result = 0;

	// Add multiple of three.
	for (int count = 1; count < (1000 / 3) + 1; count++) {
		result += (3 * count);

		// Add multiple of five that is not a multiple of three.
		if ((count * 5 < 1000) && ((count * 5) % 3 != 0)) {
			result += (count * 5);
		}
	}

	std::cout << result << std::endl;

	return 0;
}


/* EXPLANATION:
Notice that this is not the only solution to the problem and various approachs exist.
It is highly encouraged to try out different methods and use this as a reference instead.

	[LINE 5]
	Multiples of 3 gives much more numbers (1000/3 = 333.3) than multiples of 5 (1000/5 = 200).
	Because of this, it is convenient to check the first condition whether the number is multiple of three.

	[LINE 8]
	Later checks for multiple of 5 but since the statement is nested, duplicated sum must be ignored, thus having additional condition.
*/