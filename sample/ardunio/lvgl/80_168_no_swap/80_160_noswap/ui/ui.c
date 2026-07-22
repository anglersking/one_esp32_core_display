// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: 80_160_noswap

#include "ui.h"
#include "ui_helpers.h"
//#include "MD_UISwitch.h"




///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Screen1_Switch1;
void ui_event_Screen1_Button1(lv_event_t * e);
lv_obj_t * ui_Screen1_Button1;
lv_obj_t * ui_Screen1_Label1;
lv_obj_t * ui_Screen1_Spinner4;
lv_obj_t * ui_Screen1_Panel2;
lv_obj_t * ui_Screen1_Label3;
lv_obj_t * ui_Screen2;
void ui_event_Screen2_Button2(lv_event_t * e);
lv_obj_t * ui_Screen2_Button2;
lv_obj_t * ui_Screen2_Label2;
lv_obj_t * ui_Screen2_Chart3;
lv_obj_t * ui_Screen2_Panel3;
lv_obj_t * ui_Screen2_Label4;
lv_obj_t * ui_Screen3;
void button_read(lv_indev_drv_t * drv, lv_indev_data_t*data);
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
void ui_event_Screen1_Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Screen2_Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Screen1_Switch1 = lv_switch_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Switch1, 50);
    lv_obj_set_height(ui_Screen1_Switch1, 25);
    lv_obj_set_x(ui_Screen1_Switch1, 2);
    lv_obj_set_y(ui_Screen1_Switch1, -36);
    lv_obj_set_align(ui_Screen1_Switch1, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Screen1_Switch1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Switch1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Button1 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Button1, 64);
    lv_obj_set_height(ui_Screen1_Button1, 22);
    lv_obj_set_x(ui_Screen1_Button1, -1);
    lv_obj_set_y(ui_Screen1_Button1, 61);
    lv_obj_set_align(ui_Screen1_Button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Screen1_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Screen1_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Screen1_Label1 = lv_label_create(ui_Screen1_Button1);
    lv_obj_set_width(ui_Screen1_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label1, "page2");

    ui_Screen1_Spinner4 = lv_spinner_create(ui_Screen1, 1000, 90);
    lv_obj_set_width(ui_Screen1_Spinner4, 53);
    lv_obj_set_height(ui_Screen1_Spinner4, 56);
    lv_obj_set_x(ui_Screen1_Spinner4, -2);
    lv_obj_set_y(ui_Screen1_Spinner4, 13);
    lv_obj_set_align(ui_Screen1_Spinner4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Screen1_Spinner4, LV_OBJ_FLAG_CLICKABLE);      /// Flags

    ui_Screen1_Panel2 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Panel2, 99);
    lv_obj_set_height(ui_Screen1_Panel2, 29);
    lv_obj_set_x(ui_Screen1_Panel2, 4);
    lv_obj_set_y(ui_Screen1_Panel2, -69);
    lv_obj_set_align(ui_Screen1_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Screen1_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1_Panel2, lv_color_hex(0x8D8A8A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Label3 = lv_label_create(ui_Screen1_Panel2);
    lv_obj_set_width(ui_Screen1_Label3, 75);
    lv_obj_set_height(ui_Screen1_Label3, 17);
    lv_obj_set_x(ui_Screen1_Label3, -4);
    lv_obj_set_y(ui_Screen1_Label3, -2);
    lv_obj_set_align(ui_Screen1_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label3, "Home page");
    lv_obj_set_style_text_font(ui_Screen1_Label3, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Screen1_Button1, ui_event_Screen1_Button1, LV_EVENT_ALL, NULL);

}
void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Screen2_Button2 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Button2, 60);
    lv_obj_set_height(ui_Screen2_Button2, 23);
    lv_obj_set_x(ui_Screen2_Button2, 1);
    lv_obj_set_y(ui_Screen2_Button2, 61);
    lv_obj_set_align(ui_Screen2_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Screen2_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Screen2_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Screen2_Label2 = lv_label_create(ui_Screen2_Button2);
    lv_obj_set_width(ui_Screen2_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen2_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label2, "Temp");

    ui_Screen2_Chart3 = lv_chart_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Chart3, 68);
    lv_obj_set_height(ui_Screen2_Chart3, 54);
    lv_obj_set_x(ui_Screen2_Chart3, 1);
    lv_obj_set_y(ui_Screen2_Chart3, -2);
    lv_obj_set_align(ui_Screen2_Chart3, LV_ALIGN_CENTER);
   // lv_chart_set_x_start_point(ui_Screen2_Chart3,0,1);



