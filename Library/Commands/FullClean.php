<?php

/*
 +--------------------------------------------------------------------------+
 | Zephir Language                                                          |
 +--------------------------------------------------------------------------+
 | Copyright (c) 2013-2014 Zephir Team and contributors                     |
 +--------------------------------------------------------------------------+
 | This source file is subject the MIT license, that is bundled with        |
 | this package in the file LICENSE, and is available through the           |
 | world-wide-web at the following url:                                     |
 | http://zephir-lang.com/license.html                                      |
 |                                                                          |
 | If you did not receive a copy of the MIT license and are unable          |
 | to obtain it through the world-wide-web, please send a note to           |
 | license@zephir-lang.com so we can mail you a copy immediately.           |
 +--------------------------------------------------------------------------+
*/

/**
 * CommandFullClean
 *
 * Cleans any object files created by the extension (including files generated by phpize)
 */
class CommandFullClean extends CommandAbstract
{

	/**
	 * Command provided by this command
	 *
	 * @return string
	 */
	public function getCommand()
	{
		return 'fullclean';
	}

	/**
	 * Command usage
	 *
	 * @return string
	 */
	public function getUsage()
	{
		return 'fullclean';
	}

	/**
	 * @return string
	 */
	public function getDescription()
	{
		return 'Cleans the generated object files in compilation';
	}

}
