#include <stdbool.h>

#include "acutest.h"
#include "../src/sort.h"

#define SORT(phrase, alphabet) (sort_lexicographically(phrase, alphabet))
#define CHECK(phrase, alphabet) (check_lexicographical_order(phrase, alphabet))

#define STANDARD 	"abcdefghijklmnopqrstuvwxyz"
#define REVERSE		"zyxwvutsrqponmlkjihgfedcba"
#define QWERTY		"qwertyuiopasdfghjklzxcvbnm"

void test_empty_phrase(void)
{
	bool result;

	char phrase[] = "";
	SORT(phrase, STANDARD);
	result = CHECK(phrase, STANDARD);
	TEST_CHECK(result == true);
}

void test_one_char_phrase(void)
{
	bool result;

	char phrase[] = "a";
	SORT(phrase, STANDARD);
	result = CHECK(phrase, STANDARD);
	TEST_CHECK(result == true);

	char phrase[] = "A";
	SORT(phrase, STANDARD);
	result = CHECK(phrase, STANDARD);
	TEST_CHECK(result == true);

	char phrase[] = "z";
	SORT(phrase, REVERSE);
	result = CHECK(phrase, REVERSE);
	TEST_CHECK(result == true);

	char phrase[] = "Z";
	SORT(phrase, QWERTY);
	result = CHECK(phrase, QWERTY);
	TEST_CHECK(result == true);
}

void test_two_char_phrase_no_capital(void)
{
	bool result;

	char phrase[] = "aa";
	SORT(phrase, STANDARD);
	result = CHECK(phrase, STANDARD);
	TEST_CHECK(result == true);
	TEST_MSG("Expected: \"aa\"");
	TEST_MSG("Your output: \"%s\"", phrase);

	char phrase[] = "cg";
	SORT(phrase, QWERTY);
	result = CHECK(phrase, QWERTY);
	TEST_CHECK(result == true);
	TEST_MSG("Expected: \"gc\"");
	TEST_MSG("Your output: \"%s\"", phrase);

	char phrase[] = "dv";
	SORT(phrase, REVERSE);
	result = CHECK(phrase, REVERSE);
	TEST_CHECK(result == true);
	TEST_MSG("Expected: \"vd\"");
	TEST_MSG("Your output: \"%s\"", phrase);
}

void test_two_char_phrase_capital(void)
{
	bool result;

	char phrase[] = "aA";
	SORT(phrase, STANDARD);
	result = CHECK(phrase, STANDARD);
	TEST_CHECK(result == true);
	TEST_MSG("Expected: \"Aa\"");
	TEST_MSG("Your output: \"%s\"", phrase);

	char phrase[] = "ba";
	SORT(phrase, STANDARD);
	result = CHECK(phrase, STANDARD);
	TEST_CHECK(result == true);
	TEST_MSG("Expected: \"ab\"");
	TEST_MSG("Your output: \"%s\"", phrase);

	char phrase[] = "ms";
	SORT(phrase, QWERTY);
	result = CHECK(phrase, QWERTY);
	TEST_CHECK(result == true);
	TEST_MSG("Expected: \"sm\"");
	TEST_MSG("Your output: \"%s\"", phrase);

	char phrase[] = "Lm";
	SORT(phrase, REVERSE);
	result = CHECK(phrase, REVERSE);
	TEST_CHECK(result == true);
	TEST_MSG("Expected: \"mL\"");
	TEST_MSG("Your output: \"%s\"", phrase);
}

void test_many_char_phrase(void)
{
	bool result;

	char phrase[] = "Hello World";
	SORT(phrase, STANDARD);
	result = CHECK(phrase, STANDARD);
	TEST_CHECK(result == true);
	TEST_MSG("Expected: \"deHllloorW\"");
	TEST_MSG("Your output: \"%s\"", phrase);

	char phrase[] = "poiuytrewq";
	SORT(phrase, QWERTY);
	result = CHECK(phrase, QWERTY);
	TEST_CHECK(result == true);
	TEST_MSG("Expected: \"qwertyuiop\"");
	TEST_MSG("Your output: \"%s\"", phrase);
}

TEST_LIST = {
	{"empty_phrase", test_empty_phrase},
	{"one_char_phrase", test_one_char_phrase},
	{"two_char_phrase_no_capital", test_two_char_phrase_no_capital},
	{"two_char_phrase_capital", test_two_char_phrase_capital},
	{"many_char_phrase", test_many_char_phrase},
	{NULL, NULL}
};