/*
    lv_chart_set_point_count(ui_Screen2_Chart3,255);
     lv_chart_set_point_count(chart, 225);
		lv_chart_set_div_line_count(chart, 0, 0);
		lv_chart_set_range(chart, 0, 255);
       
        /*Create a chart*/
        // lv_obj_t * chart;
        // chart = lv_chart_create(lv_scr_act(), NULL);
        // lv_obj_set_size(chart, 200, 150);
        // lv_obj_align(chart, NULL, LV_ALIGN_CENTER, 0, 0);
        // lv_chart_set_type(chart, LV_CHART_TYPE_LINE);   /*Show lines and points too*/

        // /*Add two data series*/
        // lv_chart_series_t * ser1 = lv_chart_add_series(chart, LV_COLOR_RED);
        // lv_chart_series_t * ser2 = lv_chart_add_series(chart, LV_COLOR_GREEN);

        // /*Set the next points on 'ser1'*/
        // lv_chart_set_next(chart, ser1, 10);
        // lv_chart_set_next(chart, ser1, 10);
        // lv_chart_set_next(chart, ser1, 10);
        // lv_chart_set_next(chart, ser1, 10);
        // lv_chart_set_next(chart, ser1, 10);
        // lv_chart_set_next(chart, ser1, 10);
        // lv_chart_set_next(chart, ser1, 10);
        // lv_chart_set_next(chart, ser1, 30);
        // lv_chart_set_next(chart, ser1, 70);
        // lv_chart_set_next(chart, ser1, 90);

        // /*Directly set points on 'ser2'*/
        // ser2->points[0] = 90;
        // ser2->points[1] = 70;
        // ser2->points[2] = 65;
        // ser2->points[3] = 65;
        // ser2->points[4] = 65;
        // ser2->points[5] = 65;
        // ser2->points[6] = 65;
        // ser2->points[7] = 65;
        // ser2->points[8] = 65;
        // ser2->points[9] = 65;

        // lv_chart_refresh(chart); /*Required after direct set*/
     //lv_chart_series_t * series = lv_chart_add_series(ui_Screen2_Chart3,LV_COLOR_RED,1);
    // lv_chart_init_points(ui_Screen2_Chart3, series, 0);
    // lv_chart_set_next(ui_Screen2_Chart3, series, 1);

    lv_chart_series_t * ser1 = lv_chart_add_series(ui_Screen2_Chart3, lv_palette_main(LV_PALETTE_RED), LV_CHART_AXIS_PRIMARY_Y);

    lv_chart_series_t * ser2 = lv_chart_add_series(ui_Screen2_Chart3, lv_palette_main(LV_PALETTE_GREEN), LV_CHART_AXIS_SECONDARY_Y);
    
    lv_chart_set_next_value(ui_Screen2_Chart3, ser1, 1);
    lv_chart_set_next_value(ui_Screen2_Chart3, ser1, 2);
    lv_chart_set_next_value(ui_Screen2_Chart3, ser1, 1);
    lv_chart_set_next_value(ui_Screen2_Chart3, ser1, 3);
    lv_chart_set_next_value(ui_Screen2_Chart3, ser1, 10);
    lv_chart_set_next_value(ui_Screen2_Chart3, ser1, 10);
    lv_chart_set_next_value(ui_Screen2_Chart3, ser1, 10);
    lv_chart_set_next_value(ui_Screen2_Chart3, ser1, 30);
    lv_chart_set_next_value(ui_Screen2_Chart3, ser1, 70);
    lv_chart_set_next_value(ui_Screen2_Chart3, ser1, 90);

    ser2->y_points[0] = 90;
    ser2->y_points[1] = 70;
    ser2->y_points[2] = 65;
    ser2->y_points[3] = 65;
    ser2->y_points[4] = 65;
    ser2->y_points[5] = 65;
    ser2->y_points[6] = 65;
    ser2->y_points[7] = 65;
    ser2->y_points[8] = 65;
    ser2->y_points[9] = 65;

     lv_chart_refresh(ui_Screen2_Chart3);




    

    ui_Screen2_Panel3 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Panel3, 100);
    lv_obj_set_height(ui_Screen2_Panel3, 36);
    lv_obj_set_x(ui_Screen2_Panel3, 1);
    lv_obj_set_y(ui_Screen2_Panel3, -70);
    lv_obj_set_align(ui_Screen2_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Screen2_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen2_Panel3, lv_color_hex(0x8D8A8A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label4 = lv_label_create(ui_Screen2_Panel3);
    lv_obj_set_width(ui_Screen2_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label4, -3);
    lv_obj_set_y(ui_Screen2_Label4, 1);
    lv_obj_set_align(ui_Screen2_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label4, "Chart page");
    lv_obj_set_style_text_font(ui_Screen2_Label4, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Screen2_Button2, ui_event_Screen2_Button2, LV_EVENT_ALL, NULL);

}
void ui_Screen3_screen_init(void)
{
    ui_Screen3 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    ui_Screen3_screen_init();
    lv_disp_load_scr(ui_Screen1);
}

void device_init(void)
{ // ui_Screen1_Button1->state=LV_STATE_CHECKED;
 //lv_disp_drv_register(&ui_Screen1);
 lv_label_set_text(ui_Screen1_Label1, "dev init");
 
static lv_indev_drv_t indev_drv;
lv_indev_drv_init(&indev_drv);      /*Basic initialization*/
indev_drv.type = LV_INDEV_TYPE_BUTTON;
indev_drv.read_cb = button_read;
/*Register the driver in LVGL and save the created input device object*/
lv_indev_t * my_indev = lv_indev_drv_register(&indev_drv);
lv_label_set_text(ui_Screen1_Label1, "dev reg");
//lv_indev_set_group()
//lv_obj_add_event_cb(indev_drv, ui_event_Screen1_Button1, LV_EVENT_ALL, NULL);
//method 1
	
	
	// group可以在void lv_port_indev_init()函数中就创建，而在窗口中通过
	// lv_group_t* group = lv_group_get_default();
	// lv_group_add_obj(group, ui_Screen1_Button1);
	// // 的方式添加组件,更多的自己慢慢探索吧
	// group = lv_group_create();
	// lv_group_set_default(group);
	// lv_group_remove_all_objs(group);
	// lv_group_add_obj(group, ui_Screen1_Button1);
	// //lv_group_add_obj(group, btn2);
	// // 这里的indev_encoder是lv_indev_drv_register( &indev_drv )的返回值
	// // 案例中均没有使用到这个值
	// lv_indev_set_group(my_indev, group);

    //method2 point x y
    
    static const lv_point_t btn_points[2] = {
   // {31,  41},
    {31, 41 },//switch
    {31, 135 },
    //{124, 226},
    //{194, 226},
    //{264, 226},
    };
    lv_indev_set_button_points(my_indev, btn_points);


    
}
int KEYRead()
{

    //ui_Screen1_Button1->state=LV_STATE_CHECKED;
  lv_label_set_text(ui_Screen1_Label1, "key rea");
    if (digitalRead(23) == 1)
	{
        lv_label_set_text(ui_Screen1_Label1, "key H");
		//Serial.Println("[btn_real] click");
    ui_Screen1_Button1->state=LV_STATE_CHECKED;
    return 1;
	}
    if (digitalRead(21) == 1)
	{
        lv_label_set_text(ui_Screen2_Label2, "key2 H");
		//Serial.Println("[btn_real] click");
        ui_Screen2_Button2->state=LV_STATE_CHECKED;
        return 2;
	}
    lv_label_set_text(ui_Screen1_Label1, "key low");
    ui_Screen1_Button1->state=LV_STATE_DEFAULT;
    ui_Screen2_Button2->state=LV_STATE_DEFAULT;
	return -1;// 没按下返回0


}

// 按键状态更新函数
void button_read(lv_indev_drv_t * drv, lv_indev_data_t*data){
  // Serial.begin( 115200 ); /* prepare for possible serial debug */
  lv_label_set_text(ui_Screen1_Label1, "btn rea");

    static uint32_t last_btn = 0;   /*Store the last pressed button*/
    int btn_pr = KEYRead();     /*Get the ID (0,1,2...) of the pressed button*/
    if(btn_pr == 1) {     
         lv_label_set_text(ui_Screen1_Label1, "btn PRE");          /*Is there a button press? (E.g. -1 indicated no button was pressed)*/
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
         lv_label_set_text(ui_Screen1_Label1, "btn REL");
        data->state = LV_INDEV_STATE_RELEASED; /*Set the released state*/
        ui_Screen1_Button1->state=LV_STATE_DEFAULT;
//       Serial.println("release");
    }
    

    data->btn_id = last_btn;            /*Save the last button*/
}

