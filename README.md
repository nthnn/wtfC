# wtfC!?: C/C++ Macro-abusive Extension

"wtfC!?" is a playful language extension for C and C++ that introduces unconventional and humorous macros to replace common programming constructs. This project aims to add a touch of creativity and humor to C/C++ programming, offering an alternative way to write code that might appeal to developers looking for a unique coding experience.

> [!WARNING]
> wtfC!? was made for fun, thus, do not use it for professional use.

## Usage

```c
import <stdio.h>

main(i32 argc, string argv[])
begin
	nothing;

	i32* test = make(i32, 10);
	test[9] = 100;

	echo(test[9]);
	echo("\nHello, damn world!\r\n");

	for ever;
end
```

If you are using the macro `import`, you should preprocess your source file first before compiling. For example:

```bash
gcc -E -include src/wtfc.h -o full_example_prep.c examples/full_example.c
gcc -w -o full_example full_example_prep.c && rm full_example_prep.c
./full_example
```

You can skip the pre-preprocessing phase if you don't use the `import` macro for file inclusion.

## Macro Definitions

1. `import`: Replace `#include` with a more unconventional syntax.

    ```c
    import <stdio.h>
    import <math.h>
    ```

2. `main`: Simplify the main function declaration.

    ```c
    main()
    begin
        return 0;
    end
    ```

3. `make`: A macro for dynamic memory allocation using `malloc`. Inspired from Golang's `make`.

    ```c
    // Allocates memory for array with 10 items.
    i32* array = make(i32, 10);
    ```

4. `repeat`: Introduce a loop construct with a humorous loop variable name.

    ```c
    repeat(n, 10)
    begin
        echo("[");
        echo(n);
        echo("] Hello!\r\n");
    end
    ```

    The first parameter is an integer and can be accessed to track the current iteration count.

5. `ever`: Define an infinite loop construct using `for(;;)`.

    ```c
    // Self explanatory infinite loop
    for ever
    begin
        // You code here
    end
    ```

6. `elif`: Combine `else` and `if` for brevity. Inspired from Python's `Elif`.

    ```c
    i32 num = 0;

    if(num == 0)    { }
    elif(num == 1)  { }
    elif(num == 2)  { }
    else            { }
    ```

7. `nothing`: Define a function pointer with an empty lambda-like function.

    ```c
    // Yeah, it does nothing...
    nothing;
    ```

8. `echo`: A versatile macro for printing values with type awareness. This will cause a lot of warnings, you can use the `-w` parameter on `gcc`.

    ```c
    echo("Hello, world!");
    echo('\n');
    echo(3.14f);
    ```

9. `begin` and `end`: Replace `{` and `}` for defining code blocks.

    ```
    // Basic block using the begin and end keyword.
    begin
    ...
    end
    ```

10. Integer Types: Macros for defining integer types with different sizes. There integer types are mostly inspired from Rust's primitive data types. This integer types includes: `i8`, `i16`, `i32`, `i64`, `u8`, `u16`, `u32`, `u64`, `rune`, `string`, and `usize`.

## Contribution Guidelines (Expanded)

Contributions to "wtfC!?" are welcome! If you have an idea for a new macro or want to improve existing ones, please follow these guidelines:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.

    ```bash
    git checkout -b feature/your-feature-name
    ```

3. Make your changes and commit them with a clear commit message.

    ```bash
    git commit -m "Add new macro: your_macro_name"
    ```

4. Push your branch to your fork.

    ```bash
    git push origin feature/your-feature-name
    ```

5. Submit a pull request.
    - Provide a clear title and description for your pull request.
    - Include information about the changes made and the motivation behind them.

6. Follow the coding style.
    - Ensure that your changes adhere to the project's coding style.
    - Maintain the spirit of the project—keep it playful and creative.

7. Be responsive.
    - Be open to feedback and respond to comments on your pull request promptly.
    - Collaborate with the community to refine and improve your contribution.

Please note that all contributions are subject to review, and maintaining a positive and collaborative atmosphere is crucial.

## License

Copyright 2023 - Nathanne Isip

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.