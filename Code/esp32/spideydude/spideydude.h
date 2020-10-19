#ifndef __SPIDEY_DUDE_H__
#define __SPIDEY_DUDE_H__

#include <Arduino.h>

#define RXD2 16
#define TXD2 17

#define _MAJOR_VERSION_ 0
#define _MINOR_VERSION_ 1
#define _SUB_MINOR_VERSION_ 0

struct PROG {
  String fileName;
  uint8_t *progData;
  size_t len;
  uint16_t pageSize;
};

class Spideydude{
  private:
    PROG details;
    void ResetExtDevice();
    void Verbose(const char*);
    void RW(const char*);
    void Done();
    void sync();
    void writeFlash();
  public:
    void begin(String, uint8_t*, size_t, uint16_t);
};
#endif 