# Nanggong
![nanggong1](https://github.com/SanmaLD/nanggong/assets/64263022/63e2bec8-3f93-4793-9692-afcebdd20ee5)

![nanggong1](https://github.com/SanmaLD/nanggong/assets/64263022/9edbd3ac-5dd5-47c5-85f2-c5192f3aced0)
![nanggong2](https://github.com/SanmaLD/nanggong/assets/64263022/4f8db130-d457-4eec-899d-e145f3addb18)


Nanggong is a 63-key/60% handwired ortholinear keyboard built to fulfill my desire for an ortholinear layout while retaining important features such as arrow keys, numbers, and the standard 1.25u Ctrl key. This design caters to the needs of both programmers (with arrow keys) and gamers (featuring number keys and a 1.25u Ctrl size).

The keyboard is built using Arduino Pro Micro Atmega32u4 and QMK Firmware, and firmware has been created to support underglow and VIA Software.

# Material
<ul>
<li>63x: Cherry compatible switches.</li>
<li>63x: Diodos (1N4148).</li>
<li>58x: Cherry compatible keycaps.</li>
<li>4x: 1.25u keycaps.</li>
<li>1x: 2u keycaps.</li>
<li>1x: Arduino Pro Micro Atmega32u4.</li>
<li>8x: LED WS2812/WS2812B.</li>
<li>2-3 meters of Cable (I recommend thin cable for easy cable management, im using AWG22 Cable).</li>
</ul>

For the case file you can make your own at (http://builder.swillkb.com/) to suit your preferences, then order at the acrylic laser cutting service in your place.

# Steps
Steps.
1. install the switch to the plate
2. connect the cable according to the schematic image below (there are 2 cables, for colom cable and row cable).<br>
   ![skema](https://github.com/SanmaLD/nanggong/assets/64263022/b26b0f05-9515-426d-99f8-65e167c2a5df)
3. then connect the row cable to the pro micro pin (as shown below)<br>
   ![skema1](https://github.com/SanmaLD/nanggong/assets/64263022/97492c07-4be4-468c-8fee-12c93c101b1e)
5. and then connect the col cable to the pro micro pin (as shown below)<br>
   ![skema2](https://github.com/SanmaLD/nanggong/assets/64263022/a75fa834-a1bc-4708-b67a-6d5ed6196734)
6. after that prepare the software to flash the arduino pro micro, namely using the QML Toolbox software (you can download it <a href="https://github.com/qmk/qmk_toolbox/releases">here</a>
7. then after installing the qmk toolbox application, select the Nanggong Hex file that can be obtained at <a href="https://github.com/SanmaLD/nanggong/blob/9bf8f2b50f54f4ac732776bcba25513b4e876cad/nanggong_via.hex">here</a>, make sure the MCU has been selected ATmega32u4, and check the auto-flash checklist.<br>
   ![flash](https://github.com/SanmaLD/nanggong/assets/64263022/898cb77b-54a9-43a0-ac19-753c601b15e9)
8. after that jumper the reset pin on the arduino until the indicator light changes on arduino and remove the jumper, then wait until the qmk toolbox display displays a successful message eating your handwiring keyboard can be used.<br>
   ![jumper](https://github.com/SanmaLD/nanggong/assets/64263022/8dce04d2-1f30-44f9-bad0-5aceb3b6438a)
