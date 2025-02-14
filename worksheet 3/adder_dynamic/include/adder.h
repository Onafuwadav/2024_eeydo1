// ============ begin = adder.h ============

// The following two lines prevent adder.h from being included
// more than once in any source (.cpp) file. If this were to happen,
// it would cause problems in the compile process. These #ifndef, #define, and #endif
// commands form an "include guard" and are types of compiler directives.

#ifndef MATHSLIB_ADDER_H
#define MATHSLIB_ADDER_H

// We need to prefix our function names with an additional
// keyword, which is different depending on the operating
// system we are using and whether we are using or creating the library.
// The variable "maths_EXPORTS" must be defined at build time if
// we are building the library, but not if we are using it.

#if defined(WIN32) || defined(_WIN32)
    #ifdef maths_STATIC
    // Don't add any keywords if building a static library
        #define MATHSLIB_API
    #else
        #ifdef maths_EXPORTS
            #define MATHSLIB_API __declspec(dllexport)
        #else
            #define MATHSLIB_API __declspec(dllimport)
        #endif
    #endif
#else
    // MATHSLIB_API is defined as nothing if we're not on Windows
    #define MATHSLIB_API
#endif

// Prototype for the function including additional keyword
MATHSLIB_API int add(int a, int b);

#endif // MATHSLIB_ADDER_H

// ============ end = adder.h ============
