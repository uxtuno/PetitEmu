//#pragma once

# //ifndef PGUI_H_INCLUDED
# //define PGUI_H_INCLUDED

#define _CRT_SECURE_NO_WARNINGS

#ifdef __cplusplus
#include "DxLib.h"
#endif
#include "data.h"
#include "evalformula.h"
#include "pinput.h"
#ifdef __cplusplus
extern "C" {
#endif
extern int GrHandle[10]; 
extern unsigned char KeyMap_A[256];
extern unsigned char KeyMap_A_S[256];
extern unsigned char KeyMap_G[256];
extern unsigned char KeyMap_G_S[256];
extern unsigned char KeyMap_K[256];
extern unsigned char KeyMap_K_S[256];
//���_�E�����_�t���O
extern unsigned char KeyMap_K_S_DAKU[256];
bool draw_console(void);
void lineinput(char* arg);
void DrawKeyboard(void);
void DrawFuncKey(void);
void DrawUnderPanel(void);
void ProcessBG(void);
void DrawBG(void);
void DrawBGChip(int page,int layer,int ofsx_1,int ofsx_2,int ofsy_1,int ofsy_2);
void console_clearline(void);
int putchar2console(uint16_t arg,int indent_option);
void display_console(void);
int print2console(char *string,int indent_option);
void scroll_console(void);
void PutStartMessage(void);
#ifdef __cplusplus
}
#endif
# //endif