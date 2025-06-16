#pragma once

namespace project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class CalcForm : public System::Windows::Forms::Form
	{

	public:
		CalcForm();

	protected:
		~CalcForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ positive_nums_sum_label;
	private: System::Windows::Forms::TextBox^ positive_nums_sum_textBox;
	private: System::Windows::Forms::Label^ sorted_array_label;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ sorted_array_textBox;
	private: System::Windows::Forms::Button^ close_button;


	protected:



	protected:

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->positive_nums_sum_label = (gcnew System::Windows::Forms::Label());
			this->positive_nums_sum_textBox = (gcnew System::Windows::Forms::TextBox());
			this->sorted_array_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sorted_array_textBox = (gcnew System::Windows::Forms::TextBox());
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// positive_nums_sum_label
			// 
			this->positive_nums_sum_label->AutoSize = true;
			this->positive_nums_sum_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->positive_nums_sum_label->Location = System::Drawing::Point(195, 53);
			this->positive_nums_sum_label->Name = L"positive_nums_sum_label";
			this->positive_nums_sum_label->Size = System::Drawing::Size(487, 66);
			this->positive_nums_sum_label->TabIndex = 0;
			this->positive_nums_sum_label->Text = L"Сумма положительных элементов, \r\nрасположенных между минимальным и максимальным \r"
				L"\nэлементами массива:\r\n";
			this->positive_nums_sum_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// positive_nums_sum_textBox
			// 
			this->positive_nums_sum_textBox->Location = System::Drawing::Point(391, 122);
			this->positive_nums_sum_textBox->Name = L"positive_nums_sum_textBox";
			this->positive_nums_sum_textBox->Size = System::Drawing::Size(100, 22);
			this->positive_nums_sum_textBox->TabIndex = 1;
			// 
			// sorted_array_label
			// 
			this->sorted_array_label->AutoSize = true;
			this->sorted_array_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->sorted_array_label->Location = System::Drawing::Point(235, 165);
			this->sorted_array_label->Name = L"sorted_array_label";
			this->sorted_array_label->Size = System::Drawing::Size(372, 22);
			this->sorted_array_label->TabIndex = 2;
			this->sorted_array_label->Text = L"Отсортированный по возрастанию массив:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(302, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(274, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Результаты расчётов";
			// 
			// sorted_array_textBox
			// 
			this->sorted_array_textBox->Location = System::Drawing::Point(3, 190);
			this->sorted_array_textBox->Name = L"sorted_array_textBox";
			this->sorted_array_textBox->Size = System::Drawing::Size(821, 22);
			this->sorted_array_textBox->TabIndex = 8;
			// 
			// close_button
			// 
			this->close_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->close_button->Location = System::Drawing::Point(376, 220);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(156, 38);
			this->close_button->TabIndex = 9;
			this->close_button->Text = L"Закрыть";
			this->close_button->UseVisualStyleBackColor = true;
			// 
			// CalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(831, 270);
			this->Controls->Add(this->close_button);
			this->Controls->Add(this->sorted_array_textBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->sorted_array_label);
			this->Controls->Add(this->positive_nums_sum_textBox);
			this->Controls->Add(this->positive_nums_sum_label);
			this->Name = L"CalcForm";
			this->Text = L"Результаты расчётов";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void close_button_Click(System::Object^ sender, System::EventArgs^ e);
};
}
