/*
 * Copyright 2001, 2002, 2003 David Mansfield and Cobite, Inc.
 * See COPYING file for license information 
 */

#ifndef CVS_DIRECT_H
#define CVS_DIRECT_H

typedef struct _CvsServerCtx CvsServerCtx;

CvsServerCtx * open_cvs_server(char * root);
void close_cvs_server(CvsServerCtx*);
void cvs_rdiff(CvsServerCtx *, const char *, const char *, const char *, const char *, const char *);
void cvs_rupdate(CvsServerCtx *, const char *, const char *, const char *, int, const char *);

#endif /* CVS_DIRECT_H */