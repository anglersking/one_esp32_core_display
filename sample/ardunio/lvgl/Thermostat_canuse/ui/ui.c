// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: Thermostat
#include <Arduino.h>
#include "ui.h"
#include "ui_helpers.h"
#include "OneWire.h"
// #include "DallasTemperature.h"



///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Header;
lv_obj_t * ui_Header_Date;
lv_obj_t * ui_Header_Time;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Arc_Group;
void ui_event_Arc1(lv_event_t * e);
lv_obj_t * ui_Arc1;
lv_obj_t * ui_Temp_Bg;
lv_obj_t * ui_Temp_Num_Bg;
lv_obj_t * ui_Label_Celsius;
lv_obj_t * ui_Label_Slider;
void ui_event_Fan_Speed_Control(lv_event_t * e);
lv_obj_t * ui_Fan_Speed_Control;

///////////////////// TEST LVGL SETTINGS ////////////////////
/*
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif
*/
///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Arc1(lv_event_t * e)
{

   
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Label_Celsius, target, "", "°");
    }
}
void ui_event_Fan_Speed_Control(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        fan_speed_value(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Screen1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Header = lv_obj_create(ui_Screen1);
    lv_obj_set_height(ui_Header, 50);
    lv_obj_set_width(ui_Header, lv_pct(100));
    lv_obj_set_align(ui_Header, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Header, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Header, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Header, lv_color_hex(0x14191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Header, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Header, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Header_Date = lv_label_create(ui_Header);
    lv_obj_set_width(ui_Header_Date, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Header_Date, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Header_Date, -8);
    lv_obj_set_y(ui_Header_Date, -10);
    lv_obj_set_align(ui_Header_Date, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Header_Date, "Friday, March 11, 2022");
    lv_obj_set_style_text_color(ui_Header_Date, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Header_Date, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Header_Date, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Header_Time = lv_label_create(ui_Header);
    lv_obj_set_width(ui_Header_Time, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Header_Time, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Header_Time, 2);
    lv_obj_set_y(ui_Header_Time, 11);
    lv_obj_set_align(ui_Header_Time, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Header_Time, "AM 7:45");
    lv_obj_set_style_text_color(ui_Header_Time, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Header_Time, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Header_Time, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, 130);
    lv_obj_set_align(ui_Label2, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label2, "Temperature\nControl");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xD2CDC8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc_Group = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Arc_Group, 400);
    lv_obj_set_height(ui_Arc_Group, 400);
    lv_obj_set_align(ui_Arc_Group, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Arc_Group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Arc_Group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Arc_Group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc1 = lv_arc_create(ui_Arc_Group);
    lv_obj_set_width(ui_Arc1, 152);
    lv_obj_set_height(ui_Arc1, 151);
    lv_obj_set_align(ui_Arc1, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_Arc1, 15, 35);
    lv_arc_set_value(ui_Arc1, 23);
    lv_obj_set_style_radius(ui_Arc1, 350, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc1, 15, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x36B9F6), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc1, 15, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Temp_Bg = lv_obj_create(ui_Arc_Group);
    lv_obj_set_width(ui_Temp_Bg, 98);
    lv_obj_set_height(ui_Temp_Bg, 93);
    lv_obj_set_align(ui_Temp_Bg, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Temp_Bg, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Temp_Bg, 280, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Temp_Bg, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Temp_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Temp_Bg, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Temp_Bg, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Temp_Bg, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Temp_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Temp_Bg, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Temp_Bg, lv_color_hex(0x050A0F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Temp_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Temp_Bg, 80, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Temp_Bg, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_Temp_Bg, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_Temp_Bg, 30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Temp_Num_Bg = lv_obj_create(ui_Temp_Bg);
    lv_obj_set_width(ui_Temp_Num_Bg, 69);
    lv_obj_set_height(ui_Temp_Num_Bg, 69);
    lv_obj_set_align(ui_Temp_Num_Bg, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Temp_Num_Bg, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Temp_Num_Bg, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Temp_Num_Bg, lv_color_hex(0x0C191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Temp_Num_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Temp_Num_Bg, lv_color_hex(0x191C26), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Temp_Num_Bg, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Temp_Num_Bg, lv_color_hex(0x5A646E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Temp_Num_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Celsius = lv_label_create(ui_Temp_Num_Bg);
    lv_obj_set_width(ui_Label_Celsius, 48);
    lv_obj_set_height(ui_Label_Celsius, 36);
    lv_obj_set_x(ui_Label_Celsius, 3);
    lv_obj_set_y(ui_Label_Celsius, 2);
    lv_obj_set_align(ui_Label_Celsius, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_Celsius, "23°");
    lv_obj_set_style_text_color(ui_Label_Celsius, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Celsius, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Label_Celsius, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Celsius, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Slider = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label_Slider, 160);
    lv_obj_set_height(ui_Label_Slider, 16);
    lv_obj_set_x(ui_Label_Slider, 3);
    lv_obj_set_y(ui_Label_Slider, -62);
    lv_obj_set_align(ui_Label_Slider, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Label_Slider, "Fan Speed Control");
    lv_obj_set_style_text_color(ui_Label_Slider, lv_color_hex(0xD2CDC8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Slider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Slider, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Slider, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Fan_Speed_Control = lv_slider_create(ui_Screen1);
    lv_slider_set_value(ui_Fan_Speed_Control, 50, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Fan_Speed_Control) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_Fan_Speed_Control, 0,
                                                                                                      LV_ANIM_OFF);
    lv_obj_set_width(ui_Fan_Speed_Control, 148);
    lv_obj_set_height(ui_Fan_Speed_Control, 13);
    lv_obj_set_x(ui_Fan_Speed_Control, -1);
    lv_obj_set_y(ui_Fan_Speed_Control, -16);
    lv_obj_set_align(ui_Fan_Speed_Control, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_style_bg_color(ui_Fan_Speed_Control, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Fan_Speed_Control, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Fan_Speed_Control, lv_color_hex(0x1E242D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Fan_Speed_Control, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Fan_Speed_Control, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Fan_Speed_Control, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Fan_Speed_Control, lv_color_hex(0x37B9F5), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Fan_Speed_Control, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Fan_Speed_Control, lv_color_hex(0x1464F0), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Fan_Speed_Control, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Fan_Speed_Control, lv_color_hex(0x5F6464), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Fan_Speed_Control, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Fan_Speed_Control, lv_color_hex(0x3C424B), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Fan_Speed_Control, LV_GRAD_DIR_VER, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Fan_Speed_Control, lv_color_hex(0x373C46), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Fan_Speed_Control, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Fan_Speed_Control, 2, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Fan_Speed_Control, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Fan_Speed_Control, lv_color_hex(0x000000), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Fan_Speed_Control, 150, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Fan_Speed_Control, 20, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Fan_Speed_Control, 2, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Fan_Speed_Control, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Fan_Speed_Control, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Fan_Speed_Control, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Fan_Speed_Control, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Fan_Speed_Control, lv_color_hex(0x0096FF), LV_PART_KNOB | LV_STATE_PRESSED);
    lv_obj_set_style_border_opa(ui_Fan_Speed_Control, 255, LV_PART_KNOB | LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui_Fan_Speed_Control, 4, LV_PART_KNOB | LV_STATE_PRESSED);

    lv_obj_add_event_cb(ui_Arc1, ui_event_Arc1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Fan_Speed_Control, ui_event_Fan_Speed_Control, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
   
}
static void temperature_update_task(lv_bar_t * task)
{
    // 读取温度并更新界面
    // float temperature = read_temperature();
    // char temperatureStr[10];
    // snprintf(temperatureStr, sizeof(temperatureStr), "%.2f°C", temperature);
    // lv_label_set_text(ui_Temperature_Label, temperatureStr); // 假设ui_Temperature_Label是显示温度的标签元素
}
float read_temperature() {
  return 2.0;
    // Your DS18B20 sensor reading logic here
}
void device_init(void)
{ 

  
  // ui_Screen1_Button1->state=LV_STATE_CHECKED;
 //lv_disp_drv_register(&ui_Screen1);

 
static lv_indev_drv_t indev_drv;
lv_indev_drv_init(&indev_drv);      /*Basic initialization*/
indev_drv.type = LV_INDEV_TYPE_BUTTON;
indev_drv.read_cb = button_read;
/*Register the driver in LVGL and save the created input device object*/
lv_indev_t * my_indev = lv_indev_drv_register(&indev_drv);

//lv_obj_add_event_cb(indev_drv, ui_event_Arc1, LV_EVENT_ALL, NULL);


    //method2 point x y
    /*
    static const lv_point_t btn_points[2] = {
   // {31,  41},
    {31, 41 },//switch
    {31, 135 },
    //{124, 226},
    //{194, 226},
    //{264, 226},
    };
    lv_indev_set_button_points(my_indev, btn_points);
*/

    
}
int temp_start=23;
int KEYRead()
{

    //ui_Screen1_Button1->state=LV_STATE_CHECKED;
 
    if (digitalRead(33) == 0)
	{
        lv_arc_set_value(ui_Arc1,temp_start+=1 );
//         ui_event_Arc1(lv_event_t * e);
//        lv_label_set_text(ui_Screen2_Label2, "btn2 PRE");  
        
       
    
    return 1;
	}
    if (digitalRead(35) == 0)
	{
          lv_arc_set_value(ui_Arc1,temp_start-=1 );
       
        return 2;
	}
	return -1;// 没按下返回0


}

// 按键状态更新函数
void button_read(lv_indev_drv_t * drv, lv_indev_data_t*data){
  // Serial.begin( 115200 ); /* prepare for possible serial debug */

    static uint32_t last_btn = 0;   /*Store the last pressed button*/
    int btn_pr = KEYRead();     /*Get the ID (0,1,2...) of the pressed button*/
    if(btn_pr == 1) {     
         /*Is there a button press? (E.g. -1 indicated no button was pressed)*/
       last_btn = btn_pr;           /*Save the ID of the pressed button*/
       data->state = LV_INDEV_STATE_PRESSED;  /*Set the pressed state*/
       //  ui_Screen1_Button1->state=LV_STATE_CHECKED;
      // Serial.println("press");
       // _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    } 
    // if(btn_pr == 2) {     
    //     lv_label_set_text(ui_Screen2_Label2, "btn2 PRE");          /*Is there a button press? (E.g. -1 indicated no button was pressed)*/
    //    last_btn = btn_pr;           /*Save the ID of the pressed button*/
    //    data->state = LV_INDEV_STATE_PRESSED;  /*Set the pressed state*/
    //    //  ui_Screen1_Button1->state=LV_STATE_CHECKED;
    //   // Serial.println("press");
    //     _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    // } 
    else {
        
        data->state = LV_INDEV_STATE_RELEASED; /*Set the released state*/
       
//       Serial.println("release");
    }
    

    data->btn_id = last_btn;            /*Save the last button*/
}
