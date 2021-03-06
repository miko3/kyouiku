﻿// ※ヘッダコメントは絶対に書いてください。（面倒でも！）

/////////////////////////////////////////
// ファイル名：SampleApp.cpp
// 概要　　　：教育用のサンプルプログラムです。
// 履歴　　　：新規作成 2017/10/07 miko
/////////////////////////////////////////
#include "stdafx.h"

// 関数を宣言する場合は注意
// プロトタイプ宣言
void kansu();
void kansu_hikisu(int hikisu);
void kansu_hikisu(int hikisu1, int hikisu2);
int cal_plus(int hikisu1, int hikisu2);

/////////////////////////////////////////
// メイン処理
//  ここから処理が始まる
/////////////////////////////////////////
int main()
{
	// --------------------------------------------------------------
	// ◆変数
	// 値を保持する為の箱
	//   int :数値  →floatとかdoubleとかもあるけど、適材適所に…
	//   char:文字
	int  suji = 0;
	char moji = 'a';

	// --------------------------------------------------------------
	// ◆値を画面に表示する
	// 「\n」は画面で改行する為のお約束！
	// %d:数字
	// %s:文字列
	// %c:１文字(%sと比べてややこしい！)
	printf("◆変数\n");
	printf("数字  :suji = %d\n", suji);
	printf("１文字：moji = %c\n", moji);
	printf("\n");

	// --------------------------------------------------------------
	// ◆四則演算
	//  + : 足し算  ex) suji + 1
	//  - : 引き算  ex) suji - 1
	//  * : 掛け算  ex) suji * 2
	//  / : 割り算  ex) suji / 2
	printf("◆四則演算\n");
	printf("1 + 1 = %d\n", 1 + 1);
	printf("suji + 1 = %d\n", suji + 1);
	printf("\n");

	// --------------------------------------------------------------
	// ◆配列
	//  一つの箱の中に複数の値を入れることができる
	//  [n]…添字：0からスタートするので注意！
	int  suji_array[5] = { 1,2,3,4,5 };
	char moji_array[5] = {'a', 'b', 'c', 'd', 'e'};

	printf("◆配列\n");
	printf("suji_array[0] = %d\n", suji_array[0]);
	printf("suji_array[1] = %d\n", suji_array[1]);
	printf("suji_array[2] = %d\n", suji_array[2]);
	printf("suji_array[3] = %d\n", suji_array[3]);
	printf("suji_array[4] = %d\n", suji_array[4]);
	printf("\n");

	// エラーにはならないが、存在しない場所を見てしまっているので変な値が表示される
	printf("※配列の外へアクセスした場合\n");
	printf("suji_array[5] = %d\n", suji_array[5]);
	printf("\n");

	// --------------------------------------------------------------
	// ◆for文
	//  繰り返して処理をする時に役に立つ！
	int i = 0;
	printf("◆for文\n");
	// 5回繰り返す処理
	for (i = 0; i < 5; i++) {
		printf("iの値:[%d]\n", i);
		printf("suji_array[%d] = %d\n", i, suji_array[i]);
	}

	printf("\n");

	// --------------------------------------------------------------
	// ◆if文
	//  条件に応じて処理を振り分けることができる
	int joken = 1;
	printf("◆if文\n");

	if (joken == 1)
	{
		printf("jokenが1であればこれが表示される\n");
	}
	else
	{
		printf("jokenが1でなければこれが表示される\n");
	}

	printf("\n");
	printf("※条件式の罠\n");

	if (joken = 2)
	{
		printf("比較する際は「==」であることに注意\n");
		printf("「=」としてしまうと「joken = %d」と値が書き換わってしまう\n", joken);
	}

	printf("\n");

	// --------------------------------------------------------------
	// ◆関数の利用
	printf("◆関数\n");
	// 関数「kansu」の呼び出し
	kansu();
	printf("\n");

	// 引数を渡して関数を実行する
	kansu_hikisu(100);
	printf("\n");
	// 引数を複数渡して実行
	kansu_hikisu(1, 2);
	printf("\n");

	int result = 0;
	result = cal_plus(100, 200);
	printf("関数からの戻り値は「%d」です\n", result);
	printf("\n");

    return 0;
}

// =========================================================================================
// ◆関数の宣言
//  特定の処理をまとめたパーツ

/////////////////////////////////////////
// 関数名：kansu
// 概要　：メッセージを出力するだけの簡単な関数
// 引数　：なし
// 戻り値：なし
/////////////////////////////////////////
void kansu() {
	printf("関数を呼び出しました。");
}

// ※「引数」を渡すことで呼び出し元の処理と値を共有できる
////////////////////////////////////////////////////
// 関数名：kansu_hikisu
// 概要　：引数を受け取り、受け取った値をメッセージを出力する関数
// 引数　：(int)hikisu 試しに数字を渡す
// 戻り値：なし
////////////////////////////////////////////////////
void kansu_hikisu(int hikisu) {
	printf("引数「%d」を受け取りました。\n", hikisu);

	// スコープについて
	// 同じファイルの中に同じ名前の変数があっても、関数内に存在しないと使えない
	// printf("%d\n", suji);
}

// ※引数は複数渡すこともできる
////////////////////////////////////////////////////
// 関数名：kansu_hikisu
// 概要　：引数を受け取り、受け取った値をメッセージを出力する関数
// 引数　：(int)hikisu1 試しに数字を渡す
// 引数　：(int)hikisu2 試しに数字を渡す
// 戻り値：なし
////////////////////////////////////////////////////
void kansu_hikisu(int hikisu1, int hikisu2) {
	printf("引数「%d」と「%d」を受け取りました。\n", hikisu1, hikisu2);
	printf("%d + %d = %d\n", hikisu1, hikisu2, hikisu1 + hikisu2);
}

// 関数の頭にある型が「void」から「int」に替わっていることに注意！
// ※雑談：void…空 → この関数からは何も値を返しません！ってことを宣言している
////////////////////////////////////////////////////
// 関数名：cal_plus
// 概要　：受け取った２つの値を加算する
// 引数　：(int)hikisu1 試しに数字を渡す
// 引数　：(int)hikisu2 試しに数字を渡す
// 戻り値：(int)hikisu1とhikisu2を加算した結果を返す
////////////////////////////////////////////////////
int cal_plus(int hikisu1, int hikisu2) {
	printf("引数「%d」と「%d」を受け取りました。\n", hikisu1, hikisu2);
	
	// 受け取った引数を足して、その結果を呼び出し元(main関数)に返す
	return hikisu1 + hikisu2;
}

