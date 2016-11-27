#ifndef DLLIST
#define DLLIST

/* --- Defintions of datatypes --------------------------------------------- */

struct DLL {
    struct dll* prev;
    void*       data;
    struct dll* next;
};


/* --- Creators and destructors of double linked lists --------------------- */

struct DLL*  new_dllist     ();
void         destroy_dllist (struct DLL* list, void (*fn_destroy_val)(void *));
void         clean_dllist   (struct DLL* list, void (*fn_destroy_val)(void *));


/* --- Manupilators of double linked lists --------------------------------- */

struct DLL*  insert_dllist  (struct DLL* list, struct DLL* after, void* data);
struct DLL*  append_dllist  (struct DLL* list, void* data);
struct DLL*  before_dllist  (struct DLL* list, struct DLL* before, void* data);
struct DLL*  prepend_dllist (struct DLL* list, void* data);
void*        remove_dllist  (struct DLL* list, struct DLL* elem);


/* --- Inspectors of double linked lists ----------------------------------- */

bool         empty_dllist   (struct DLL* list);
int          size_dllist    (struct DLL* list);
struct DLL*  next_dllist    (struct DLL* list, struct DLL* elem);
struct DLL*  prev_dllist    (struct DLL* list, struct DLL* elem);


/* --- Higher order functions of double linked lists ----------------------- */

void         map_dllist     (struct DLL* list, void (*fn)(void *val));
struct DLL*  filter_dllist  (struct DLL* list, bool (*fn)(void *val));
struct DLL*  find_dllist    (struct DLL* list, bool (*fn)(void *val));
void*        reduce_dllist  (struct DLL* list,
                             void* (*fn)(void *val, void *reduct),
                             void* initial);

#endif
