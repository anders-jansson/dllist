# dllist
Double linked list implemented in pure C.

design choises for this implementation:  
1. The list and the structural element in the list and the list is the same data type.  
2. The list (or the head of the list) is part in the list to make implementation of insert and delete smart.  
3. The list is not responsible for deleting the elements in the list. So on deletion a function that destroys the actual element is needed.  
4. The data type stored in the list is a pointer to a void.  
5. The namespace for the list interface is ```_dllist``` appended to each function.  

The data type looks like this:

![alt text](https://github.com/anders-jansson/dllist/blob/master/design/1_cons2box.png "The struct DLL")

And the Empty List:

![alt text](https://github.com/anders-jansson/dllist/blob/master/design/3_empty_list.png "Empty list with next and prev pointers pointing to itself")

A List with three elements look like this:

![alt text](https://github.com/anders-jansson/dllist/blob/master/design/2_list_with_3_elemenents.png "List with 3 elements")

[Read more on the wiki](https://github.com/anders-jansson/dllist/wiki/dllist-introduction)
