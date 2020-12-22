# M5Stack_RunCPM_vt100_CardKB
M5Stackで動く超小型CP/Mマシン

![画像1](images/image1.png)<br><br>

"VT100 Terminal Emulator"と"Z80 CP/M 2.2 emulator"を組み合わせた、M5Stackで動く超小型CP/Mマシンです。<br>
(注意：ディスプレイが1行53文字のなので、1行80文字を前提にしているプログラムは表示が崩れます。)<br><br>
ベースにしたオリジナルはこちら。<br>
VT100 Terminal Emulator for Arduino STM32 <https://github.com/ht-deko/vt100_stm32><br>
RunCPM - Z80 CP/M 2.2 emulator <https://github.com/MockbaTheBorg/RunCPM><br>

---

### 必要な物 ###
* [M5Stack](http://www.m5stack.com/ "Title") (Fireで動作確認をしました。)<br>
* Arduino IDE (1.8.13で動作確認をしました。)<br>
* [Arduino core for the ESP32](https://github.com/espressif/arduino-esp32 "Title")
* [LovyanGFXライブラリ](https://github.com/lovyan03/LovyanGFX "Title")
* [SDdFatライブラリ](https://github.com/greiman/SdFat "Title") (1.1.4で動作確認をしました。2.x.xではコンパイルエラーになります。)
* [M5Stack用カード型キーボードユニット](https://www.switch-science.com/catalog/5689/ "Title")
* microSD カード
* [Thumb type keyboard frame for M5Stack & CardKB](https://www.thingiverse.com/thing:4392325 "Title") (必要に応じて。）
<br>

ライブラリはArduino IDEの[スケッチ | ライブラリをインクルード |ライブラリを管理...] からインストールすると簡単です。

---

### CardKBでの制御文字の入力方法 ###
* Ctrl-C : Fn-C
* Ctrl-H : Fn-H

---

### 参考資料 ###
RunCPM用のディスクの作り方などは、DEKO（@ht_deko）さんのこちらの記事を参照してください。<br>

* [RunCPM (Z80 CP/M 2.2 エミュレータ)](https://ht-deko.com/arduino/runcpm.html "Title")<br><br><br>

---

### 補足 ###
Nochi(@shikarunochi)さんから情報を頂きました。<br>
キーボードのI2Cアドレスを変えれば、[M5Stack Faces QWERTYパネル](https://www.switch-science.com/catalog/6611/ "Title")でも動くそうです。

![画像2](images/image2.png)<br><br>
![画像3](images/image3.png)<br><br>
<br><br>

---

### Facesでの制御文字の入力方法 ###
* Ctrl-C : Alt-V

<br><br>


