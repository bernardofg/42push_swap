# Push_Swap (by bfantine)

Push_Swap is a 42 curriculum project that sorts a stack of integers using a restricted set of operations and aims to minimize the total number of moves.

## Summary
- Input: a list of integers (via CLI arguments).
- Output: a sequence of operations (sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr) printed to stdout that will sort the numbers in ascending order when applied to the stack.
- Approach: values are indexed by relative order; a chunk-based algorithm (Turkish Sort–inspired) is used for medium/large inputs and optimized routines handle small stacks (2–5 elements) to minimize moves.

## Supported operations
- swap: sa, sb, ss
- push: pa, pb
- rotate: ra, rb, rr
- reverse rotate: rra, rrb, rrr

## Key behaviors and constraints
- Input validation typically rejects non-numeric tokens, integers out of 32-bit signed range, and duplicate values.
- The program prints nothing else to stdout besides the operations sequence (no debug prints) — this is required for evaluation.
- The project is implemented in C and follows 42 coding norms.

## Build
From the repository root:
```bash
make
```
This produces the executable `push_swap`.

## Usage
```bash
./push_swap 3 2 5 1 4
```
Example output (one possible valid output):
```
pb
pb
sa
pa
pa
```
(Operations vary depending on algorithm decisions — the output must, when applied, result in a sorted stack.)

## Repository layout
- push_swap.c                — program entry point
- Makefile                   — build rules
- include/                   — project headers
  - operations.h
  - push_swap.h
  - stack.h
  - utils.h
- src/
  - algorithm/
    - algorithm_utils.c
    - big_sorts.c
    - indexing.c
    - small_sorts.c
  - operations/
    - push.c
    - reverse.c
    - rotate.c
    - swap.c
  - parsing/
    - error_checker.c
    - ft_atol.c
    - parse.c
  - stack/
    - stack_init.c
    - stack_utils.c
  - utils/
    - free_split.c
    - ft_split.c
    - ft_strlcpy.c

## Testing and debugging
- Test with small and large inputs to evaluate produced moves.
- Optionally run under valgrind to check for memory leaks:
```bash
valgrind --leak-check=full ./push_swap 4 2 3 1
```

## Notes
- This README is intended to reflect the repository structure and intended behavior. For precise implementation details, check the headers in `include/` and the source files in `src/`.
- If you want additional sections (detailed algorithm explanation, complexity analysis, benchmarking results, sample test scripts), tell me which you'd prefer and I will add them.

## License & author
- Author: bfantine (42 curriculum)
- No explicit license file included; add one if you want to specify reuse terms.
