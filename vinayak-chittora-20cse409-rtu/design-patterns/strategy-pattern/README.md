## Description

Implementation of Strategy Pattern as a Payment Service example using NestJS

## Strategy Pattern in Software Design

### What is the Strategy Pattern?

The **Strategy Pattern** is a behavioral design pattern that allows defining a family of algorithms, encapsulating each one, and making them interchangeable. The pattern lets the algorithm vary independently from clients that use it.

In simpler terms, the Strategy Pattern enables selecting an algorithm at runtime, depending on the situation. You can swap between different strategies (algorithms) without changing the client code that uses them.

### Why Use the Strategy Pattern?

The main reasons to use the Strategy Pattern are:

- **Flexibility**: It allows choosing from multiple algorithms at runtime without modifying the client code.
- **Maintainability**: It promotes clean code by reducing `if-else` or `switch` statements for selecting algorithms, leading to better maintainability.
- **Separation of Concerns**: Each strategy encapsulates specific behavior, keeping the main logic separate from algorithm implementation details.

## How the Strategy Pattern Works

1. **Context**: This is the class that needs an algorithm. It holds a reference to the strategy but does not implement the logic itself.
2. **Strategy Interface**: This defines a common interface that all strategies must implement.
3. **Concrete Strategies**: These are the actual classes that implement different algorithms following the common strategy interface.

The client code decides which strategy to use by passing the desired strategy to the context.

![Diagram](https://media.geeksforgeeks.org/wp-content/uploads/20240209100626/Components-of-Strategy-Design-Pattern-.webp)

Image Source: [GeeksforGeeks - Strategy Design Pattern](https://www.geeksforgeeks.org/strategy-pattern-set-1/)

## Project setup

```bash
$ npm install
```

## Compile and run the project

```bash
# development
$ npm run start

# watch mode
$ npm run start:dev

# production mode
$ npm run start:prod
```

## API Usage Example

You can test the API by sending a POST request using cURL. Below is an example of how to send a payment request:

```bash
curl -X POST http://localhost:3000/payment \
-H "Content-Type: application/json" \
-d '{"method": "paypal", "amount": 100}'
```

output

```bash
Paid 100 using PayPal
```

## Resources

[Strategy Pattern – Design Patterns (ep 1) | LOW LEVEL DESIGN | Techie007 | Sukhad Anand](https://www.youtube.com/watch?v=9whsQw5R0EQ&ab_channel=SukhadAnand)

[Strategy Design Pattern explanation | LLD System Design #1 | Design pattern explanation in Java](https://www.youtube.com/watch?v=u8DttUrXtEw&t=59s&ab_channel=Concept%26%26Coding-byShrayansh)

[Refactoring Guru](https://refactoring.guru/design-patterns/strategy)

[Embracing the Strategy Pattern in NestJS](https://medium.com/@dineshbyte/embracing-the-strategy-pattern-in-nestjs-391715d49c4f)
