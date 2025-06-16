#pragma once

namespace project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:

		
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ input_button;
	protected:
	private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::Button^ exit_button;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->input_button = (gcnew System::Windows::Forms::Button());
			this->calc_button = (gcnew System::Windows::Forms::Button());
			this->exit_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// input_button
			// 
			this->input_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input_button->Location = System::Drawing::Point(56, 74);
			this->input_button->Name = L"input_button";
			this->input_button->Size = System::Drawing::Size(100, 50);
			this->input_button->TabIndex = 0;
			this->input_button->Text = L"Input";
			this->input_button->UseVisualStyleBackColor = true;
			this->input_button->Click += gcnew System::EventHandler(this, &MainForm::input_button_Click);
			// 
			// calc_button
			// 
			this->calc_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->calc_button->Location = System::Drawing::Point(213, 74);
			this->calc_button->Name = L"calc_button";
			this->calc_button->Size = System::Drawing::Size(100, 50);
			this->calc_button->TabIndex = 1;
			this->calc_button->Text = L"Calc";
			this->calc_button->UseVisualStyleBackColor = true;
			this->calc_button->Click += gcnew System::EventHandler(this, &MainForm::calc_button_Click);
			// 
			// exit_button
			// 
			this->exit_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit_button->Location = System::Drawing::Point(367, 74);
			this->exit_button->Name = L"exit_button";
			this->exit_button->Size = System::Drawing::Size(100, 50);
			this->exit_button->TabIndex = 2;
			this->exit_button->Text = L"Exit";
			this->exit_button->UseVisualStyleBackColor = true;
			this->exit_button->Click += gcnew System::EventHandler(this, &MainForm::exit_button_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(521, 180);
			this->Controls->Add(this->exit_button);
			this->Controls->Add(this->calc_button);
			this->Controls->Add(this->input_button);
			this->Name = L"MainForm";
			this->Text = L"Дмитриев Р.Р. 4105-об1 Вариант 2";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void input_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exit_button_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
