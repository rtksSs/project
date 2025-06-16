#include "InputForm.h"
#include "Array.h"
#include "Data.h"

#include <vector>

System::Void project::InputForm::ok_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		// Проверка на заполнение полей
		if (central_element_textBox->Text->Length == 0 || random_numbers_param_textBox->Text->Length == 0) {
			MessageBox::Show("Заполните все поля!", "Ошибка");
			return;
		}

		// Преобразование введенных значений в int
		int central_element = Convert::ToInt32(central_element_textBox->Text);
		int random_numbers_param = Convert::ToInt32(random_numbers_param_textBox->Text);

		// Проверка на выбор режимов
		if (mode_checkedListBox->CheckedItems->Count == 0) {
			MessageBox::Show("Выберите хотя бы один режим расчёта!", "Ошибка");
			return;
		}

		// Проверка параметра счётчика случайных чисел на диапазон 0 < x <= 8
		if (random_numbers_param > 8 || random_numbers_param < 0) {
			MessageBox::Show("Параметр счётчика должен быть положительным и не превышать 8!", "Ошибка");
			return;
		}

		// Генерация массива
		std::vector<double> array = generateArray(central_element, random_numbers_param);

		// Вывод полученного массива
		array_textBox->Text = "";
		for (double num : array)
		{
			array_textBox->Text += num.ToString() + "  ";
		}

		// Сохранение состояния флагов в переменные
		bool sum_state = mode_checkedListBox->GetItemChecked(0);
		bool sort_state = mode_checkedListBox->GetItemChecked(1);

		// Сохранение значений в Data.h
		data_array = array;
		data_need_sum = sum_state;
		data_need_sort = sort_state;
	}
	catch (FormatException^)
	{
		MessageBox::Show("Вводите только целые числа!", "Ошибка");
	}
	
}

System::Void project::InputForm::close_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
