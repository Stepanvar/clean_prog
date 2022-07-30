/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "./test.check" instead.
 */

#include <check.h>

#line 1 "./test.check"
#include "../src/libft.h"
START_TEST(chartest)
{
#line 3
	fail_unless(ft_putchar('@') == '@');
	fail_unless(ft_putchar('#') == '#');
	fail_unless(ft_putchar(-1) == 255);
}
END_TEST

START_TEST(alphabettest)
{
#line 7
	fail_unless(ft_print_alphabet() == 27);
}
END_TEST

START_TEST(rndnum)
{
#line 9
	fail_unless(ft_gen_rnd_nums(1, 1)[0] == 0);
	fail_unless(ft_gen_rnd_nums(0, 1) == NULL);
}
END_TEST

START_TEST(atoui)
{
#line 12
	fail_unless(ft_atoui("2") == 2);
	fail_unless(ft_atoui("246") == 246);
	fail_unless(ft_atoui("58700") == 58700);
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, chartest);
    tcase_add_test(tc1_1, alphabettest);
    tcase_add_test(tc1_1, rndnum);
    tcase_add_test(tc1_1, atoui);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}