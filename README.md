# Exercises - Exception Handling 
## Exception Handling in C++

- Exceptions are run-time anomalies that a program encounters during its execution. 
    - There are two types of exceptions: 
        1. Synchronous
        2. b)Asynchronous
- (Ex:which are beyond the program’s control, Disc failure etc).
- C++ provides following specialized keywords for this purpose.
- try: represents a block of code that can throw an exception.
- catch: represents a block of code that is executed when a particular exception is thrown.
- throw: Used to throw an exception. Also used to list the exceptions that a function throws, but doesn’t handle itself.


## Why Exception Handling?
Following are main advantages of exception handling over traditional error handling.
1. Separation of Error Handling code from Normal Code
2. Functions/Methods can handle any exceptions: A function can throw many exceptions, but may choose to handle some of them. The other exceptions which are thrown, but not caught can be handled by C++ exception handling.
     
      In C++, a function can specify the exceptions that it throws using the throw keyword. The caller of this function must handle the exception in some way (either by specifying it again or catching it)

3.Grouping of Error Types: In C++, both basic types and objects can be thrown as exception. We can create a hierarchy of exception objects, group exceptions in namespaces or classes, categorize them according to types.



### Exercises:
- [Exercise 01](https://github.com/kamrankb/FastAP/tree/exception-handling/Exercise01)
- [Exercise 02](https://github.com/kamrankb/FastAP/tree/exception-handling/Exercise02)
- [Exercise 03](https://github.com/kamrankb/FastAP/tree/exception-handling/Exercise03)
- [Exercise 04](https://github.com/kamrankb/FastAP/tree/exception-handling/Exercise04)
- [Exercise 05](https://github.com/kamrankb/FastAP/tree/exception-handling/Exercise05)
- [Exercise 06](https://github.com/kamrankb/FastAP/tree/exception-handling/Exercise06)
- [Exercise 07](https://github.com/kamrankb/FastAP/tree/exception-handling/Exercise07)
- [Exercise 08](https://github.com/kamrankb/FastAP/tree/exception-handling/Exercise08)
- [Exercise 09](https://github.com/kamrankb/FastAP/tree/exception-handling/Exercise09)

