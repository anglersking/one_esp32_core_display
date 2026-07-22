#include <lvgl.h>
#include <TFT_eSPI.h>
#include "ui.h"
#include "ui_helpers.h"
#include "lv_disp.h"
#define buttonPin  23
int flag=0;

extern lv_obj_t * ui_Screen2;
extern lv_obj_t * ui_Screen1;

lv_event_t * change;



/*If you want to use the LVGL examples,
  make sure to install the lv_examples Arduino library
  and uncomment the following line.
#include <lv_examples.h>
*/

/*Change to your screen resolution*/
static const uint16_t screenWidth  = 80;
static const uint16_t screenHeight = 160;

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
 
  pinMode(23, INPUT);// 将按钮引脚初始化为输入
   pinMode(21, INPUT);// 将按钮引脚初始化为输入
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

    Serial.println( "Setup done" );

//   change->code=LV_EVENT_CLICKED;
//    change->target=ui_Screen1;
//
//    ui_event_Screen1_Button1(change);
     // ui_Screen1_Button1->state=1;
      
   // lv_scr_load_anim(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 500, false);
      
    //  lv_scr_load_anim(ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 500, false);

      // lv_scr_load_anim(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 500, false);
     
         
   
    

   
}

void loop()
{
    lv_timer_handler(); /* let the GUI do its work */
    delay(5);
//     if(digitalRead(buttonPin) == LOW)
//     {
//      if(digitalRead(buttonPin) == HIGH&&flag==0)
//     {
//          lv_scr_load_anim(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 500, false);
//          flag=1;
//          asdadsa
//     }
    
//     }
//   if(digitalRead(buttonPin) == LOW)
//     {
//       if(digitalRead(buttonPin) == HIGH&&flag==1)
// {
//      lv_scr_load_anim(ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 500, false);
//      flag=0;
// }

//     }

   
}
