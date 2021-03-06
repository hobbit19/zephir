
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


/**
 * Control Flow
 */
ZEPHIR_INIT_CLASS(Test_Assign) {

	ZEPHIR_REGISTER_CLASS(Test, Assign, test, assign, test_assign_method_entry, 0);

	zend_declare_property_null(test_assign_ce, SL("testVar"), ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Test_Assign, getTestVar) {


	RETURN_MEMBER(this_ptr, "testVar");

}

PHP_METHOD(Test_Assign, testAssign1) {

	int a;


	a = 1;
	RETURN_LONG(a);

}

PHP_METHOD(Test_Assign, testAssign2) {

	int a;


	a = 1;
	RETURN_LONG(a);

}

PHP_METHOD(Test_Assign, testAssign3) {

	int a;


	a = 0;
	RETURN_LONG(a);

}

PHP_METHOD(Test_Assign, testAssign4) {

	int a;


	a = 0;
	RETURN_LONG(a);

}

PHP_METHOD(Test_Assign, testAssign5) {

	int a;


	a = (long) (2.0);
	RETURN_LONG(a);

}

PHP_METHOD(Test_Assign, testAssign6) {

	zend_bool a;


	a = (1) ? 1 : 0;
	RETURN_BOOL(a);

}

PHP_METHOD(Test_Assign, testAssign7) {

	zend_bool a;


	a = (1.0) ? 1 : 0;
	RETURN_BOOL(a);

}

PHP_METHOD(Test_Assign, testAssign8) {

	zend_bool a;


	a = 1;
	RETURN_BOOL(a);

}

PHP_METHOD(Test_Assign, testAssign9) {

	zend_bool a;


	a = 0;
	RETURN_BOOL(a);

}

PHP_METHOD(Test_Assign, testAssign10) {

	zend_bool a;


	a = 0;
	RETURN_BOOL(a);

}

PHP_METHOD(Test_Assign, testAssign11) {

	double a;


	a = 0.0;
	RETURN_DOUBLE(a);

}

PHP_METHOD(Test_Assign, testAssign12) {

	double a;


	a = (double) (4);
	RETURN_DOUBLE(a);

}

PHP_METHOD(Test_Assign, testAssign13) {

	double a;


	a = 0;
	RETURN_DOUBLE(a);

}

PHP_METHOD(Test_Assign, testAssign14) {

	double a;


	a = 1;
	RETURN_DOUBLE(a);

}

PHP_METHOD(Test_Assign, testAssign15) {

	double a;


	a = 5.0;
	RETURN_DOUBLE(a);

}

PHP_METHOD(Test_Assign, testAssign16) {

	int a;


	a = 1;
	RETURN_LONG(a);

}

PHP_METHOD(Test_Assign, testAssign17) {

	double a;


	a = 1.0;
	RETURN_DOUBLE(a);

}

PHP_METHOD(Test_Assign, testAssign18) {

	zend_bool a;


	a = 0;
	RETURN_BOOL(a);

}

PHP_METHOD(Test_Assign, testAssign19) {

	zend_bool a;


	a = 1;
	RETURN_BOOL(a);

}

PHP_METHOD(Test_Assign, testAssign20) {

	zval a;


	ZEPHIR_SINIT_VAR(a);
	ZVAL_NULL(&a);
	RETURN_LCTORW(a);

}

PHP_METHOD(Test_Assign, testAssign21) {

	int a, b;


	a = 1;
	b = a;
	RETURN_LONG(b);

}

PHP_METHOD(Test_Assign, testAssign22) {

	double a, b;


	a = 1.0;
	b = a;
	RETURN_DOUBLE(b);

}

PHP_METHOD(Test_Assign, testAssign23) {

	zend_bool a, b;


	a = 1;
	b = a;
	RETURN_BOOL(b);

}

PHP_METHOD(Test_Assign, testAssign24) {

	double b;
	int a;


	a = 1;
	b = (double) a;
	RETURN_DOUBLE(b);

}

PHP_METHOD(Test_Assign, testAssign25) {

	double b;
	int a;


	a = 1;
	b = (double) a;
	RETURN_DOUBLE(b);

}

PHP_METHOD(Test_Assign, testAssign26) {

	double a;
	int b;


	a = (double) (1);
	b = (long) a;
	RETURN_LONG(b);

}

PHP_METHOD(Test_Assign, testAssign27) {

	double a;
	int b;


	b = 1;
	a = (double) b;
	RETURN_DOUBLE(a);

}

PHP_METHOD(Test_Assign, testAssign28) {

	zend_bool a;
	int b;


	b = 1;
	a = (b) ? 1 : 0;
	RETURN_BOOL(a);

}

PHP_METHOD(Test_Assign, testAssign29) {

	zend_bool a;
	double b;


	b = 1.0;
	a = (b) ? 1 : 0;
	RETURN_BOOL(a);

}

PHP_METHOD(Test_Assign, testAssign30) {

	int a;
	zend_bool b;


	b = 0;
	a = b;
	RETURN_LONG(a);

}

PHP_METHOD(Test_Assign, testAssign31) {

	double a;
	zend_bool b;


	b = 0;
	a = (double) b;
	RETURN_DOUBLE(a);

}

PHP_METHOD(Test_Assign, testAssign32) {

	zend_bool b, a;


	b = 0;
	a = b;
	RETURN_BOOL(a);

}

PHP_METHOD(Test_Assign, testAssign33) {

	zend_bool b, a;


	b = 0;
	a = b;
	RETURN_BOOL(a);

}

PHP_METHOD(Test_Assign, testAssign34) {

	zend_bool a;
	int b;


	b = 0;
	a = (b) ? 1 : 0;
	RETURN_BOOL(a);

}

PHP_METHOD(Test_Assign, testAssign35) {

	zend_bool a;
	double b;


	b = 0;
	a = (b) ? 1 : 0;
	RETURN_BOOL(a);

}

PHP_METHOD(Test_Assign, testAssign36) {

	zend_bool b, a;


	b = 0;
	a = b;
	RETURN_BOOL(a);

}

PHP_METHOD(Test_Assign, testPropertyIncr1) {

	zval *_0;


	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(_0, 1);
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	zephir_increment(_0);
	RETURN_MEMBER(this_ptr, "testVar");

}

PHP_METHOD(Test_Assign, testPropertyAddAssign1) {

	zval *_0, *_1;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(_0, 0);
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_LONG(_1, 2);
	ZEPHIR_ADD_ASSIGN(_0, _1)
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	RETURN_MM_MEMBER(this_ptr, "testVar");

}

PHP_METHOD(Test_Assign, testPropertyAddAssign2) {

	zval *_0, *_1;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(_0, 1);
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_LONG(_1, 2);
	ZEPHIR_ADD_ASSIGN(_0, _1)
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	RETURN_MM_MEMBER(this_ptr, "testVar");

}

PHP_METHOD(Test_Assign, testPropertyAssignValuePlus1) {

	zval *_0, *_1;


	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(_0, 1);
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("testVar"), PH_NOISY_CC);
	ZEPHIR_INIT_ZVAL_NREF(_1);
	ZVAL_LONG(_1, (zephir_get_numberval(_0) + 1));
	zephir_update_property_this(this_ptr, SL("testVar"), _1 TSRMLS_CC);
	RETURN_MEMBER(this_ptr, "testVar");

}

