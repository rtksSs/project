#pragma once

namespace project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class InputForm : public System::Windows::Forms::Form
	{

	public:

		InputForm(void)
		{
			InitializeComponent();
		}


	protected:
		~InputForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ central_element_textBox;
	private: System::Windows::Forms::Label^ central_element_label;
	private: System::Windows::Forms::Label^ random_numbers_param_label;
	private: System::Windows::Forms::TextBox^ random_numbers_param_textBox;
	private: System::Windows::Forms::Label^ array_label;
	private: System::Windows::Forms::TextBox^ array_textBox;
	private: System::Windows::Forms::Button^ ok_button;
	private: System::Windows::Forms::CheckedListBox^ mode_checkedListBox;
	private: System::Windows::Forms::Label^ mode_label;
	private: System::Windows::Forms::Button^ close_button;










	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->central_element_textBox = (gcnew System::Windows::Forms::TextBox());
			this->central_element_label = (gcnew System::Windows::Forms::Label());
			this->random_numbers_param_label = (gcnew System::Windows::Forms::Label());
			this->random_numbers_param_textBox = (gcnew System::Windows::Forms::TextBox());
			this->array_label = (gcnew System::Windows::Forms::Label());
			this->array_textBox = (gcnew System::Windows::Forms::TextBox());
			this->ok_button = (gcnew System::Windows::Forms::Button());
			this->mode_checkedListBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->mode_label = (gcnew System::Windows::Forms::Label());
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// central_element_textBox
			// 
			this->central_element_textBox->Location = System::Drawing::Point(398, 45);
			this->central_element_textBox->Name = L"central_element_textBox";
			this->central_element_textBox->Size = System::Drawing::Size(99, 22);
			this->central_element_textBox->TabIndex = 0;
			// 
			// central_element_label
			// 
			this->central_element_label->AutoSize = true;
			this->central_element_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->central_element_label->Location = System::Drawing::Point(263, 20);
			this->central_element_label->Name = L"central_element_label";
			this->central_element_label->Size = System::Drawing::Size(353, 22);
			this->central_element_label->TabIndex = 1;
			this->central_element_label->Text = L"Введите центральный элемент массива:";
			// 
			// random_numbers_param_label
			// 
			this->random_numbers_param_label->AutoSize = true;
			this->random_numbers_param_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->random_numbers_param_label->Location = System::Drawing::Point(314, 84);
			this->random_numbers_param_label->Name = L"random_numbers_param_label";
			this->random_numbers_param_label->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->random_numbers_param_label->Size = System::Drawing::Size(253, 44);
			this->random_numbers_param_label->TabIndex = 2;
			this->random_numbers_param_label->Text = L"Введите параметр счётчика \r\nслучайных чисел:\r\n";
			this->random_numbers_param_label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// random_numbers_param_textBox
			// 
			this->random_numbers_param_textBox->Location = System::Drawing::Point(398, 131);
			this->random_numbers_param_textBox->Name = L"random_numbers_param_textBox";
			this->random_numbers_param_textBox->Size = System::Drawing::Size(99, 22);
			this->random_numbers_param_textBox->TabIndex = 3;
			// 
			// array_label
			// 
			this->array_label->AutoSize = true;
			this->array_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->array_label->Location = System::Drawing::Point(314, 167);
			this->array_label->Name = L"array_label";
			this->array_label->Size = System::Drawing::Size(234, 22);
			this->array_label->TabIndex = 4;
			this->array_label->Text = L"Сгенерированный массив:";
			// 
			// array_textBox
			// 
			this->array_textBox->Location = System::Drawing::Point(11, 192);
			this->array_textBox->Name = L"array_textBox";
			this->array_textBox->Size = System::Drawing::Size(816, 22);
			this->array_textBox->TabIndex = 5;
			// 
			// ok_button
			// 
			this->ok_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ok_button->Location = System::Drawing::Point(344, 330);
			this->ok_button->Name = L"ok_button";
			this->ok_button->Size = System::Drawing::Size(99, 48);
			this->ok_button->TabIndex = 6;
			this->ok_button->Text = L"ОК";
			this->ok_button->UseVisualStyleBackColor = true;
			this->ok_button->Click += gcnew System::EventHandler(this, &InputForm::ok_button_Click);
			// 
			// mode_checkedListBox
			// 
			this->mode_checkedListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->mode_checkedListBox->FormattingEnabled = true;
			this->mode_checkedListBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) {
				L"Рассчитать сумму положительных чисел между минимальным и максимальным элементами",
					L"Отсортировать массив по возрастанию"
			});
			this->mode_checkedListBox->Location = System::Drawing::Point(11, 266);
			this->mode_checkedListBox->Name = L"mode_checkedListBox";
			this->mode_checkedListBox->Size = System::Drawing::Size(820, 48);
			this->mode_checkedListBox->TabIndex = 7;
			// 
			// mode_label
			// 
			this->mode_label->AutoSize = true;
			this->mode_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mode_label->Location = System::Drawing::Point(310, 241);
			this->mode_label->Name = L"mode_label";
			this->mode_label->Size = System::Drawing::Size(273, 22);
			this->mode_label->TabIndex = 8;
			this->mode_label->Text = L"Выберите режим(-ы) расчётов:\r\n";
			// 
			// close_button
			// 
			this->close_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->close_button->Location = System::Drawing::Point(465, 330);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(133, 48);
			this->close_button->TabIndex = 9;
			this->close_button->Text = L"Закрыть";
			this->close_button->UseVisualStyleBackColor = true;
			this->close_button->Click += gcnew System::EventHandler(this, &InputForm::close_button_Click);
			// 
			// InputForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(839, 390);
			this->Controls->Add(this->close_button);
			this->Controls->Add(this->mode_label);
			this->Controls->Add(this->mode_checkedListBox);
			this->Controls->Add(this->ok_button);
			this->Controls->Add(this->array_textBox);
			this->Controls->Add(this->array_label);
			this->Controls->Add(this->random_numbers_param_textBox);
			this->Controls->Add(this->random_numbers_param_label);
			this->Controls->Add(this->central_element_label);
			this->Controls->Add(this->central_element_textBox);
			this->Name = L"InputForm";
			this->Text = L"Ввод данных";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void ok_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void close_button_Click(System::Object^ sender, System::EventArgs^ e);
};
}
