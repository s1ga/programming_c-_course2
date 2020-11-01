#pragma once

namespace Lab2Visual {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ open2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;

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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->open2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(304, 126);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(148, 109);
			this->textBox3->TabIndex = 2;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(511, 126);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(148, 109);
			this->textBox4->TabIndex = 3;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Параметры матрицы";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Строки";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 191);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Столбцы";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(326, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Рабочее поле";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(544, 70);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Результат";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(547, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 35);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Очистить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(329, 257);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 35);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(304, 341);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(238, 32);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Сместить матрицу вправо на ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(717, 28);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->openToolStripMenuItem,
					this->toolStripSeparator1, this->open2ToolStripMenuItem, this->toolStripSeparator2, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(177, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(174, 6);
			// 
			// open2ToolStripMenuItem
			// 
			this->open2ToolStripMenuItem->Name = L"open2ToolStripMenuItem";
			this->open2ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::S));
			this->open2ToolStripMenuItem->Size = System::Drawing::Size(177, 26);
			this->open2ToolStripMenuItem->Text = L"Save";
			this->open2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::open2ToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(174, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::E));
			this->exitToolStripMenuItem->Size = System::Drawing::Size(177, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(129, 129);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(61, 22);
			this->numericUpDown1->TabIndex = 14;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(129, 191);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(67, 22);
			this->numericUpDown2->TabIndex = 15;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(563, 347);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(73, 22);
			this->numericUpDown3->TabIndex = 16;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(304, 391);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(238, 32);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Сместить матрицу влево на ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(563, 397);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(73, 22);
			this->numericUpDown4->TabIndex = 18;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(717, 517);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == 8) || (e->KeyChar == ' ') ||
			(e->KeyChar == (char)Keys::Enter) || (e->KeyChar == ',') || (e->KeyChar == '-')) return;
		//Остальные символы запрещены
		e->Handled = true;
	}
	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		//Остальные символы запрещены
		e->Handled = true;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox4->Text = "";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = "";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int n, m, k;
		double t;
		String^ s = "";
		array<Char>^ ar;
		ar = gcnew array<Char>(1);
		ar[0] = ' ';
		array<double, 2>^ A;

		m = Convert::ToInt32(numericUpDown1->Text);
		n = Convert::ToInt32(numericUpDown2->Text);
		k = Convert::ToInt32(numericUpDown3->Text);

		if (!textBox3->Lines->Length) {
			MessageBox::Show("Введите матрицу !\n",
				"Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return;
		}
		if (textBox3->Lines->Length != m) {
			MessageBox::Show("Неверное количество строк!\n",
				"Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return;
		}
		
		A = gcnew array<double, 2>(m, n);
		array<String^>^ as;
		for (int i = 0; i < m; i++) {
			as = textBox3->Lines[i]->Split(ar);
			if (as->Length != n) {
				MessageBox::Show("Неверное количество столбцов!\n",
					"Ошибка",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}
			for (int j = 0; j < n; j++) {
				A[i, j] = Convert::ToDouble(as[j]);
			}
		}

		for (int ik = 1; ik <= k; ik++) {
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n - 1; j++) {
					t = A[i, j];
					A[i, j] = A[i, n - 1];
					A[i, n - 1] = t;
				}
			}
		}

		as = gcnew array<String^>(m);
		for (int i = 0; i < m; i++) {
			s = "";
			for (int j = 0; j < n; j++) {
				s += A[i, j].ToString() + " ";
			}
			as[i] = s;
		}
		textBox4->Lines = as;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int n, m, k;
		double t;
		String^ s = "";
		array<Char>^ ar;
		ar = gcnew array<Char>(1);
		ar[0] = ' ';
		array<double, 2>^ A;

		m = Convert::ToInt32(numericUpDown1->Text);
		n = Convert::ToInt32(numericUpDown2->Text);
		k = Convert::ToInt32(numericUpDown4->Text);

		if (!textBox3->Lines->Length) {
			MessageBox::Show("Введите матрицу !\n",
				"Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return;
		}
		if (textBox3->Lines->Length != m) {
			MessageBox::Show("Неверное количество строк!\n",
				"Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return;
		}

		A = gcnew array<double, 2>(m, n);
		array<String^>^ as;
		for (int i = 0; i < m; i++) {
			as = textBox3->Lines[i]->Split(ar);
			if (as->Length != n) {
				MessageBox::Show("Неверное количество столбцов!\n",
					"Ошибка",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}
			for (int j = 0; j < n; j++) {
				A[i, j] = Convert::ToDouble(as[j]);
			}
		}

		for (int ik = 1; ik <= k; ik++) {
			for (int i = 0; i < m; i++) {
				for (int j = n - 1; j > 0; j--) {
					t = A[i, j];
					A[i, j] = A[i, 0];
					A[i, 0] = t;
				}
			}
		}

		as = gcnew array<String^>(m);
		for (int i = 0; i < m; i++) {
			s = "";
			for (int j = 0; j < n; j++) {
				s += A[i, j].ToString() + " ";
			}
			as[i] = s;
		}
		textBox4->Lines = as;
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dr;
		String^ fn;
		openFileDialog1->FileName = String::Empty;

		dr = openFileDialog1->ShowDialog();
		if (dr == System::Windows::Forms::DialogResult::OK) {
			fn = openFileDialog1->FileName;
			try
			{
				System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(fn);
				textBox3->Text = sr->ReadToEnd();
				sr->Close();
			}
			catch (System::IO::FileLoadException ^ e)
			{
				MessageBox::Show("Ошибка ввода:\n" + e->Message,
					"Матрицы",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void open2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dr;
		String^ fn;

		dr = saveFileDialog1->ShowDialog();
		if (dr == Windows::Forms::DialogResult::OK) {
			fn = saveFileDialog1->FileName;
			try
			{
				System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(fn, true);
				sw->Write(textBox4->Text + System::Environment::NewLine + System::Environment::NewLine);
				sw->Close();
			}
			catch (System::IO::IOException ^ e)
			{
				MessageBox::Show(e->ToString(),
					"Матрицы",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
