#include <stdio.h>

int main(void) {
    unsigned int N, a, b, c, d, e, f, g;
    if (scanf("%u %u %u %u %u %u %u %u", &N,&a,&b,&c,&d,&e,&f,&g) != 8) return 0;

    // ตรวจความถูกต้องของเวลา
    if (g < f || (g - f) > N) {
        printf("Error");
        return 0;
    }

    unsigned int dur = g - f;       // ระยะเวลาที่ใช้
    unsigned int money = b;         // ค่าพื้นฐาน

    if (dur > a) {
        unsigned int extra = dur - a;      // ส่วนที่เกินฟรี
        if (extra <= c) {
            money += extra * d;            // ทั้งหมดคิดเรท d
        } else {
            money += c * d;                // เต็มโควต้าเรท d
            money += (extra - c) * e;      // ส่วนที่เหลือคิดเรท e
        }
    }

    printf("%u", money);
    return 0;
}