#include "CalcForm.h"
#include "Array.h"
#include "Data.h"

project::CalcForm::CalcForm()
{
	InitializeComponent();
	if (data_need_sum) {
		positive_nums_sum_textBox->Clear();
		positive_nums_sum_textBox->Text = calculateSumBetweenMinMax(data_array).ToString();
	}
	if (data_need_sort) {
		sortArray(data_array);
		sorted_array_textBox->Clear();
		for (double num : data_array)
		{
			sorted_array_textBox->AppendText(num.ToString() + " ");
		}
	}
}

System::Void project::CalcForm::close_button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}