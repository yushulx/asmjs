#include <stdio.h>
#include <emscripten.h>

void getLicense() {
  char license[256];
  int index = 0;
  FILE *file = fopen("./asset/license.txt", "r");
  if (!file) {
    printf("cannot open file\n");
    return;
  }

  while (!feof(file)) {
    char c = fgetc(file);
    if (c != EOF) {
      license[index++] = c;
    }
  }

  fclose (file);

  printf("%s\n", license);
}

char* EMSCRIPTEN_KEEPALIVE world() {
  return "world";
}

int main() {
  printf("hello\n");
  getLicense();
  EM_ASM(onLoaded());
  // emscripten_exit_with_live_runtime();
  return 0;
}
