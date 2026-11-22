// 41. Clock Angle
#include <stdio.h>
#include <math.h>

int main() {
    int h, m;
    float hourAngle, minAngle, angle;
    printf("Enter hour (1-12) and minute (0-59): ");
    scanf("%d %d", &h, &m);
    if (h < 1 || h > 12 || m < 0 || m > 59) {
        printf("Invalid time\n");
        return 0;
    }
    h = h % 12;
    hourAngle = 0.5 * (h * 60 + m);   /* 30 deg per hour + 0.5 deg per minute */
    minAngle  = 6 * m;                 /* 6 deg per minute */
    angle = fabs(hourAngle - minAngle);
    if (angle > 180)
        angle = 360 - angle;
    printf("Smaller angle = %.2f degrees\n", angle);
    return 0;
}
