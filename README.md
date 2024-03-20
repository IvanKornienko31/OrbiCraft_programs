Языки (Languages): [Русский](#russian), [English](#english).

Текущая версия репозитория / Current repository version: 1.3.

## <a id="russian">(Русский) О репозитории</a>

Здесь размещены программы, которые были написаны для управления подсистемами из набора "ОрбиКрафт".

Этот набор является основным для выполнения заданий по направлению "Инженерия космических систем" чемпионата "Профессионалы".

Репозиторий включат в себя:

- Заголовочный файл, содержащий все функции для работы с подсистемами (**[libschsat.h](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/libschsat.h)**);
- Программы, предназначенные для тестирования датчиков, двигателя, камеры и радиопередатчиков;
- Программы, которые выполняют стабилизацию спутника, съемку окружающего пространства, ориентацию спутника и т. д.

___Все программы написаны на языке C (Си).___

Документация "ОрбиКрафта" (описание подсистем и программы): <http://orbicraft.sputnix.ru/doku.php>

В документации нормальное объяснение работы подсистем, но местами присутствует плохо написанный код и неопределённость в объяснении. Также могут не отображаться отдельные веб-страницы и/или навигация.

### Версии репозитория:

- 1.0.
    - Начальная версия репозитория.
- 1.0.1.
    - Были исправлены ссылки в файле README.md.
- 1.0.2.
    - Добавлен раздел "Версии репозитория" в каждый языковой отдел README-файла;
    - Добавлена ссылка на документацию "ОрбиКрафта";
    - Незначительные изменения комментариев в программах;
    - Исправлены грамматические и пунктуационные ошибки в README-файле;
    - Другие незначительные изменения в репозитории.
- 1.1.
    - Добавлена программа тестирования магнитометра (**[Magn_test.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Magn_test.c)**);
    - Был исправлен текст комментариев во всех существовавших ранее программах;
    - Рабочий код всех существовавших ранее программ получил незначительные изменения;
    - В программу тестирования двигателя добавлены новые комментарии;
    - Другие незначительные изменения в репозитории.
- 1.2.
    - Добавлены программы тестирования одного и нескольких солнечных датчиков (**[Sun_sensor_test.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Sun%20Sensor%20Tests/Sun_sensor_test.c)** и **[Some_sun_sensors.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Sun%20Sensor%20Tests/Some_sun_sensors.c)**);
    - Рабочий код всех существовавших ранее программ получил незначительные исправления;
    - Был исправлен текст комментариев во всех существовавших ранее программах.
- **1.3. (текущая версия)**
    - Добавлена программа тестирования камеры и высокочастотного (ВЧ) передатчика (**[Camera_and_HF_radio.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Camera_and_HF_radio.c)**);
    - Рабочий код всех существовавших ранее программ получил незначительные исправления;
    - Был исправлен текст комментариев во всех существовавших ранее программах.
    - Информация о текущей версии репозитория перенесена в начало README-файла.

## <a id="english">(English) About the repository</a>

These are programs that were written to control subsystems from the "OrbiCraft" construction kit.

This construction kit is used to complete tasks in the "Space System Engineering" field of the "Professionals" (or "Professionaly") championship.

The repository includes:

- The header file that includes all the functions for working with subsystems (**[libschsat.h](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/libschsat.h)**);
- Programs that are used to test sensors, engine, camera and transmitters;
- Programs that executes satellite stabilization, survey of the surrounding space, satellite orientation and so on.

___All programs were written in C.___

"OrbiCraft" documentation (subsystem description and programs): <http://orbicraft.sputnix.ru/doku.php>

The documentation contains a normal explanation of the work of the subsystems but in some places there is poorly written code and uncertainty in the explanation. Also, individual website pages and/or website navigation may not be displayed.

### Repository versions:

- 1.0.
    - The initial version of the repository.
- 1.0.1.
    - Links in README.md file were fixed.
- 1.0.2.
    - A section "Repository versions" was added in every language head of the README file;
    - Added a link to the documentation of "OrbiCraft";
    - Minor changes to comments in programs;
    - Grammatical and punctuational errors have been corrected in the README file;
    - Other minor repository changes.
- 1.1.
    - Added magnetometer testing program (**[Magn_test.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Magn_test.c)**);
    - The text of the comments has been corrected in all pre-exsisting programs;
    - The working code of all pre-exsisting programs has received minor changes;
    - New comments have been added to the engine testing program;
    - Other minor repository changes.
- 1.2.
    - Added testing programms for one and several solar sensors (**[Sun_sensor_test.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Sun%20Sensor%20Tests/Sun_sensor_test.c)** and **[Some_sun_sensors.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Sun%20Sensor%20Tests/Some_sun_sensors.c)**);
    - The working code of all pre-exsisting programs has received minor fixes;
    - The text of the comments has been corrected in all pre-exsisting programs.
- **1.3 (current version)**
    - Added the program for testing camera and high frequency (HF) transmitter (**[Camera_and_HF_radio.c](https://github.com/IvanKornienko31/OrbiCraft_programs/blob/main/Sensor%20tests/Camera_and_HF_radio.c)**);
    - The working code of all pre-exsisting programs has received minor fixes;
    - The text of the comments has been corrected in all pre-exsisting programs.
    - Information about the current repository version has been moved to the beginning of the README file