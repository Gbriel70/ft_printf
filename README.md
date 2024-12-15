<div align="center"><h1>Ft_Printf [110 / 100]</h1></div>

<div align="center">
   <a href="https://github.com/ArthurSobreira/42_ft_printf" target="_blank">
      <img height=170 src="https://github.com/byaliego/42-project-badges/blob/main/badges/ft_printfm.png" hspace = "10">
   </a>
</div>
---

# **printf Implementation - 42 Project**

## About the Project

This project aims to reimplement the standard C function `printf`. The goal was to replicate the core behavior of `printf`, ensuring it handles various format specifiers and edge cases correctly. In addition to the basic implementation, I added bonus functionality to handle specific flags: `#` and `+`, extending the capabilities of the function.

The key aspects of the project include:

- **Recreating the `printf` function:** Implementing the main functionality for different format specifiers (such as `%s`, `%d`, `%x`, etc.).
- **Handling Edge Cases:** Managing various edge cases, such as unsupported format specifiers, invalid inputs, and buffer management.
- **Bonus Flags (`#` and `+`):** Extending the function to support the `#` and `+` flags, which modify the output format (e.g., printing a `+` sign for positive numbers or adding a prefix to hexadecimal numbers).

## Key Concepts

- **Format Specifiers:** Handling different data types (`char`, `string`, `integer`, `unsigned`, etc.) with the correct formatting.
- **Flag Management:** Implementing and managing the behavior of special flags such as `#` (alternative form) and `+` (always print a sign for numbers).
- **Variable Arguments:** Using the `va_list`, `va_start`, `va_arg`, and `va_end` macros to manage a variable number of arguments passed to `printf`.
- **Memory and Buffer Management:** Efficient handling of output formatting without memory leaks or excessive memory usage.

## How to Use

1. Clone the repository:

   ```bash
   git clone git@github.com:Gbriel70/ft_printf.git
   ```

2. Compile the project using the provided `comp.sh` script:

   ```bash
   ./comp.sh
   ```

3. After compilation, you can test the `ft_printf` function by creating a simple C program and linking it with your implementation:

   ```c
   #include "ft_printf.h"

   int main() {
       ft_printf("Hello, world! %d\n", 42);
       ft_printf("Hex: %#x\n", 255);
       ft_printf("Signed: %+d\n", 42);
       return 0;
   }
   ```

4. To compile and run the test:

   ```bash
   gcc -o test_program test_program.c ft_printf.c
   ./test_program
   ```

## Bonus Features

- **`#` flag:** Alters the formatting of certain specifiers (e.g., `%x` will output `0x` or `0X` for hexadecimal numbers).
- **`+` flag:** Ensures that a sign (`+` or `-`) is always printed for numeric values.

## Conclusion

This project was a great opportunity to improve my understanding of variable argument handling in C and explore the intricacies of formatting output. By recreating the `printf` function, I gained a deeper understanding of how format specifiers and flags can affect the presentation of data in C, while also improving my ability to work with complex functions and memory management.

---
