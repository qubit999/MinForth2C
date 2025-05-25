# MinForth V3.4

MinForth is a minimal Forth implementation in C and Forth, featuring a Forth-to-C transpiler  
that generates C99 code from mixed Forth/C definitions. Transpiled output compiles on any modern C compiler into fast, compact executables.

## Support for macOS arm64

`minf2c.c` can be compiled on your Mac using gcc:

```bash
gcc minf2c.c -o minf2c
````

Usage: 
```bash
./minf2c yourprogram.mfc
```

Example program is: `hello.mfc` (including the `functions.mfc` file)

## License

This project is MIT-licensed. See `LICENCE` for details.

## Authors

- **Andreas Kochenburger** (Original author, Heidelberg, Germany)  
- **Alexander Slatina** (`minf2c.c`)  

Have fun and stay healthy!