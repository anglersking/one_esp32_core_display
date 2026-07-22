// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: 80_160_noswap

#ifndef _80_160_NOSWAP_UI_H
#define _80_160_NOSWAP_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Screen1_Switch1;
void ui_event_Screen1_Button1(lv_event_t * e);
extern lv_obj_t * ui_Screen1_Button1;
extern lv_obj_t * ui_Screen1_Label1;
extern lv_obj_t * ui_Screen1_Spinner4;
extern lv_obj_t * ui_Screen1_Panel2;
extern lv_obj_t * ui_Screen1_Label3;
extern lv_obj_t * ui_Screen2;
void ui_event_Screen2_Button2(lv_event_t * e);
extern lv_obj_t * ui_Screen2_Button2;
extern lv_obj_t * ui_Screen2_Label2;
extern lv_obj_t * ui_Screen2_Chart3;
extern lv_obj_t * ui_Screen2_Panel3;
extern lv_obj_t * ui_Screen2_Label4;
extern lv_obj_t * ui_Screen3;




void device_init(void);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
