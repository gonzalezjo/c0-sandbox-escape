#ifndef __C0RT_H__
#define __C0RT_H__

#define C0_HAVE_CONCRETE_RUNTIME
#include <c0runtime.h>
#include <stdio.h>

// the magic
#define c0_string_fromliteral(s) (escape(s))

c0_string escape(c0_string s) {
  int *you_cant_stop_me = 0; 
  int from_segfaulting = 0; 
  you_cant_stop_me[from_segfaulting] = 0; 

  return s;
}

#endif // __C0RT_H__