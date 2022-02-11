#include <stdarg.h>
#include <stdint.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "func.h"

static void test_zero_x(void **state)
{
    assert_int_equal(func(0, 1), -1);
}

static void test_zero_y(void **state)
{
    assert_int_equal(func(1, 0), -2);

}

static void test_value_xy(void **state)
{
    assert_int_equal(func(5, 5), 15);
}

int main(void)
{
        const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_zero_x),
        cmocka_unit_test(test_zero_y),
        cmocka_unit_test(test_value_xy)
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}
