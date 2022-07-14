#include <check.h>

#include "../src/sum.h"
#
START_TEST(sum2test)
{
	fail_unless(sum(3, 3) == 6);
    fail_unless(sum(40, 20) == 60);
    ck_assert_int_eq(sum(40, 20), 60);
}
END_TEST
START_TEST(sum1test)
{
    fail_unless(sum(50, 100) == 150);
}
END_TEST
int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, sum2test);
    tcase_add_test(tc1_1, sum1test);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : nf;
}
