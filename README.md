# AC-Wattmeter
## Introduction:
A wattmeter is a gadget used to quantify the power coursing through an electrical circuit. It estimates the voltage and current readings simultaneously and duplicates them to give power in watts. An ordinary electronic wattmeter is utilized to screen current and voltage many times each second electronically, then, at that point, duplicate the outcomes in a microprocessor to work out watts. Insights like pinnacle, normal, low watts and kilowatt-hours spent can likewise be determined by the PC. They can watch out for the electrical cable for voltage spikes and power outages.
## Voltmeter:
The voltmeter is an instrument that actions the voltage or likely distinction in volts. It deals with the possibility that the force is produced by the current that is incited by the estimation voltage, and that this force avoids the instrument's pointer. The pointer's avoidance is relative to the likely distinction between the two places. The voltmeter is associated all of the time to the circuit in equal.
## Ammeter:
An ammeter is a gadget that actions electric flow in amperes and can be utilized to quantify either immediate or rotating flow. Since just a small measure of the current is directed through the meter system at high current qualities, an ammeter might quantify a wide scope of current qualities. Most of the current is conveyed by a shunt corresponding with the meter.
## Working of the wattmeter:
A wattmeter estimates the normal worth of item v(t)i(t) = p(t), where v(t) is the voltage with positive reference extremity at +/ - terminal of the potential curl contrasted with the other terminal, and i(t) is current with reference heading streaming into the +/ - terminal. The wattmeter understands P = v(t)i(t) dt, which diminishes to Vrms Irms cos (φ)
## Components of Wattmeter:
1) Arduino 

2) Resistors

3) Capacitor

4) Polarized Capacitor

5) Diode

6) 5.1V 49mA Zener Diode

7) 4.7V 53mA Zener Diode

8) Simple Transformer

9) V sine (sine WAVE Ac voltage source)

10) XOR gate

11) LCD

12) Single phase bridge rectifier

13) Inductor

### Arduino:
Arduino is an open-source gadgets stage that utilizes straightforward equipment and programming to make it simple to utilize. Arduino sheets can take sources of info, for example, light from a sensor or a finger on a button, and convert them to results like turning on a LED or setting off an engine. The pins on your Arduino are the place where you join wires to make a circuit (probably with the assistance of a breadboard and a few wires)

### Resistors:   
A resistor is an electrical part that causes opposition in the progression of flow. They can be found in essentially all electrical organizations and electronic circuits. Opposition is communicated in ohms (Ω). At the point when a current of one ampere (A) goes through a resistor with one volt (V) drop across its terminals, the opposition is estimated in ohms.
R=V/I
#### Working of resistors in the wattmeter circuit
The resistors connected after the capacitor in the voltmeter converts the voltage into 5V from the 12V. Also, the resistors after opamp in power factor are the pull-up resistors. a pull-up resistor ensures a well-defined voltage across the remainder of the circuit when the switch is open.

### Capacitors: 
A capacitor is a gadget for putting away electrical energy that comprises two protected transmitters in nearness. The steady capacitance C of an ideal capacitor is characterized as the proportion of the positive or negative charge Q on every guide to the voltage V between them in the SI arrangement of units.
The steady capacitance C of an ideal capacitor is characterized as the proportion of the positive or negative charge Q on every guide to the voltage V between them in the SI arrangement of units.
C=Q/V

#### Working in the given wattmeter circuit
The capacitor used after the diode in voltmeter and an ammeter is to make the waves smooth
### Diode:
A diode is an electrical part that just empowers flow to stream in one heading. A diode is portrayed in-circuit graphs by a triangle with a line going through one vertex. 
#### Working of diodes in wattmeter
The diodes used in power factors can be used for clamping
### Simple Transformer:
.A transformer is an electrical gadget that moves energy from one rotating flow circuit to at least one different circuit by either expanding (moving forward) or diminishing (venturing down) the voltage. Transformers are utilized for an assortment of uses, including bringing down the voltage of customary power circuits to work low-voltage gadgets like doorbells and toy electric trains and raising the voltage of electric generators to take into account significant distance transmission of electric power
#### Working of transformer in wattmeter circuit
The transformer is used to decrease the voltage from 220V to 12V 
### XOR gate:
#### Working of XOR gate
XOR gate used in power factor gives true output results if one and only one of the inputs to the gate is true and gives 0,1 shift to phase angle.
#### Operational amplifier:
Two amplifiers are used to compare the voltages in power factor.
### INDUCTOR:
In exchanged mode power gadgets, inductors are ordinarily used as energy stockpiling gadgets to deliver DC. The inductor stores energy and conveys it to the circuit to keep current streaming during "off" exchanging periods, taking into consideration geographies with yield voltage surpassing information voltage.

### BRIDGE RECTIFIER:
A bridge rectifier converts mains AC input to DC output. In power supplies, bridge rectifiers are used to provide necessary DC voltages for electronic components or devices.
#### Working of the bridge rectifier:
It was used for full-wave rectification.
#### Power factor:
Arduino measures the power factor by comparing the time difference between current wave form and voltage wave form. After calculating power factor, Arduino displays it on LCD.
