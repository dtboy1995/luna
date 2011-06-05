
# Luna

 The Luna programming language.

## About

 Luna is an expressive, minimalistic, elegant programming language implemented in ANSI C. With reactor based concurrency at it's core, async I/O, and influences derived from phenomenal languages such as IO and Lua. This project is _very_ much a work in progress, as I explore the wonderful world of VMs! feel free to join.

## Goals

  - simple, small, elegant, explicit
  - prototypal inheritance
  - reflection capabilities
  - reactor concurrency model (event loop)
  - callee evaluated messages
  - coroutines (maybe)
  - register based VM
  - ...

## Build

 To build Luna, simply run:
 
    $ make

 When successful you may then execute the binary:
 
    $ ./luna --help

## Status

  I _just_ started Luna, so don't expect much yet! Until the project reaches `0.0.1` there will be no tickets, just the simple todo list below:

  - ✔ lexer
  - ✔ parser
  - ◦ virtual machine
  - ◦ opcode generation
  - ◦ C public/internal apis
  - ◦ garbage collection
  - ◦ optimizations (TCO etc)
  - ◦ libev integration
  - ◦ portability
  - ◦ closures
  - ◦ module system
  - ◦ website

## Operator Precedence Table

 Operator precedence from highest to lowest.

    operator       |  associativity
    ---------------|---------------
    []             |  left
    ++ --          |  right
    ! ~ + -        |  right
    * / %          |  left
    + -            |  left
    << >>          |  left
    < <= > >=      |  left
    == !=          |  left
    &              |  left
    ^              |  left
    |              |  left
    &&             |  left
    \|\|           |  left
    ?:             |  right
    =              |  right
    not            |  right
    ,              |  left

## License 

(The MIT License)

Copyright (c) 2011 TJ Holowaychuk &lt;tj@vision-media.ca&gt;

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
'Software'), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
