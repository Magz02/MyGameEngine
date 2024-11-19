# Question Pack 4
## What is a precompiled header? Name pros and cons
A precompiled header is a header file that is compiled into an intermediate form that can be reused in multiple translation units. This can speed up the compilation process by reducing the amount of code that needs to be processed. However, precompiled headers can also increase build times if they are not used effectively, as they can lead to unnecessary recompilation of source files.

## Describe the layer of abstraction with your own words:
A layer of abstraction is a way of hiding the implementation details of a system or component and exposing only the necessary interfaces or functionality to the outside world. This allows developers to work at a higher level of abstraction, focusing on the functionality of the system rather than the specific implementation details.

## Name the SOLID principles and describe them briefly
1. **Single Responsibility Principle (SRP)**: A class should have only one reason to change, meaning it should have only one responsibility or job.
2. **Open/Closed Principle (OCP)**: Software entities should be open for extension but closed for modification, meaning they should be easily extended without modifying their existing code.
3. **Liskov Substitution Principle (LSP)**: Objects of a superclass should be replaceable with objects of its subclasses without affecting the correctness of the program.
4. **Interface Segregation Principle (ISP)**: Clients should not be forced to depend on interfaces they do not use, meaning interfaces should be specific to the needs of the client.
5. **Dependency Inversion Principle (DIP)**: High-level modules should not depend on low-level modules, but both should depend on abstractions. Abstractions should not depend on details, but details should depend on abstractions.