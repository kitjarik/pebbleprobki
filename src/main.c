#include "pebble.h"

Window *window; /*создаем окно по имени... окно! человек человеку волк, а зомби зомби зомби. */

int main(void) {
  window = window_create(); /* выделяем память и создаем окно с параметрами по умолчанию  http://goo.gl/mdb5B9*/
  window_stack_push(window, true); /* настраиваем анимацию при открытии этого окна. Так как оно у нас единственное - 	анимания будет показываться при переходе из меню в приложение.  http://goo.gl/jXG3aw */
  app_event_loop(); /* ждем действий в бесконечном цикле  http://goo.gl/7hLyRX */
  window_destroy(window); /* очищаем память и уничтожаем окно http://goo.gl/G3FJ6i */
	window_set_background_color(window, GColorBlack);
	TextLayer *text_layer;
	text_layer = text_layer_create(GRect(0, 0, 144, 168));
	text_layer_set_text_color(text_layer, GColorWhite);
	text_layer_set_background_color(text_layer, GColorClear);
	text_layer_set_text_alignment(text_layer, GTextAlignmentCenter);
	text_layer_set_font(text_layer, fonts_get_system_font(FONT_KEY_GOTHIC_28_BOLD));
	layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer));
	text_layer_set_text(text_layer, "Hi, habrahabr!");
	text_layer_destroy(text_layer);
}