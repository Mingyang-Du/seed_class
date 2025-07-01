#ifndef TERMINAL_H
#define TERMINAL_H

void die(const char *s);
void disableRawMode();
void enableRawMode();
int editorReadKey();
int getWindowSize(int *rows, int *cols);

#endif
