/* ex_write.c — 演習①：構造体を CSV に書き出す（約10分） */
/* TODO が3箇所あります。上から順に埋めてください。       */

#include <stdio.h>
#include <string.h>

typedef struct {
    char  location[32];
    int   temperature;
    float humidity;
} SensorData;

/* --------------------------------------------------------
 * TODO 1: writeSensorData を実装する
 *   fp に SensorData を CSV の1行として書き出す。
 *   書き出す形式: "場所,気温,湿度\n"
 *   例:           "実験室,23,58.0\n"
 *
 *   ヒント: fprintf(fp, "%s, ...", data.location, ...);
 * -------------------------------------------------------- */
void writeSensorData(FILE *fp, SensorData data) {

}

int main(void) {
    SensorData records[] = {
        {"実験室", 23, 58.0},
        {"体育館", 31, 75.0},
        {"図書室", 20, 50.0},
        {"職員室", 26, 62.0},
        /* TODO 2: ここに自分でデータを1件追加する
         *         場所・気温・湿度は自由に決めてよい
         *         例: {"屋上", 33, 80.0},              */
    };
    int n = sizeof(records) / sizeof(records[0]);

    /* TODO 3: ファイルを開いて NULL チェックを書く
     *
     *   書き込みモードで開く（ヒント: "w" か "a" か？）
     *
     *   FILE *fp = fopen("sensor_ex.csv", ???);
     *   if (???) {
     *       fprintf(stderr, "ファイルを開けませんでした\n");
     *       return 1;
     *   }                                              */

    for (int i = 0; i < n; i++) {
        writeSensorData(fp, records[i]);
    }

    fclose(fp);
    fp = NULL;

    printf("sensor_ex.csv に書き込みました（%d 件）\n", n);
    return 0;
}
