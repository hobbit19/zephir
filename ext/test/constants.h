
extern zend_class_entry *test_constants_ce;

ZEPHIR_INIT_CLASS(Test_Constants);

PHP_METHOD(Test_Constants, testReadConstant);
PHP_METHOD(Test_Constants, testReadClassConstant1);
PHP_METHOD(Test_Constants, testReadClassConstant2);
PHP_METHOD(Test_Constants, testReadClassConstant3);
PHP_METHOD(Test_Constants, testPHPVersionEnvConstant);
PHP_METHOD(Test_Constants, testClassMagicConstant);
PHP_METHOD(Test_Constants, testMethodMagicConstant);
PHP_METHOD(Test_Constants, testFunctionMagicConstant);
PHP_METHOD(Test_Constants, testNamespaceMagicConstant);
PHP_METHOD(Test_Constants, testDirConstant);
PHP_METHOD(Test_Constants, testPHPVersionEnvConstantInExpValue);

ZEPHIR_INIT_FUNCS(test_constants_method_entry) {
	PHP_ME(Test_Constants, testReadConstant, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Constants, testReadClassConstant1, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Constants, testReadClassConstant2, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Constants, testReadClassConstant3, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Constants, testPHPVersionEnvConstant, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Constants, testClassMagicConstant, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Constants, testMethodMagicConstant, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Constants, testFunctionMagicConstant, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Constants, testNamespaceMagicConstant, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Constants, testDirConstant, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Constants, testPHPVersionEnvConstantInExpValue, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
