# dllist
Double linked list implemented in pure C.

## datatype
The defined data type for a list and an element in the list are the same. So the head of the list will be able to be "part" of the list. It is not actually part of the list in the sence that it contains an element and the pointer in the data part should be NULL.

The data type is a struct that we call `struct DLL` that will contain a pointer to previous element, a pointer to data and a pointer to next element. It will look like this:
```C
struct DLL {
    struct DLL* prev;
    void*       data;
    struct DLL* next;
};
```

