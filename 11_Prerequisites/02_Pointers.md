1. AddressOf operator :->
   syntax-> &'variable';
   returns memory address of the 'variable'.

2. Pointers :-> Special variables those store address of other variable.
   syntax-> int*'pointer' = &'variable';
   'pointer' stores the memory address of 'variable'.

   NOTE:-> Pointer to pointer.
   Syntax-> int**'pointer2' = &'pointer';
   'pointer2' stores the memory address of 'pointer'.

3. Dereferencing operator:-> Provides the value that is available on memory address.
   Syntax-> int value = *'pointer';
   'value' stores the value available on address 'pointer'.

4. Null Pointer:-> Does not store any address.
   Syntax-> int*'pointer' = null;
   Returns garbage value. Can not dereference null pointer.

5. Pass by reference:-> Instead of sending copy of a variable we pass memory address.
   Syntax-> 'type' 'name' ('type'&'variable'){

   }
   Modifies the actual value of 'variable'.

6. Array Pointers:-> Returns the memory address of first variable in an array.
   Syntax-> int arr[] = {1,2,3,4,5};
   cout<<arr;
   Returns the memory address of the variable at index 0.

7. Pointer Arithmetics:->
   Syntax-> int* ptr = &a;
   <!-- cout<<ptr -> 100 -->
   ptr++;
   <!-- cout<<ptr -> 104 -->
   Same goes with --ptr.
   <!-- ptr+1 -> ptr + 1*(size of data type) -->
