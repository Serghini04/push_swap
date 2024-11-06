# 🔄 Push_swap
A highly efficient number sorting project using two stacks, implementing Tshankx's algorithm. Part of the School 1337 cursus.

## 📋 Project Structure
```
📦 Push_swap
├── 📂 Algo/           # Algorithm implementation files
├── 📂 get_next_line/  # GNL implementation for checker
├── 📂 instru/         # Stack operation instructions
├── 📂 utils/          # Utility functions
├── 📄 Makefile       # Compilation rules
├── 📄 push_swap.c    # Main program logic
├── 📄 push_swap.h    # Header file with prototypes
└── 📄 visualizer.py  # Stack visualization tool
```

## 🎯 Description
Push_swap is a sorting algorithm project that requires sorting data on a stack, with a limited set of instructions, using the lowest possible number of actions. The program calculates and outputs the smallest sequence of operations needed to sort the input numbers.

##⚡ Features
✨ Efficient Sorting Algorithm
📊 Stack Visualization Tool
🔢 Handles Various Input Sizes
⚠️ Comprehensive Error Handling
📈 Performance Optimization

## 🛠️ Installation
```bash
# Clone the repository
git clone https://github.com/Serghini04/Push_swap.git

# Navigate to the project directory
cd Push_swap

# Compile the program
make          # For mandatory part
make bonus    # For checker program
```

## 💻 Usage
### Basic Usage:
```bash
./push_swap 2 1 3 6 5 8
```

### With Checker:
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
```

With Visualizer:
```bash
python3 visualizer.py `./push_swap 4 67 3 87 23`
```

## 🔧 Available Operations
- `sa`: Swap first 2 elements of stack A
- `sb`: Swap first 2 elements of stack B
- `ss`: sa and sb simultaneously
- `pa`: Push top element from B to A
- `pb`: Push top element from A to B
- `ra`: Rotate stack A upward
- `rb`: Rotate stack B upward
- `rr`: ra and rb simultaneously
- `rra`: Rotate stack A downward
- `rrb`: Rotate stack B downward
- `rrr`: rra and rrb simultaneously

## ⚙️ Technical Requirements
- C Language
- Norm Compliant (42 School Code Standards)
- No Memory Leaks
- Error Handling
- Limited Set of Functions:
  - write
  - read
  - malloc
  - free
  - exit

## 🔍 Algorithm Overview
### 1. 📥 Input Analysis
   - Detect stack size
   - Calculate optimal chunks
   - Prepare sorting strategy

### 2. 📊 Sorting Process
   - Initial stack analysis
   - Chunk-based sorting
   - Optimal operation selection
   - Final position adjustment

### 3. 📈 Performance Metrics
   - 3 numbers: ≤ 3 operations
   - 5 numbers: ≤ 12 operations
   - 100 numbers: ≤ 700 operations
   - 500 numbers: ≤ 5500 operations

## 🐛 Error Handling
The program handles various error cases:
- Non-numeric input
- Numbers outside INT range
- Duplicate numbers
- Memory allocation failures
- Invalid instructions (checker)

## 🚀 Visualization Features
The included Python visualizer shows:
- Stack states after each operation
- Operation count
- Real-time sorting progress
- Color-coded number positions

## 📝 Testing Commands
```bash
# Basic test
ARG="4 67 3 87 23"; ./push_swap $ARG

# Checker test
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG

# Random number test
ARG=`ruby -e "puts (1..100).to_a.shuffle.join(' ')"`; ./push_swap $ARG
```

## 📚 Resources
- Stack Operations
- Sorting Algorithms
- Complexity Analysis
- Memory Management
- Algorithm Optimization

## 🌟 Tips for Development
- Always validate input
- Monitor operation count
- Use visualization for debugging
- Test with various input sizes
- Check edge cases thoroughly
- Use valgrind for memory checks

This project is part of the School 1337 curriculum.
