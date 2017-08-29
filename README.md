# Learning Emscripten and asm.js

## How to Run
1. Command:

    ```
    emcc hello.c -o hello.html --preload-file ./asset -s NO_EXIT_RUNTIME=1
    ```
2. Open HTML pages in Firefox. If use Chrome, run ```emrun xxx.html``` first.

## Resources
* http://kripken.github.io/emscripten-site/index.html
* http://webassembly.org
* https://developer.mozilla.org/en-US/docs/WebAssembly

## Blog
[Learning Emscripten: Compile C/C++ to JavaScript][0]

[0]:http://www.codepool.biz/emscripten-compile-cc-javascript.html
