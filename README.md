*This project has been created as part of the 42 curriculum by bfantine.*

# push_swap

## Description

The **push_swap** project is an algorithmic challenge from the 42 curriculum.  
Push_Swap is a project from the 42 curriculum designed to enhance algorithmic thinking, mastery of data structures, and optimization skills. The goal is to sort a stack of integers in ascending order using a limited set of operations (sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr) while minimizing the number of moves.

The program receives a list of integers as arguments, places them in **stack A**, and sorts them in ascending order using an auxiliary **stack B**.  
Only specific operations (such as swap, push, rotate, and reverse rotate) are allowed.

In this implementation, the sorting strategy is based on the **Radix Sort algorithm**, adapted to work within the constraints of the push_swap rules.

## Instructions
### Compilation

# Instructions
### Compilation
To compile the project, run the following command in the root directory:  
```bash
make
```
Execution

To run the program, use the following syntax:
```bash
./push_swap [numbers...]
```

Example:
```bash
./push_swap 3 2 5 1 4
```
The program will output a sequence of operations that, when applied to the stack, will sort it in ascending order.

Resources

42 Push_Swap PDF
 – Official project subject.
```bash
https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a

https://www.youtube.com/watch?v=wRvipSG4Mmk&t=599s&pp=ygUScHVzaCBzd2FwIHR1dG9yaWFs

https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a

AI was utilized to explore various sorting algorithms, compare their strategies, and provide guidance on structuring the project effectively.

```

# Project Structure
```bash
push_swap/
├── README.md
├── Makefile
├── libft
├── includes/
│ └── push_swap.h
└── srcs/
│ ├── algorithm.c
│ ├── errors.c
│ ├── main.c
│ ├── operations.c
│ └── utils.c
```
