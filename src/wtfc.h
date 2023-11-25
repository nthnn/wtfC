/*
 * This file is part of the wtfC!?.
 * Copyright (c) 2023 Nathanne Isip
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef WTFC_H
#define WTFC_H

#define import              # include
#define main                int main

#define make(type, size)    (type*)malloc(sizeof(type) * size)
#define repeat(x, count)    for(int x = 0; x < count ; x ++) 

#define ever                (;;)
#define elif                else if
#define nothing             ^void() {}

#define echo(value) _Generic((value),       \
            int: printf("%d", value),	    \
            float: printf("%f", value),	    \
            double: printf("%lf", value),   \
            char: printf("%c", value),      \
            char*: printf("%s", value),     \
            default: printf("")             \
)

#define begin   {
#define end     }

#define rune    char
#define string  char*
#define i8      signed char
#define i16     signed short int
#define i32     signed int
#define i64     signed long int
#define u8      unsigned char
#define u16     unsigned short int
#define u32     unsigned int
#define u64     unsigned long int
#define usize   size_t

#endif
