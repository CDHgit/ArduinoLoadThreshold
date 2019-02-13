# Arduino Load Sensor Threshold Detector

##### Detect if a load is X times higher than the initial value, and light up an LED if so.

## Code:

The arduino code is stored within the aptly named [arduino folder](Arduino/TriggerOnThreshold/) along with the necessary header files.

The file you will have to with your own threshold, pins, and measurement times is [TriggerOnThreshold.ino](Arduino/TriggerOnThreshold/TriggerOnThreshold.ino).

The most important pieces of this code are these define statments, to be customized to match your required threshold and precision.
```
#define INITIAL_SAMPLES 100 //Number of initial readings to average
#define LOOP_SAMPLES 5 //Number of readings to average every loop
#define THRESHOLD 1.3 //Reading/InitialReading
```


## Hardware:

Load Sensor:            https://www.amazon.com/dp/B01F6IOWDG/ref=twister_B01F6IOW04?_encoding=UTF8&psc=1

Load Cell Amplifier:    https://www.sparkfun.com/products/13879

Wire them as follows:

Arduino Wiring

![Amp and Arduino](https://lh3.googleusercontent.com/i_MtekfR8tXfutyJXn7ZCA4av7aAgkc3LK28ihgxd34YA-vZZV_k_aFEUV-38d4YbM7ugOvmMMlAzvWLYoBjcYcCankpPBbQPDUGzdaeNEPtDf0ezfrvJtQp4Vdl9RxftEKG-hudSVEkEzGhocwomUryB_URmA_nu4qg1cu35ZSXvRBEFdzYMJ2MrJzP7BO5SfWdBvTn0JnzwoHhDz5Ggn0-BV1-MsVcfoACp7CKFoY8xT_WeWlkIiNuLadwKRMOVL0HPTQdMqpbc3sBmCudKi0cYReXP67xiIifWCwXXv1GobU7jaRsQvrbAsn596oPWWPF9j167FsaAHoUzLGX-e5BqVXLXpv5FdylKQRZv60uYuVucbHUOggG8dZ5Rmeav9wdYAujdK0fVFTec2yoWlRTbN_MdFbpA1yjriXVdkC78Lv1vCdMsQXJaw2j_ZN7KE10TLlDqQ_gHSfKvPDaeJAWeXoEjmPZGPSwWp-6MXHk76DP3tnAuUwY1TyLqV7bDFaFXcNj-8c5-VZRTk0Ixj1IwEy29PB7tr1YdBf_BAiWsitDiyYdQIAZgIqO6I__NIUwrVcvK4rj87FSlmQa88yKg0Njgvxg9sxENrAHIz0AtcIOzSLGFnLve-QzrQGJWaGY8r-uQliyCB2DS-D5Sjloa0zV3-f_JSsVGuOy5vgwZ_TejKn8PLwnLQu2zyBHsO62k_VuSC6dBynPVNLjMknr=w811-h608-no)

Load Sensor Wires

![Load Sensor](https://lh3.googleusercontent.com/LkK7uk4K9PXLXiRQStP3iANEznzFbWbZSWzZFerSxj3zaumZtWKk86AxaNQPSnc91_s-Y6VEjWtgWFDfMJJfftQME1qBiJ8TatAfVfnXZL9DWM69xrA6kVo7aDri-P22NqGy60uhMsnRCmigz2wrsyhssHrqY-s6L_wn8g5oZtmSjfSrl9NeYQQ_jCZaobTVxLsjQ5G2ZQPHfll2SeFOK5kY2DMsY_NN6a6rIRltJsn5X1fTudsrZdfWCBdqAsCj1ZXI_Cd0ip9k-R4mSCPakvBrrqYg5YcuX2mpvTmJgrMGjPtuxpfqt36sG1JvB5cLU9AKeCVjtDA-B-hzf-DOJDQwTRd4xO_nq2D-_ThuIZdg5Ht3oZk2DGIVHeBXkwwzXkUkh059qWSU4eiKnzrtgVovPbFv4AN_q8c0fLQXfrvzsYUctUInjC_VM1vun7enoyV7OERb1tdzadveON7HFrLIUkk8ua_e_TewOlgBaRvgm66aYiV2H8qH_qblV8QyKvB4b1O-REE9zDxHL9_3WKlFekKEl4m_oi2s8aUICYhjJ0YWFP_z8dULCXMKOs2f2uWo_fJWpX0cwa4h52PAcD0YWrmS3aco9Zr27hOhKj-VHO-4F-YJN3E1WtSoOxlYlQ6pDaSSAvfu1FuIe7pkRFZKcRcj6QckP3C010mh2-QpyYa1xR9zPRlotc487-PJyzPwn4JXFp8ICgIUGp9UOdke=w811-h608-no)

## Sources:

Header Files: https://github.com/bogde/HX711

General Guide Followed: https://www.brainy-bits.com/load-cell-and-hx711-with-arduino/

Arduino IDE: https://www.arduino.cc/en/main/software