PHP_METHOD(Test_Assign, testPropertyDecr) {

	zval *_0;


	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(_0, 2);
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	zephir_decrement(_0);
	RETURN_MEMBER(this_ptr, "testVar");

}

PHP_METHOD(Test_Assign, testPropertySubAssign1) {

	zval *_0, *_1;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(_0, 0);
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_LONG(_1, 2);
	ZEPHIR_SUB_ASSIGN(_0, _1)
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	RETURN_MM_MEMBER(this_ptr, "testVar");

}

PHP_METHOD(Test_Assign, testPropertySubAssign2) {

	zval *_0, *_1;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(_0, 1);
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_LONG(_1, 2);
	ZEPHIR_SUB_ASSIGN(_0, _1)
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	RETURN_MM_MEMBER(this_ptr, "testVar");

}

PHP_METHOD(Test_Assign, testPropertyMulAssign1) {

	zval *_0, *_1;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(_0, 1);
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_LONG(_1, 2);
	ZEPHIR_MUL_ASSIGN(_0, _1)
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	RETURN_MM_MEMBER(this_ptr, "testVar");

}

PHP_METHOD(Test_Assign, testPropertyMulAssign2) {

	zval *_0, *_1;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(_0, 1);
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_LONG(_1, 3);
	ZEPHIR_MUL_ASSIGN(_0, _1)
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	RETURN_MM_MEMBER(this_ptr, "testVar");

}

PHP_METHOD(Test_Assign, testPropertyAssignStringConcat) {

	zval *_0;


	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_STRING(_0, "test", 1);
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	zephir_concat_self_str(&_0, " string", sizeof(" string")-1 TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("testVar"), _0 TSRMLS_CC);
	RETURN_MEMBER(this_ptr, "testVar");

}

