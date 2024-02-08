#include <stdio.h>
#include <stdarg.h>
#include "log.h"

void error(const char* format, ...) {
    va_list ap;
    va_start(ap, format);
    fprintf(stderr, T_ERROR": ");
    vfprintf(stderr, format, ap);
    va_end(ap);
}

void error_n(const char* format, ...) {
    va_list ap;
    va_start(ap, format);
    vfprintf(stderr, format, ap);
    va_end(ap);
}
