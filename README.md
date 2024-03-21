Языки (Languages): [Русский](#russian), [English](#english).

Текущая версия репозитория / Current repository version: 1.3.1.

## <a id="russian">(Русский) О репозитории</a>

Здесь размещены программы, которые были написаны для управления подсистемами из набора "ОрбиКрафт".

Этот набор является основным для выполнения заданий по направлению "Инженерия космических систем" чемпионата "Профессионалы".

Репозиторий содержит:

- Заголовочный файл, содержащий все функции для работы с подсистемами (**[libschsat.h](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/libschsat.h)**);
- Программы, предназначенные для тестирования датчиков, двигателя, камеры и радиопередатчиков;
- Программы, которые выполняют стабилизацию спутника, съемку окружающего пространства, ориентацию спутника и т. д.

***Все программы написаны на языке C (Си).***

Документация "ОрбиКрафта" (описание подсистем и программы): <http://orbicraft.sputnix.ru/doku.php>

Местами документация содержит плохо написанный код для подсистем "ОрбиКрафта", неясное объяснение их работы и описания функций и констант, вызывающие неопределённость. Также могут не отображаться отдельные веб-страницы и/или навигация.

### Версии репозитория:

- 1.0.
    - Начальная версия репозитория.
- 1.0.1.
    - Были исправлены ссылки в файле README.md.
- 1.0.2.
    - Добавлен подраздел "Версии репозитория" в каждый языковой раздел README-файла;
    - Добавлена ссылка на документацию "ОрбиКрафта";
    - Незначительные изменения комментариев в программах;
    - Исправлены грамматические и пунктуационные ошибки в README-файле;
    - Другие незначительные изменения в репозитории.
- 1.1.
    - Добавлена программа тестирования магнитометра (**[Magn_test.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Magn_test.c)**);
    - Был исправлен текст комментариев во всех существовавших ранее программах;
    - Рабочий код всех существовавших ранее программ получил незначительные изменения;
    - В программу тестирования двигателя ([Motor_test.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Motor_test.c)) добавлены новые комментарии;
    - Другие незначительные изменения в репозитории.
- 1.2.
    - Добавлены программы тестирования одного и нескольких солнечных датчиков (**[Sun_sensor_test.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Sun%20Sensor%20Tests/Sun_sensor_test.c)** and [Some_sun_sensors.c](#ru-fixed-in-1.3.1.));
    - Рабочий код всех существовавших ранее программ получил незначительные исправления;
    - Был исправлен текст комментариев во всех существовавших ранее программах.
- 1.3.
    - Добавлена программа тестирования камеры и высокочастотного (ВЧ) передатчика ([Camera_and_HF_radio.c](#ru-fixed-in-1.3.1.));
    - Рабочий код всех существовавших ранее программ получил незначительные исправления;
    - Был исправлен текст комментариев во всех существовавших ранее программах;
    - Информация о текущей версии репозитория перенесена в начало README-файла.
- **1.3.1. (текущая версия)**
    - **<a id = "ru-fixed-in-1.3.1.">Переименованы следующие программы:</a>**
        1. Camera_and_HF_radio.c  -->  **[Camera_and_HF_test.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Camera_and_HF_test.c)**;
        2. Some_sun_sensors.c  -->  **[Some_sun_sensors_test.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Sun%20Sensor%20Tests/Some_sun_sensors_test.c)**;
    - В программе [Motor_test.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Motor_test.c) исправлены ошибки и улучшена читаемость кода;
    - В программе **Camera_and_HF_test.c** изменено сообщение при успешной отправке фотографии;
    - Изменено описание репозитория во всех языковых разделах;
    - Другие незначительные изменения в репозитории.

## <a id="english">(English) About the repository</a>

These are programs that were written to control subsystems from the "OrbiCraft" construction kit.

This construction kit is used to complete tasks in the "Space System Engineering" field of the "Professionals" (or "Professionaly") championship.

The repository contains:

- The header file that includes all the functions for working with subsystems (**[libschsat.h](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/libschsat.h)**);
- Programs that are used to test sensors, engine, camera and transmitters;
- Programs that executes satellite stabilization, survey of the surrounding space, satellite orientation and so on.

***All programs were written in C.***

"OrbiCraft" documentation (subsystem description and programs): <http://orbicraft.sputnix.ru/doku.php>

In some places the documentation contains poorly written code for "OrbiCraft" subsystems, an unclear explanation of how they work and a descriptions of functions and constants that causes uncertainty. Also, individual website pages and/or website navigation may not be displayed.

### Repository versions:

- 1.0.
    - The initial version of the repository.
- 1.0.1.
    - Links in README.md file were fixed.
- 1.0.2.
    - A subsection "Repository versions" was added in all language sections of the README file;
    - Added a link to the documentation of "OrbiCraft";
    - Minor changes to comments in programs;
    - Grammatical and punctuational errors have been corrected in the README file;
    - Other minor repository changes.
- 1.1.
    - Added magnetometer testing program (**[Magn_test.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Magn_test.c)**);
    - The text of the comments has been corrected in all pre-exsisting programs;
    - The working code of all pre-exsisting programs has received minor changes;
    - New comments have been added to the engine testing program ([Motor_test.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Motor_test.c));
    - Other minor repository changes.
- 1.2.
    - Added testing programms for one and several solar sensors (**[Sun_sensor_test.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Sun%20Sensor%20Tests/Sun_sensor_test.c)** and [Some_sun_sensors.c](#en-fixed-in-1.3.1.));
    - The working code of all pre-exsisting programs has received minor fixes;
    - The text of the comments has been corrected in all pre-exsisting programs.
- 1.3
    - Added the program for testing camera and high frequency (HF) transmitter ([Camera_and_HF_radio.c](#en-fixed-in-1.3.1.));
    - The working code of all pre-exsisting programs has received minor fixes;
    - The text of the comments has been corrected in all pre-exsisting programs;
    - Information about the current repository version has been moved to the beginning of the README file.
- **1.3.1 (current version)**
    - **<a id = "en-fixed-in-1.3.1.">Renamed the following programs:</a>**
        1. Camera_and_HF_radio.c  -->  **[Camera_and_HF_test.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Camera_and_HF_test.c)**;
        2. Some_sun_sensors.c  -->  **[Some_sun_sensors_test.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Sun%20Sensor%20Tests/Some_sun_sensors_test.c)**;
    - In the [Motor_test.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Motor_test.c) program bugs has fixed and code readability was improved;
    - In the **Camera_and_HF_test.c** program the message on successful sending of photos has been changed;
    - Changed repository description in all language sections;
    - Other minor repository changes.