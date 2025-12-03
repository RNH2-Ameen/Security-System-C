#include <stdio.h>
#include <stdlib.h>

enum SensorState {
    SAFE,             
    MOTION_DETECTED   
};

const int CORRECT_PASS = 1234;
const int MAX_ATTEMPTS = 3;

void run_security_check(int sensor_state);

int main() {
    int sensor_input;

    printf("Security System Booting Up...\n");

    while (1) {
        printf("\n----------------------------------\n");
        printf("System Armed. Enter sensor state (1=Motion, 0=Safe): ");
        
        if (scanf("%d", &sensor_input) == 1) {
            
            if (sensor_input != SAFE && sensor_input != MOTION_DETECTED) {
                 printf("Invalid input value. Please use 0 or 1.\n");
                 continue;
            }
            run_security_check(sensor_input);
        } else {
            printf("Invalid input type. Please enter a number.\n");
            while (getchar() != '\n');
        }
    }
    return 0;
}

void run_security_check(int sensor_state) {
    static int failed_attempts = 0;
    static int system_locked = 0; 

    int entered_pin; 

    if (system_locked) {
        printf("!! SYSTEM LOCKED DOWN! MAX ATTEMPTS REACHED. !!\n");
        return; 
    }

    if (sensor_state == MOTION_DETECTED) {
        printf(" MOTION DETECTED! Attempts remaining: %d. Enter password: ", MAX_ATTEMPTS - failed_attempts);
        
        if (scanf("%d", &entered_pin) == 1) {
            
            if (entered_pin == CORRECT_PASS) {
                printf(" Access Granted. System Disarmed.\n");
                failed_attempts = 0; 
            } else {
                failed_attempts++;
                printf(" Wrong PIN! Alarm triggered.\n");

                if (failed_attempts >= MAX_ATTEMPTS) {
                    system_locked = 1;
                    printf("!!! SYSTEM IS PERMANENTLY LOCKED. !!!\n");
                }
            }
        } else {
            printf("Invalid password input type. Alarm remains active.\n");
            while (getchar() != '\n');
        }
    } else {
        printf("System is monitoring. No motion detected.\n");
    }
}
