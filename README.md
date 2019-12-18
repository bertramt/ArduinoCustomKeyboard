# ArduinoCustomKeyboard
Custom Arduino Micro keyboard

I needed a custom keyboard with arrow keys for the [pikiosk](https://github.com/bertramt/pikiosk) project. Additionally I added next tab, previous tab and a reboot sequence to round out the project.  I selected a Arduino Micro for this project as it can function as a USB HID device.

## Notes
I wanted to use screw terminals and was unable to find a screw terminal adapter for an Ardruino Micro so I used an Arduino Nano Adapter.  The Nano screw terminal adapter works if you line the D12 on the Micro (USB end) with the D12 on the adapter.  When you to this you will see that two pins on each row of the Micro hang past their respective rows.  In my case this was fine as I didn't need those pins.  The labels on the adapter should for the most part line up with the pins on your Ardiuino Micro. I used D2-D7 and both ground screws and the internal pullup resistors to keep wiring as simple as possible. 

## Parts List
* [Arduino Micro](https://www.amazon.com/gp/product/B00AFY2S56/)
* [Enclosure](https://www.amazon.com/gp/product/B0787B1GT3)
* [Button Switches](https://www.amazon.com/gp/product/B0119FH5Z2/)
* [Nano Screw Terminal Adapter](https://www.amazon.com/gp/product/B0788MLRLK)
* Wire (Cat 5 strands work well)
* Micro USB Cord
* Zip Ties

## Building
The included drill template is what I used to layout the holes. I used OpenSCAD to generate the template and exported it to PDF to print. I also used a knife to notch a slot for the USB cord coming out the bottom.  I left a left a little slack in the usb cord and put a couple zip ties on the cord to prevent it from being pulled out. I additionally hot glued the adapter to the back of the box and added some glue to help seal around the USB cord. Maybe should also be noted that I soldered stands of cat 5 to my switches and wired them up and tested everything one more time before glued eveything into its resting place.

## Wiring
```
D2 - UP 
D3 - DOWN
D4 - LEFT
D5 - RIGHT
D6 - NEXT TAB (ALT + TAB)
D7 - PREV TAB (ALT + SHIFT + TAB)
GND - (I used both terminals so that I didn't have too many wires in one screw terminal.)
```

## Images
![Inside](https://github.com/bertramt/ArduinoCustomKeyboard/raw/master/Images/KeyboardInside.jpg)
![Outside](https://github.com/bertramt/ArduinoCustomKeyboard/raw/master/Images/KeyboardOutside.jpg)
