/*
 * defines for low level memory management routines
 *
 * Copyright 1991 by the Antaire Corporation
 *
 * $Id: chunk.h,v 1.5 1992/09/04 21:22:52 gray Exp $
 */

#ifndef __CHUNK_H__
#define __CHUNK_H__

#define CHUNK_CHECK_LEVEL	0	/* check depending on level only */
#define CHUNK_CHECK_ALL		1	/* check absolutely everything */

/*<<<<<<<<<<  The below prototypes are auto-generated by fillproto */

/* global debug level number */
IMPORT	int		_malloc_debug_level;

IMPORT	int		_malloc_errno;  /* error number */

IMPORT	int		_malloc_check_on;  /* enabled checking */

IMPORT	int		_calloc_count;  /* # callocs, done in alloc */

/* startup the low level malloc routines */
IMPORT	int	_chunk_startup(void);

/* run extensive tests on the entire heap depending on TYPE */
IMPORT	int	_chunk_heap_check(int type);

/* run extensive tests on PNT */
IMPORT	int	_chunk_pnt_check(char *pnt);

/* return some information associated with PNT, ERROR on error */
IMPORT	int	chunk_read_info(char * pnt, unsigned int * size, char ** file,
				unsigned int * line);

/* get a SIZE chunk of memory for FILE at LINE */
IMPORT	char	*_chunk_malloc(char * file, unsigned int line,
			       unsigned int size);

/* frees PNT from the heap, returns FREE_ERROR or FREE_NOERROR */
IMPORT	int	_chunk_free(char * file, unsigned int line, char * pnt);

/* reallocate a section of memory */
IMPORT	char	*_chunk_realloc(char * file, unsigned int line, char * oldp,
				unsigned int new_size);

/* log present free and used lists */
IMPORT	void	_chunk_list_count(void);

/* log statistics on the heap */
IMPORT	void	_chunk_stats(void);

/* dump the unfreed memory, logs the unfreed information to logger */
IMPORT	void	_chunk_dump_not_freed(void);

/* log an entry for the heap structure */
IMPORT	void	_chunk_log_heap_map(void);

/*<<<<<<<<<<   This is end of the auto-generated output from fillproto. */

#endif /* ! __CHUNK_H__ */
