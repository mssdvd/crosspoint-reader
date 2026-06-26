#pragma once

#include <cstdint>
#include <cstring>

#define FOOTNOTE_NUMBER_LEN 32
#define FOOTNOTE_HREF_LEN 96

struct FootnoteEntry {
  char number[FOOTNOTE_NUMBER_LEN];
  char href[FOOTNOTE_HREF_LEN];
  // Page-relative Y (oriented content space) of the line holding this footnote
  // reference. Used to highlight the reference line when returning from a footnote.
  uint16_t yPos = 0;

  FootnoteEntry() {
    number[0] = '\0';
    href[0] = '\0';
  }
};
