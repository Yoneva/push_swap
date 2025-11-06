# Push Swap

An efficient sorting algorithm implementation using two stacks and a limited set of operations.

## Description

Push Swap is a 42 School project that challenges you to sort a stack of integers using the smallest number of operations. The program must sort numbers using only two stacks (A and B) and a specific set of operations. The goal is to implement an efficient sorting algorithm that minimizes the number of moves.

This implementation uses an optimized algorithm that handles different input sizes with varying strategies, achieving excellent performance across all test cases.

## Features

- ✅ Sorts any list of integers efficiently
- ✅ Handles edge cases (duplicates, INT_MAX/MIN, invalid input)
- ✅ Optimized algorithms for different input sizes (3, 4, 5, and 100+ numbers)
- ✅ Bonus checker program to verify sorting operations
- ✅ Input validation and error handling
- ✅ Works with single or multiple argument formats

## Available Operations

| Operation | Description |
|-----------|-------------|
| `sa` | Swap first two elements of stack A |
| `sb` | Swap first two elements of stack B |
| `ss` | `sa` and `sb` simultaneously |
| `pa` | Push first element of B to A |
| `pb` | Push first element of A to B |
| `ra` | Rotate stack A (shift up all elements) |
| `rb` | Rotate stack B (shift up all elements) |
| `rr` | `ra` and `rb` simultaneously |
| `rra` | Reverse rotate stack A (shift down all elements) |
| `rrb` | Reverse rotate stack B (shift down all elements) |
| `rrr` | `rra` and `rrb` simultaneously |

## Installation

Clone the repository:
```bash
git clone https://github.com/Yoneva/push_swap.git
cd push_swap
```

## Compilation

### Mandatory Part

Compile the push_swap program:
```bash
make
```

This creates the `push_swap` executable.

### Bonus Part (Checker)

Compile the checker program:
```bash
make bonus
```

This creates the `checker` executable.

### Other Make Rules

- `make clean` - Remove object files
- `make fclean` - Remove object files and executables
- `make re` - Recompile entire project

## Usage

### Push Swap

```bash
./push_swap [numbers...]
```

The program outputs the list of operations needed to sort the numbers.

**Examples:**

```bash
# Single argument with multiple numbers
./push_swap "3 2 1 0"

# Multiple arguments
./push_swap 3 2 1 0

# Larger set
./push_swap 42 17 -8 99 3 0 -42
```

**Output:**
```
pb
ra
pb
ra
sa
pa
pa
```

### Checker (Bonus)

The checker program reads operations from stdin and verifies if they correctly sort the stack.

```bash
./checker [numbers...]
```

**Examples:**

```bash
# Manual input (Ctrl+D to end input)
./checker 3 2 1
sa
pb
pa
^D
OK

# Using push_swap output
./push_swap 3 2 1 | ./checker 3 2 1
OK

# Test with random numbers
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
```

**Output:**
- `OK` - Numbers are sorted correctly
- `KO` - Numbers are not sorted
- `Error` - Invalid operations or input

## Algorithm Strategy

The implementation uses different algorithms based on input size:

### Small Numbers (2-3 elements)
- **2 numbers**: Single swap if needed
- **3 numbers**: Hardcoded optimal solution (max 2 operations)

### Medium Numbers (4-5 elements)
- Push smallest elements to stack B
- Sort remaining in stack A
- Push back to stack A

### Large Numbers (100+ elements)
- **Chunk-based approach**: Uses a modified version of the "push to B in chunks" algorithm
- Divides the sorted range into chunks
- Pushes elements to stack B based on their position in the sorted array
- Rotates in stack B to keep smaller values at top
- Pushes back to stack A starting with largest values

**Performance:**
- 3 numbers: ≤ 3 operations
- 5 numbers: ≤ 12 operations
- 100 numbers: ≤ 700 operations (typical: ~550)
- 500 numbers: ≤ 5500 operations (typical: ~3500)

## Project Structure

