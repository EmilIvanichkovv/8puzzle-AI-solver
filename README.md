##### Дисциплина Изкуствен интелект (3ти курс Информатика, летен семестър 2020/2021)
##### Задание домашна работа: №1
#####  Изготвил: Емил Иваничков, Информатика, Ф.Н: 45557

# Евристично търсене в пространство на състояния. Реализиране на решение на 8 Puzzle.



- **Описание на задачата**

Търсим решение на играта с плъзгащите плочки с размерност на дъската 3x3 (8 - puzzle). Целта на играта е да се преместят плочките от началото до крайното състояние, с възможно най-малко ходове. Възможните ходове са плъзгане нагоре, надолу, наляво и надясно на плочка, съседна на празния квадрат, водещо до размяна на мястото на плочката с това на празния квадрат.

- **Описание на използваните методи** 

За реализиране на решение на играта с плъзгащите плочки с размерност на дъската 3x3 (8 - puzzle) имплементираме два метода:

- метод за търсене с минимизиране на общата цена на пътя (A*) 

-  метод на най-доброто спускане (best-first search) 

и прилагаме евристично търсене в пространство на състояния. 
Използваме следните две евристични функции:

- Манхатънско разстояние (Manhattan distance) – сумата на разстоянията на всички плочки от оценяваното състояние до правилните им положения в целевото състояние.

- Броят на плочките в оценяваното състояние, които не са на местата си в целевото състояние.

Реализираме клас PuzzleBoard, който ни предоставя разбъркана дъска и има необходимата фунционалност, за прилагане на евристично търсене в пространство на състояния. Имаме възможност за избор на комбинация на евристична функция и метод на обхождане на състоянията. След решаване на пъзела получаваме информация за броя на ходовете, необходими за решаването му чрез съответният метод, както и възможност за преглед на всяка стъпка (състояние на пъзела) от конкретното решение.

- **Резултати и заключения**

Приложнието винаги връща коректно подреден пъзел, но в голяма част от случаите това отнема много време. След многократни тестове забелязваме че методът А* работи по-бързо от Best First Search. Няма значителна разлика в броя на стъпките за решаване на пъзела при различните методи и евристични функции.
> *Забележка: при подаване на коефициент от порядъка на 200 при общата цена на пътя в метода А* се забелязва забележително подобряване на бързината за решаване на пъзела на метода.      
> 

