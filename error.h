/*
 * defines for the error and message code.
 *
 * Copyright 1993 by Gray Watson and the Antaire Corporation
 *
 * This file is part of the malloc-debug package.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose and without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies, and that
 * the name of Antaire not be used in advertising or publicity pertaining to
 * distribution of the document or software without specific, written prior
 * permission.
 *
 * Gray Watson and the Antaire Corporation make no representations about the
 * suitability of the software described herein for any purpose.  It is
 * provided "as is" without express or implied warranty.
 *
 * The author of the program may be contacted at gray.watson@antaire.com
 *
 * $Id: error.h,v 1.11 1993/07/23 05:38:01 gray Exp $
 */

#ifndef __ERROR_H__
#define __ERROR_H__

#include <stdarg.h>				/* for ... */
#include "malloc_loc.h"				/* for IMPORT */

/*<<<<<<<<<<  The below prototypes are auto-generated by fillproto */

/* global debug flags that are set my MALLOC_DEBUG environ variable */
IMPORT	int		_malloc_debug;

/*
 * message writer with printf like arguments
 */
IMPORT	void	_malloc_message(const char * format, ...);

/*
 * kill the program because of an internal malloc error
 */
IMPORT	void	_malloc_die(void);

/*
 * malloc version of perror of an error in STR
 */
IMPORT	void	_malloc_error(const char * func);

/*<<<<<<<<<<   This is end of the auto-generated output from fillproto. */

#endif /* ! __ERROR_H__ */
