// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: Thermostat

#include "ui.h"
#include "OneWire.h"
// 定义 DS18B20 数据线的引脚
const int oneWireBus = 2;  // 这里假设 DS18B20 数据线连接到 Arduino 的引脚 2
// OneWire oneWire(oneWireBus);

void fan_speed_value(lv_event_t * e)
{
	// 读取风扇转速
    // int fanSpeed = 88; // 假设有一个函数read_fan_speed()用于读取风扇的转速
    int fanSpeed = lv_slider_get_value(ui_Fan_Speed_Control);

    // // 将转速数值转换为字符串
    // char fanSpeedStr[10];
    // snprintf(fanSpeedStr, sizeof(fanSpeedStr), "%d RPM", fanSpeed);

    // // 更新界面上显示风扇转速的标签元素
    // lv_label_set_text(ui_Fan_Speed_Label, fanSpeedStr); // 假设ui_Fan_Speed_Label是显示风扇转速的标签元素
     lv_slider_set_value(ui_Fan_Speed_Control, fanSpeed, LV_ANIM_OFF); 
	// Your code here
}
