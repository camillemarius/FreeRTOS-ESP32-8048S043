// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: SquareLine_Project

#include "ui.h"
#include "esp_now/wrapper_esp_now_com.hpp"

esp_now_com *instance = NULL;

void update_slider_by_state_change (const lv_obj_t* slider_obj, lv_obj_t* switch_obj) {

	int32_t value = lv_slider_get_value(slider_obj);

	if(value <= 0) {
		lv_obj_clear_state(switch_obj,LV_STATE_CHECKED);
	}
	else {
		lv_obj_add_state(switch_obj,LV_STATE_CHECKED);
	}
	
}
void update_switch_by_value_change (const lv_obj_t* switch_obj, lv_obj_t* slider_obj) {
	
	bool state = lv_obj_has_state(switch_obj, LV_STATE_CHECKED);
	if(state == false) {
		lv_slider_set_value(slider_obj,0,LV_ANIM_ON);
	} else {
		lv_slider_set_value(slider_obj,100,LV_ANIM_ON);
	}
}

void send_data_package_to_esp (int esp_id, int device_id, const lv_obj_t* switch_obj, lv_obj_t* slider_obj) {

	bool state = lv_obj_has_state(switch_obj, LV_STATE_CHECKED);
	int32_t value = 1024;
	if(slider_obj != NULL) {	
		value = lv_slider_get_value(slider_obj);
	}
	// Send Data to ESP's
	if(instance == NULL) {
		instance = wrapper_esp_now_com(0xBC, 0xFF, 0x4D, 0x39, 0xAA, 0x3A);
		wrapper_esp_now_init(instance);
		lv_label_set_text(ui_Label16, "Initialisiert");
	} else {
		lv_label_set_text(ui_Label16, "Nicht Initialisiert");
	}
	wrapper_esp_now_send(instance, device_id, state, value);
}

void event_switch_power_ender(lv_event_t * e)
{
		//lv_label_set_text(ui_Label16, (lv_obj_has_state(ui_Switch_Power_Ender, LV_STATE_CHECKED) ? "On" : "Off"));
		send_data_package_to_esp(0, 1, ui_Switch_Power_Ender, NULL);
}

void event_slider_brightness_ender(lv_event_t * e)
{
	// Your code here
	update_slider_by_state_change(ui_Slider_Brightness_Light_Ender,ui_Switch_Power_Light_Ender);
	send_data_package_to_esp(0, 2, ui_Switch_Power_Ender, ui_Slider_Brightness_Light_Ender);
}

void event_switch_power_light_ender(lv_event_t * e)
{
	// Your code here
	update_switch_by_value_change(ui_Switch_Power_Light_Ender, ui_Slider_Brightness_Light_Ender);
	send_data_package_to_esp(0, 2, ui_Switch_Power_Light_Ender, ui_Slider_Brightness_Light_Ender);
}

void event_slider_speed_alveo3d(lv_event_t * e)
{
	// Your code here
	update_slider_by_state_change(ui_Slider_Speed_Alveo3D,ui_Switch_Power_Alveo3D);
	send_data_package_to_esp(0, 3, ui_Switch_Power_Alveo3D, ui_Slider_Speed_Alveo3D);

}

void event_power_alveo3d(lv_event_t * e)
{
	// Your code here
	update_switch_by_value_change(ui_Switch_Power_Alveo3D, ui_Slider_Speed_Alveo3D);
	send_data_package_to_esp(0, 3, ui_Switch_Power_Alveo3D, ui_Slider_Speed_Alveo3D);
}

void event_switch_power_xiaomi(lv_event_t * e)
{
	// Your code here
	send_data_package_to_esp(0, 4, ui_Switch_Power_Xiaomi, NULL);
}

void event_switch_power_chatcnc(lv_event_t * e)
{
	// Your code here
	send_data_package_to_esp(0, 5, ui_Switch_Power_Chatcnc, NULL);
}

void event_switch_power_light_chatcnc(lv_event_t * e)
{
	// Your code here
	update_switch_by_value_change(ui_Switch_Power_Light_Chatcnc, ui_Slider_Brightness_Light_Chatcnc);
	send_data_package_to_esp(0, 6, ui_Switch_Power_Light_Chatcnc, ui_Slider_Brightness_Light_Chatcnc);

}

void event_slider_brightness_chatcnc(lv_event_t * e)
{
	// Your code here
	update_slider_by_state_change(ui_Slider_Brightness_Light_Chatcnc,ui_Switch_Power_Light_Chatcnc);
	send_data_package_to_esp(0, 6, ui_Switch_Power_Light_Chatcnc, ui_Slider_Brightness_Light_Chatcnc);
	
}

void event_switch_power_xiaomi1(lv_event_t * e)
{
	// Your code here
	send_data_package_to_esp(0, 7, ui_Switch_Power_Xiaomi1, NULL);
}
