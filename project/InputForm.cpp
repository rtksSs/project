#include "InputForm.h"
#include "Array.h"
#include "Data.h"

#include <vector>

System::Void project::InputForm::ok_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		// �������� �� ���������� �����
		if (central_element_textBox->Text->Length == 0 || random_numbers_param_textBox->Text->Length == 0) {
			MessageBox::Show("��������� ��� ����!", "������");
			return;
		}

		// �������������� ��������� �������� � int
		int central_element = Convert::ToInt32(central_element_textBox->Text);
		int random_numbers_param = Convert::ToInt32(random_numbers_param_textBox->Text);

		// �������� �� ����� �������
		if (mode_checkedListBox->CheckedItems->Count == 0) {
			MessageBox::Show("�������� ���� �� ���� ����� �������!", "������");
			return;
		}

		// �������� ��������� �������� ��������� ����� �� �������� 0 < x <= 8
		if (random_numbers_param > 8 || random_numbers_param < 0) {
			MessageBox::Show("�������� �������� ������ ���� ������������� � �� ��������� 8!", "������");
			return;
		}

		// ��������� �������
		std::vector<double> array = generateArray(central_element, random_numbers_param);

		// ����� ����������� �������
		array_textBox->Text = "";
		for (double num : array)
		{
			array_textBox->Text += num.ToString() + "  ";
		}

		// ���������� ��������� ������ � ����������
		bool sum_state = mode_checkedListBox->GetItemChecked(0);
		bool sort_state = mode_checkedListBox->GetItemChecked(1);

		// ���������� �������� � Data.h
		data_array = array;
		data_need_sum = sum_state;
		data_need_sort = sort_state;
	}
	catch (FormatException^)
	{
		MessageBox::Show("������� ������ ����� �����!", "������");
	}
	
}

System::Void project::InputForm::close_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
