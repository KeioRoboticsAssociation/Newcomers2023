# 新入生向けプログラム雛形(Nucleo f303k8 ,mbed OS v6.15)

## 前準備
vscodeに、platoform io ide　をインストールしておく

git をインストールしておく

コードの書き方については、()を参照。

## 初回使用時の準備
1. clone してくる
1. VSCode で開く
1. VSCodeの画面下のターミナルのアイコンを開き、`pio system info`を実行して、python executableのパスをコピーする
![image](https://user-images.githubusercontent.com/42294158/193441843-c60f4508-5ce7-407b-a729-f37bd8822ad9.png)
![image](https://user-images.githubusercontent.com/42294158/193441875-a5dda286-e0c9-47c3-a6b3-673de7359cf7.png)

1. ターミナルで`<python executableのパス> -m pip install jinja2 intelhex future prettytable six jsonschema`する
1. 普通の PlatformIO プロジェクトとして使う


### 注意
mbedignore でコンパイルが省略されている機能を使用するときは`.mbedignore`ファイルを編集してください
