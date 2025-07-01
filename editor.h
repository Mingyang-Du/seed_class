#ifndef EDITOR_H
#define EDITOR_H

#include "row.h"
#include <time.h>
#include <termios.h>

#define TAB_STOP 8
#define QUIT_TIMES 3
#define CTRL_KEY(k) ((k) & 0x1f)

struct editorConfig {
  int cx, cy;
  int rx;
  int rowoff;
  int coloff;
  int screenrows;
  int screencols;
  int numrows;
  erow *row;
  int dirty;
  char *filename;
  char statusmsg[80];
  time_t statusmsg_time;
  struct termios orig_termios;
};

extern struct editorConfig E;

void initEditor();
void editorProcessKeypress();
void editorSetStatusMessage(const char *fmt, ...);

#endif
