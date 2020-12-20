#ifndef __INCLUDE_LGFX_H__
#define __INCLUDE_LGFX_H__

#define LGFX_M5STACK               // M5Stack (Basic / Gray / Go / Fire)
#define LGFX_M5STACK_CORE2         // M5Stack Core2
#include <LovyanGFX.hpp>

LGFX tft;                 // LGFXのインスタンスを作成。

#endif

extern LGFX tft;          // 複数のソースファイルから利用できるようにしておく
