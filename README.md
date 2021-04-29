# Embedded_Project

# SeatHeatingApplication

# Activity_1

## If the person sit in the car seat then the ButtonSensor activate and if the person turns ON the heater then LED Glows

|ON|OFF|
|:--:|:--:|
|![ON](https://user-images.githubusercontent.com/62166597/115904289-3d88a080-a482-11eb-8dac-4baad5d98b64.PNG)|![OFF](https://user-images.githubusercontent.com/62166597/115904238-2e095780-a482-11eb-99fa-67ae25f4005d.PNG)|

# Activity_2
## If both the above conditions are true, then input analog temperature readings are converted into digital values.
![ADC](https://user-images.githubusercontent.com/62166597/116454135-4a8c0200-a87d-11eb-9efc-683aa5aa190a.PNG)

# Activity_3

## Using PWM the digital values are shown in Oscilloscope

|PWM_20%|PWM_40%|
|:--:|:--:|
|![PWM_20%_Dutycycle](https://user-images.githubusercontent.com/62166597/116469423-c68f4580-a88f-11eb-9c2c-953fafc5e026.PNG)|![PWM_40%_Dutycycle](https://user-images.githubusercontent.com/62166597/116469426-c7c07280-a88f-11eb-8d1c-bb1dd61f817f.PNG)
|PWM_70%|PWM_95%|
|   |   |
![PWM_70%_Dutycycle](https://user-images.githubusercontent.com/62166597/116469430-c8590900-a88f-11eb-8774-36a076978a28.PNG)|![PWM_95%_Dutycycle](https://user-images.githubusercontent.com/62166597/116470358-f3902800-a890-11eb-8dd1-09ce8dfc598b.PNG)

# Activity_4

## The digital temperature values can be visualized in serial monitor using USART protocol
![SerialCommunication](https://user-images.githubusercontent.com/62166597/116560550-1cf79500-a91f-11eb-88a7-6f4e6a7f4833.PNG)

## Functioning of Application
![SeatHeatingApplication](https://user-images.githubusercontent.com/62166597/116562560-e3278e00-a920-11eb-8e74-420d2a79bae5.gif)


|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/MeherThanmaiee/Embedded_Project/actions/workflows/Compile.yml/badge.svg)](https://github.com/MeherThanmaiee/Embedded_Project/actions/workflows/Compile.yml)|[![Cppcheck](https://github.com/MeherThanmaiee/Embedded_Project/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/MeherThanmaiee/Embedded_Project/actions/workflows/CodeQuality.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/da59f52b107e4b7bb4f5730421aa8c0a)](https://www.codacy.com/gh/MeherThanmaiee/Embedded_Project/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=MeherThanmaiee/Embedded_Project&amp;utm_campaign=Badge_Grade)|
