# dllist
Double linked list implemented in pure C.

## Data type
The defined data type for a list and an element in the list are the same. So the head of the list will be able to be "part" of the list. It is not actually part of the list in the sence that it contains an element and the pointer in the data part should be NULL.

The data type is a struct that we call `struct DLL` that will contain a pointer to previous element, a pointer to data and a pointer to next element. It will look like this:
```C
struct DLL {
    struct DLL* prev;
    void*       data;
    struct DLL* next;
};
```
It will look like this if we draw an image:

![alt text](https://github.com/anders-jansson/dllist/blob/master/design/1_cons2box.png "The struct DLL")

So a list with 3 elements (that is not shown here) will look like this:

![alt text](https://github.com/anders-jansson/dllist/blob/master/design/2_list_with_3_elemenents.png "List with 3 elements")

## Interface
In C there is no namespace features so the functions in an abstract data type (ADT) is appended with ```_dllist``` so we dont mix them up with other functions.
