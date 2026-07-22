
#include <lvgl.h>
#include <TFT_eSPI.h>
#include "ui.h"



/*If you want to use the LVGL examples,
  make sure to install the lv_examples Arduino library
  and uncomment the following line.
#include <lv_examples.h>
*/

/*Change to your screen resolution*/
static const uint16_t screenWidth  = 172;
static const uint16_t screenHeight = 320;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * screenHeight / 10 ];

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */

#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(const char * buf)
{
    Serial.printf(buf);
    Serial.flush();
}
#endif

/* Display flushing */
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
    uint32_t w = ( area->x2 - area->x1 + 1 );
    uint32_t h = ( area->y2 - area->y1 + 1 );

    tft.startWrite();
    tft.setAddrWindow( area->x1, area->y1, w, h );
    tft.pushColors( ( uint16_t * )&color_p->full, w * h, true );
    tft.endWrite();

    lv_disp_flush_ready( disp );
}

/*Read the touchpad*/
void my_touchpad_read( lv_indev_drv_t * indev_driver, lv_indev_data_t * data )
{
    uint16_t touchX = 0, touchY = 0;

    bool touched = false;//tft.getTouch( &touchX, &touchY, 600 );

    if( !touched )
    {
        data->state = LV_INDEV_STATE_REL;
    }
    else
    {
        data->state = LV_INDEV_STATE_PR;

        /*Set the coordinates*/
        data->point.x = touchX;
        data->point.y = touchY;

        Serial.print( "Data x " );
        Serial.println( touchX );

        Serial.print( "Data y " );
        Serial.println( touchY );
    }
}

void setup()
{
    // sensors.begin();
    pinMode(32, INPUT);// 将按钮引脚初始化为输入
   pinMode(34, INPUT);// 将按钮引脚初始化为输入
    pinMode(33, INPUT);// 将按钮引脚初始化为输入
   pinMode(35, INPUT);// 将按钮引脚初始化为输入
   pinMode(25, INPUT);// 将按钮引脚初始化为输入
    Serial.begin( 115200 ); /* prepare for possible serial debug */

    String LVGL_Arduino = "Hello Arduino! ";
    LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

    Serial.println( LVGL_Arduino );
    Serial.println( "I am LVGL_Arduino" );

    lv_init();

#if LV_USE_LOG != 0
    lv_log_register_print_cb( my_print ); /* register print function for debugging */
#endif

    tft.begin();          /* TFT init */
    tft.setRotation( 2 ); /* Landscape orientation, flipped */

    lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth * screenHeight / 10 );

    /*Initialize the display*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init( &disp_drv );
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register( &disp_drv );

    /*Initialize the (dummy) input device driver*/
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init( &indev_drv );
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = my_touchpad_read;
    lv_indev_drv_register( &indev_drv );
  

    ui_init();
    device_init();
    // lv_task_create(temperatureRead, 1000, LV_BASE_DIR_LTR, NULL);
    static uint32_t user_data = 10;
    lv_timer_t * timer = lv_timer_create(my_timer, 500,  &user_data);
    
    

    Serial.println( "Setup done" );
}
void my_timer(lv_timer_t * timer)
{
  /*Use the user_data*/
  // uint32_t * user_data = timer->user_data;
  // printf("my_timer called with user data: %d\n", *user_data);

  // /*Do something with LVGL*/
  // if(something_happened) {
  //   something_happened = false;
  //   lv_btn_create(lv_scr_act(), NULL);
  // }
}
// static void temperature_update_task(lv_task_t * task)
// {
//     // 读取温度并更新界面
//     float temperature = read_temperature();
//     // char temperatureStr[10];
//     // snprintf(temperatureStr, sizeof(temperatureStr), "%.2f°C", temperature);
//     // lv_label_set_text(ui_Temperature_Label, temperatureStr); // 假设ui_Temperature_Label是显示温度的标签元素
// }
// float read_temperature() {
//     // 重置 DS18B20 总线
//     // oneWire.reset_search();

//     // // 在总线上搜索 DS18B20 传感器设备
//     // if (!oneWire.search()) {
//     //     // 没有找到 DS18B20 设备，返回错误值
//     //     return -1000;
//     // }

//     // // 检查找到的设备是否是 DS18B20
//     // if (oneWire.reset() != 1 || oneWire.matchRom(0x28) != 1) {
//     //     // 不是 DS18B20 设备，返回错误值
//     //     return -1000;
//     // }

//     // // 向 DS18B20 发送温度转换命令
//     // oneWire.write(0x44, 1);

//     // // 等待 DS18B20 完成温度转换
//     // delay(750);

//     // // 向 DS18B20 发送读取温度命令
//     // oneWire.reset();
//     // oneWire.write(0xBE, 1);

//     // // 读取 DS18B20 的温度值
//     // int16_t rawTemperature = (oneWire.read() | (oneWire.read() << 8));

//     // // 将温度值转换为摄氏度
//     // float temperature = (float)rawTemperature / 16.0;

//     // return temperature;
// }
void loop()
{
    lv_timer_handler(); /* let the GUI do its work */
    delay(5);
}