```
.
├── Makefile
├── Mandatory/
│   ├── push_swap.c           # Main program
│   ├── push_swap.h           # Header file
│   ├── checkerror.c          # Input validation
│   ├── cases.c               # Size-specific sorting strategies
│   ├── mtfive.c              # Large number sorting algorithm
│   ├── is_correct.c          # Validation helpers
│   ├── instractions/
│   │   ├── push.c            # pa/pb operations
│   │   ├── swap_stacks.c     # sa/sb/ss operations
│   │   ├── rotate.c          # ra/rb/rr operations
│   │   └── reverse_rotate.c  # rra/rrb/rrr operations
│   └── utils/
│       ├── ft_atol.c         # String to long conversion
│       ├── ft_swap.c         # Swap helper
│       ├── ft_realloc.c      # Dynamic array resizing
│       ├── bubblesort.c      # Sorting for indexing
│       ├── index.c           # Find min/max helpers
│       ├── count_word.c      # Argument parsing
│       └── free.c            # Memory cleanup
├── Bonus/
│   ├── checker.c             # Checker main program
│   ├── checker.h             # Checker header
│   ├── compare.c             # Operation validation
│   ├── get_next_line/        # Read operations from stdin
│   └── [similar structure]   # Same operations/utils as mandatory
└── libft/                     # Custom C library
```

## Error Handling

The program handles various error cases:

- **Invalid numbers**: Non-numeric input, out of INT range
- **Duplicates**: Same number appears multiple times
- **Empty input**: No arguments provided
- **Invalid operations** (checker): Unrecognized operation

**Error Output:**
```bash
./push_swap 1 2 three
Error

./push_swap 1 2 2 3
Error

./checker 1 2 3
invalid_op
^D
Error
```

## Testing

### Basic Tests

```bash
# Test with 3 numbers (should be ≤ 3 operations)
./push_swap 2 1 3

# Test with 5 numbers (should be ≤ 12 operations)
./push_swap 5 4 3 2 1 | wc -l

# Test already sorted
./push_swap 1 2 3 4 5 | wc -l  # Should output 0

# Test with negative numbers
./push_swap -5 0 5 -10 10
```

### Random Number Tests

```bash
# Generate and test random numbers
ARG=$(shuf -i 0-100 -n 100 | tr '\n' ' '); ./push_swap $ARG | wc -l

# Test with checker
ARG=$(shuf -i 0-500 -n 100 | tr '\n' ' '); ./push_swap $ARG | ./checker $ARG
```

### Performance Testing

```bash
# Count operations for 100 numbers
for i in {1..10}; do
    ARG=$(shuf -i 0-5000 -n 100 | tr '\n' ' ')
    ./push_swap $ARG | wc -l
done | awk '{sum+=$1; count++} END {print "Average:", sum/count}'

# Count operations for 500 numbers
for i in {1..10}; do
    ARG=$(shuf -i 0-10000 -n 500 | tr '\n' ' ')
    ./push_swap $ARG | wc -l
done | awk '{sum+=$1; count++} END {print "Average:", sum/count}'
```

## Complexity

- **Time Complexity**: O(n²) for the chunk-based algorithm
- **Space Complexity**: O(n) for storing the stacks
- **Operation Count**: 
  - Best case (sorted): 0 operations
  - Average case: ~5.5n operations for large inputs
  - Worst case: Depends on input configuration

## Bonus Features

The checker program validates sorting operations:

1. Reads numbers from command line arguments
2. Reads operations from standard input
3. Executes each operation on the stacks
4. Verifies if stack A is sorted and stack B is empty
5. Outputs `OK` or `KO`

**Features:**
- Handles multiple file descriptors with get_next_line
- Validates all operations before execution
- Proper error handling for invalid operations

## Technical Details

- **Language:** C
- **Compilation flags:** `-Wall -Wextra -Werror`
- **Allowed functions:** `read`, `write`, `malloc`, `free`, `exit`
- **Custom library:** libft (standard C library reimplementation)
- **Memory management:** No memory leaks, proper cleanup on errors

## Common Issues & Solutions

**Issue**: "Error" on valid input
- **Solution**: Check for duplicates or numbers out of INT range

**Issue**: Too many operations for small input
- **Solution**: Verify algorithm implementation for specific size cases

**Issue**: Checker outputs "KO" when visually sorted
- **Solution**: Ensure all numbers are pushed back to stack A from B

## Author

**amsbai** - 42 Student

## License

This project is part of the 42 School curriculum.

## Acknowledgments

Push Swap teaches:
- Algorithm optimization
- Stack data structures
- Operation minimization strategies
- Complexity analysis
- Edge case handling
