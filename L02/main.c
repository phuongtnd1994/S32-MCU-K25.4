/*
    B1: Cấp clock cho PORT D -> PCC
    B2: Cấu hình PORT cho Pin PTD15 -> GPIO -> "PCR->MUX"
    B3: Cấu hình GPIO cho Pin PTD15 là output -> PDDR
    B4: Blink LED vs cycle time 3s
 */

void blink_LED(int cycle_ms)
{
    // Turn on LED
    GPIO_clearPin(0);
    // Delay
    delay_ms(cycle_ms / 2);

    // Turn off LED
    GPIO_setPin(0);
    delay_ms(cycle_ms / 2);
}

void main()
{
    // Blink LED
    // 1. Cấu hình gpio cho pin PTD0 là output
    GPIO_int();
    // Turn off LED
    GPIO_setPin(0);
    // 3. Blink LED theo cycle time
    while (1)
    {
        blink_LED(3000);
    }
}

// Driver
#define GPIO (001)
enum mode
{
    INPUT,
    OUTPUT
};

void GPIO_int(void)
{
    // Cấp clock cho PORT
    Hw_GPIO_enableClock();
    // Cấu hình gpio
    Hw_GPIO_setMode(GPIO);
    // Cấu hình output
    Hw_GPIO_setDirection(OUTPUT);
}

void GPIO_setPin(int pin);
void GPIO_clearPin(int pin);

// HAL
void Hw_GPIO_enable_clock(void)
{
    PCC->PCC
}

void Hw_GPIO_setModel(int mode)
{
}

void Hw_GPIO_setDirection(enum mode direction)
{
}