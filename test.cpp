#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
double profit = 0;//T1
double bonus = 0;
int score;//T2
long long n3;//T3
long long original3;
long long reversed3 = 0;
int temp1 = 0;//T4
int temp2 = 0;
int temp3 = 0;
long long n5;//T5
long long a5;
long long sum5=0;
int temp5 = 1;
long long num5;
int i6;//T6
int j6;
long long pairs7[21];//T7
int month7;


int main() {
    int i;
    cout << "你想要检查哪一道题目的结果" << endl;
    cin >> i;
    switch (i) {
    case 1:
        cout << "请输入利润（万元）" << endl;
        cin >> profit;
        if (profit < 0.0) {
            cout << "输入无效：利润应为非负数。\n";
            return 0;
        }

        if (profit <= 10.0) {
            bonus = profit * 0.10;
        }
        else if (profit <= 20.0) {
            bonus = 10.0 * 0.10
                + (profit - 10.0) * 0.075;
        }
        else if (profit <= 40.0) {
            bonus = 10.0 * 0.10
                + 10.0 * 0.075
                + (profit - 20.0) * 0.05;
        }
        else if (profit <= 60.0) {
            bonus = 10.0 * 0.10
                + 10.0 * 0.075
                + 20.0 * 0.05
                + (profit - 40.0) * 0.03;
        }
        else if (profit <= 100.0) {
            bonus = 10.0 * 0.10
                + 10.0 * 0.075
                + 20.0 * 0.05
                + 20.0 * 0.03
                + (profit - 60.0) * 0.015;
        }
        else {
            bonus = 10.0 * 0.10
                + 10.0 * 0.075
                + 20.0 * 0.05
                + 20.0 * 0.03
                + 40.0 * 0.015
                + (profit - 100.0) * 0.01;
        }
        cout << "应当发放奖金总数为" << bonus << "万元";
        break;
    case 2:
        cout << "请输入电影分数" << endl;
        cin >> score;
        if (score > 10 || score < 0) {
            cout << "输入无效";
            return 0;
        }
        if (score >= 9) {
            cout << "你认为电影很经典" << endl;
        }
        else if (score >= 7 && score <= 8) {
            cout << "你认为电影非常好" << endl;
        }
        else if (score >= 5 && score <= 6) {
            cout << "你认为电影一般" << endl;
        }
        else {
            cout << "你认为电影很烂" << endl;
        }
        break;
    case 3:
        
        cout << "请输入一个整数：";
        if (!(cin >> n3)) {
            cout << "输入无效：请输入整数。" << endl;
            return 1;
        }

        if (n3 < 0) {
            printf("%lld 不是回文数。\n", n3);
            return 0;
        }

        original3 = n3;
        while (n3 > 0) {
            reversed3 = reversed3 * 10 + n3 % 10;
            n3 /= 10;
        }

        if (original3 == reversed3) {
            printf("%lld 是回文数。\n", original3);
        }
        else {
            printf("%lld 不是回文数。\n", original3);
        }
        break;
    case 4:
        for (int i4 = 100; i4 <= 999; i4++) {
            temp1 = i4 / 100;
            temp2 = i4 /10%10;
            temp3 = i4 % 10;
            if (i4 == pow(temp1, 3) + pow(temp2, 3) + pow(temp3, 3))
                cout << i4 << endl;
        }
        break;
    case 5:
        cout << "请输入n" << endl;
        cin >> n5;
        cout << "请输入a" << endl;
        cin >> a5;
        for (int i5 = 1; i5 <= n5; i5++) {
            num5 = num5 + a5 * temp5;
            temp5 = temp5 * 10;
            sum5 = sum5 + num5;
        }
        cout << sum5 << endl;
        break;
    case 6:
        
        printf("9*9 乘法口诀表：\n");
        for (i6 = 1; i6 <= 9; ++i6) {
            for (j6 = 1; j6 <= i6; ++j6) {
                printf("%d*%d=%-2d  ", j6, i6, i6 * j6);
            }
            printf("\n");
        }
        break;
    case 7:
        
        pairs7[1] = 1;
        pairs7[2] = 1;
        for (month7 = 3; month7 <= 20; ++month7) {
            pairs7[month7] = pairs7[month7 - 1] + pairs7[month7 - 2];
        }

        printf("月份\t兔子总对数\t兔子总只数\n");
        for (month7 = 1; month7 <= 20; ++month7) {
            printf("%2d\t%lld\t\t%lld\n",
                month7, pairs7[month7], pairs7[month7] * 2);
        }
        break;
    case 8: {
        int peaches8 = 1;   /* 第 10 天早上剩下的桃子数 */
        int day8;

        for (day8 = 9; day8 >= 1; --day8) {
            peaches8 = (peaches8 + 1) * 2;
        }

        printf("第一天共摘了 %d 个桃子。\n", peaches8);
        break;
    }
    default:
        cout << "无效的选择" << endl;
        break;
    }
    return 0;
}