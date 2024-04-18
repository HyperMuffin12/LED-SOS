#include <furi_hal.h>

int gpio_flashsos_main(void* p) {
    UNUSED(p);   

  // Enable pin C3 for output
  furi_hal_gpio_init_simple(&gpio_ext_pc3, GpioModeOutputPushPull);

do { //First S block
    furi_hal_gpio_write(&gpio_ext_pc3, true); // LED on
    furi_delay_ms(250);
    furi_hal_gpio_write(&gpio_ext_pc3, false); // LED off
    furi_delay_ms(500);

    furi_hal_gpio_write(&gpio_ext_pc3, true); // LED on
    furi_delay_ms(250);
    furi_hal_gpio_write(&gpio_ext_pc3, false); // LED off
    furi_delay_ms(500);

    furi_hal_gpio_write(&gpio_ext_pc3, true); // LED on
    furi_delay_ms(250);
    furi_hal_gpio_write(&gpio_ext_pc3, false); // LED off
    furi_delay_ms(500);

// Begin O block

    furi_hal_gpio_write(&gpio_ext_pc3, true); // LED on
    furi_delay_ms(750);
    furi_hal_gpio_write(&gpio_ext_pc3, false); // LED off
    furi_delay_ms(500);

    furi_hal_gpio_write(&gpio_ext_pc3, true); // LED on
    furi_delay_ms(750);
    furi_hal_gpio_write(&gpio_ext_pc3, false); // LED off
    furi_delay_ms(500);

    furi_hal_gpio_write(&gpio_ext_pc3, true); // LED on
    furi_delay_ms(750);
    furi_hal_gpio_write(&gpio_ext_pc3, false); // LED off
    furi_delay_ms(750);

//Second S block

    furi_hal_gpio_write(&gpio_ext_pc3, true); // LED on
    furi_delay_ms(250);
    furi_hal_gpio_write(&gpio_ext_pc3, false); // LED off
    furi_delay_ms(500);

    furi_hal_gpio_write(&gpio_ext_pc3, true); // LED on
    furi_delay_ms(250);
    furi_hal_gpio_write(&gpio_ext_pc3, false); // LED off
    furi_delay_ms(500);

    furi_hal_gpio_write(&gpio_ext_pc3, true); // LED on
    furi_delay_ms(250);
    furi_hal_gpio_write(&gpio_ext_pc3, false); // LED off
    furi_delay_ms(500);

// Wait 5 seconds before starting again

furi_hal_gpio_write(&gpio_ext_pc3, false); // LED off
    furi_delay_ms(5000);


    
} while(furi_hal_gpio_read(&gpio_button_back)); //Run shits until ok is pressed
  
  furi_hal_gpio_init_simple(&gpio_ext_pc3, GpioModeAnalog); //LED off (floating)

    return 0;
}
