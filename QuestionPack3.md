# Question Pack 3
## What is the difference between a dynamic linked library and a static library?
A dynamic linked library is a library that is linked at runtime, while a static library is linked at compile time. Dynamic linked libraries are loaded into memory when the program is run, while static libraries are compiled into the program itself.

## Describe a logging system with your own words:
A logging system is a system which allows to track the application's behavior, and to persist it in a logfile. This approach is useful and profitable for developers as it allows for better maintenance and debugging of the solution, as it makes the errors stand out making them easier to trace.

## What is a design pattern
A design pattern is a general reusable solution to a commonly occurring problem within a given context in software design. It is not a finished design that can be transformed directly into code. It is a description or template for how to solve a problem that can be used in many different situations.

## Name and describe 2 Design Patterns (except Facade and Adapter)
1. **Singleton**: The Singleton pattern ensures that a class has only one instance and provides a global point of access to it. It is useful when you need to control object creation, limiting the number of instances to just one. An example of this pattern is a logger class.
2. **Observer**: The Observer pattern defines a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically. This pattern is useful when you need to maintain consistency between related objects.