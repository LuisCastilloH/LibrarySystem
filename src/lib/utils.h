#ifndef FUNCIONES_DOT_H
#define FUNCIONES_DOT_H
/*
 *
 *The previous is an include guard. It prevents the file from being
 *included twice.
 *
 */

#include <cstdio>
#include <cstdlib>

#define USAGE_FMT "%s [-v|-h]\n"\
                  "TBD..."\

void
usage (const char *progname, int opt)
{
    fprintf(stderr, USAGE_FMT, progname);
    exit(EXIT_FAILURE);
}

#endif