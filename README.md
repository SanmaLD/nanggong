# Nanggong
![nanggong1](https://github.com/SanmaLD/nanggong/assets/64263022/63e2bec8-3f93-4793-9692-afcebdd20ee5)
![nanggong2](https://github.com/SanmaLD/nanggong/assets/64263022/be0d06d4-b755-4835-a7b3-cceaa7c9465c)

Nanggong is a 63-key/60% handwired ortholinear keyboard built to fulfill my desire for an ortholinear layout while retaining important features such as arrow keys, numbers, and the standard 1.25u Ctrl key. This design caters to the needs of both programmers (with arrow keys) and gamers (featuring number keys and a 1.25u Ctrl size).

The keyboard is built using Arduino Pro Micro Atmega32u4 and QMK Firmware, and firmware has been built to support VIA Software so that this keyboard can manage the keys without having to re-flash and already supports underglow WS2812/WS2812b which can be controlled by VIA Software.

# VIA Software
VIA Software is software to help change the configuration of the key functions on the keyboard, besides that it can also set such as macros, rotary encoders and also led lights on the keyboard.
A QMK Vial fork can be found <a href="https://www.caniusevia.com/">here</a>.
![via](https://github.com/SanmaLD/nanggong/assets/64263022/6b060047-832b-409d-b366-78391da47dab)


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

# Pin assignment
```sh
            1     2     3     4     5     6     7     8     9     10    11    12    13
   cols : ["B3", "B2", "B6", "B5", "D7", "E6", "B4", "C6", "D4", "D0", "D1", "D2", "D3"],
   rows : ["D5", "F5", "F6", "F7", "B1"]
```

# Layout
![image](https://github.com/SanmaLD/nanggong/assets/64263022/84df6885-03b5-424b-889c-caaebcaffbd7)

# Steps
Steps.
1. install the switch to the plate
2. connect the cable according to the schematic image below (there are 2 cables, for colom cable and row cable).<br>
   ![skema](https://github.com/SanmaLD/nanggong/assets/64263022/43ec57b0-4c5a-4f82-80e8-33df70ee1e91)
3. then connect the row cable to the pro micro pin (as shown below)<br>
   ![skema1](https://github.com/SanmaLD/nanggong/assets/64263022/cab39628-586c-4cd4-84aa-8b765a18e0c4)
5. and then connect the col cable to the pro micro pin (as shown below)<br>
   ![skema2](https://github.com/SanmaLD/nanggong/assets/64263022/1cc2a538-9496-4952-9b67-025f7f4f94f3)
6. after that prepare the software to flash the arduino pro micro, namely using the QML Toolbox software (you can download it <a href="https://github.com/qmk/qmk_toolbox/releases">here</a>
7. then after installing the qmk toolbox application, select the Nanggong Hex file that can be obtained at <a href="https://github.com/SanmaLD/nanggong/blob/9bf8f2b50f54f4ac732776bcba25513b4e876cad/nanggong_via.hex">here</a>, make sure the MCU has been selected ATmega32u4, and check the auto-flash checklist.<br>
   ![flash](https://github.com/SanmaLD/nanggong/assets/64263022/c3c871fa-4405-41c8-a2bb-b90bfc6f810c)
8. after that jumper the reset pin on the arduino until the indicator light changes on arduino and remove the jumper, then wait until the qmk toolbox display displays a successful message eating your handwiring keyboard can be used.<br>
   ![jumper](https://github.com/SanmaLD/nanggong/assets/64263022/00e55c0c-3018-4768-9156-ec8dc91b3e71)

