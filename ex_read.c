/* ex_read.c — 演習②：CSV を読んで集計する（約10分）         */
/* TODO が4箇所あります。上から順に埋めてください。            */
/* 事前に ex_write を実行して sensor_ex.csv を作成しておくこと */

#include <stdio.h>
#include <string.h>

typedef struct {
    char  location[32];
    int   temperature;
    float humidity;
} SensorData;

/* --------------------------------------------------------
 * TODO 1: parseSensorLine を実装する
 *   line（CSV の1行）を SensorData に変換する。
 *   戻り値: 成功=1、失敗=0
 *
 *   ヒント: sscanf(line, "%31[^,],%d,%f",
 *                  out->location, &out->temperature, &out->humidity)
 *   ポイント: sscanf の戻り値は「読み取れた項目数」
 *             3項目読めたら成功（== 3）
 * -------------------------------------------------------- */
int parseSensorLine(const char *line, SensorData *out) {

    return 0;
}

int main(void) {
    FILE *fp = fopen("sensor_ex.csv", "r");
    if (fp == NULL) {
        fprintf(stderr, "sensor_ex.csv が見つかりません（先に ex_write を実行してください）\n");
        return 1;
    }

    char line[256];
    SensorData data;
    int count = 0;

    printf("=== sensor_ex.csv の内容 ===\n");

    /* TODO 2: while ループの条件を完成させる
     *   1行ずつ読んで、読めた行だけ処理する。
     *   ヒント: fgets(line, sizeof(line), fp) が NULL でない間ループする  */
    while (/* TODO 2 */) {
        if (parseSensorLine(line, &data)) {

            /* TODO 3: printf で表示する
             *   表示したい内容: 場所 / 気温（整数）/ 湿度（小数点1桁）
             *   例: "実験室: 23°C / 58.0%"
             *   ヒント: %d, %.1f, %% を使う                              */
            printf(/* TODO 3 */);

            count++;
        }
    }

    /* TODO 4: ループが終わったら合計件数を表示する
     *   例: "合計: 5 件"                                                  */

    fclose(fp);
    fp = NULL;
    return 0;
}
