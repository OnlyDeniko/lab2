#pragma once
#include<climits>
#include"TMatrix.h"
TMatrix<int> a, b, res;
namespace Matrix4Form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  SizeBox;
	protected:
	private: System::Windows::Forms::Button^  SetSizeButton;
	private: System::Windows::Forms::DataGridView^  GridA;

	private: System::Windows::Forms::Button^  SetAButton;
	private: System::Windows::Forms::Button^  ExitButton;
	private: System::Windows::Forms::DataGridView^  GridB;

	private: System::Windows::Forms::Button^  SetBButton;
	private: System::Windows::Forms::DataGridView^  GridResult;
	private: System::Windows::Forms::Button^  PlusButton;
	private: System::Windows::Forms::Button^  MinusButton;
	private: System::Windows::Forms::Button^  MultipleButton;
	private: System::Windows::Forms::Button^  DetAButton;
	private: System::Windows::Forms::Button^  DetBButton;



	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SizeBox = (gcnew System::Windows::Forms::TextBox());
			this->SetSizeButton = (gcnew System::Windows::Forms::Button());
			this->GridA = (gcnew System::Windows::Forms::DataGridView());
			this->SetAButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->GridB = (gcnew System::Windows::Forms::DataGridView());
			this->SetBButton = (gcnew System::Windows::Forms::Button());
			this->GridResult = (gcnew System::Windows::Forms::DataGridView());
			this->PlusButton = (gcnew System::Windows::Forms::Button());
			this->MinusButton = (gcnew System::Windows::Forms::Button());
			this->MultipleButton = (gcnew System::Windows::Forms::Button());
			this->DetAButton = (gcnew System::Windows::Forms::Button());
			this->DetBButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridResult))->BeginInit();
			this->SuspendLayout();
			// 
			// SizeBox
			// 
			this->SizeBox->Location = System::Drawing::Point(12, 12);
			this->SizeBox->Name = L"SizeBox";
			this->SizeBox->Size = System::Drawing::Size(202, 20);
			this->SizeBox->TabIndex = 0;
			// 
			// SetSizeButton
			// 
			this->SetSizeButton->Location = System::Drawing::Point(220, 12);
			this->SetSizeButton->Name = L"SetSizeButton";
			this->SetSizeButton->Size = System::Drawing::Size(75, 20);
			this->SetSizeButton->TabIndex = 1;
			this->SetSizeButton->Text = L"Set Size";
			this->SetSizeButton->UseVisualStyleBackColor = true;
			this->SetSizeButton->Click += gcnew System::EventHandler(this, &MyForm::SetSizeButton_Click);
			// 
			// GridA
			// 
			this->GridA->AllowUserToAddRows = false;
			this->GridA->AllowUserToDeleteRows = false;
			this->GridA->AllowUserToResizeColumns = false;
			this->GridA->AllowUserToResizeRows = false;
			this->GridA->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->GridA->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->GridA->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->GridA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->GridA->ColumnHeadersVisible = false;
			this->GridA->Location = System::Drawing::Point(12, 60);
			this->GridA->MultiSelect = false;
			this->GridA->Name = L"GridA";
			this->GridA->RowHeadersVisible = false;
			this->GridA->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->GridA->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->GridA->Size = System::Drawing::Size(200, 200);
			this->GridA->TabIndex = 2;
			// 
			// SetAButton
			// 
			this->SetAButton->Location = System::Drawing::Point(12, 266);
			this->SetAButton->Name = L"SetAButton";
			this->SetAButton->Size = System::Drawing::Size(200, 26);
			this->SetAButton->TabIndex = 3;
			this->SetAButton->Text = L"Change A";
			this->SetAButton->UseVisualStyleBackColor = true;
			this->SetAButton->Click += gcnew System::EventHandler(this, &MyForm::SetAButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->ExitButton->Location = System::Drawing::Point(625, 294);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(121, 45);
			this->ExitButton->TabIndex = 4;
			this->ExitButton->Text = L"Close";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MyForm::ExitButton_Click);
			// 
			// GridB
			// 
			this->GridB->AllowUserToAddRows = false;
			this->GridB->AllowUserToDeleteRows = false;
			this->GridB->AllowUserToResizeColumns = false;
			this->GridB->AllowUserToResizeRows = false;
			this->GridB->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->GridB->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->GridB->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->GridB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->GridB->ColumnHeadersVisible = false;
			this->GridB->Location = System::Drawing::Point(220, 60);
			this->GridB->MultiSelect = false;
			this->GridB->Name = L"GridB";
			this->GridB->RowHeadersVisible = false;
			this->GridB->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->GridB->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->GridB->Size = System::Drawing::Size(200, 200);
			this->GridB->TabIndex = 5;
			// 
			// SetBButton
			// 
			this->SetBButton->Location = System::Drawing::Point(220, 266);
			this->SetBButton->Name = L"SetBButton";
			this->SetBButton->Size = System::Drawing::Size(200, 26);
			this->SetBButton->TabIndex = 6;
			this->SetBButton->Text = L"Change B";
			this->SetBButton->UseVisualStyleBackColor = true;
			this->SetBButton->Click += gcnew System::EventHandler(this, &MyForm::SetBButton_Click);
			// 
			// GridResult
			// 
			this->GridResult->AllowUserToAddRows = false;
			this->GridResult->AllowUserToDeleteRows = false;
			this->GridResult->AllowUserToResizeColumns = false;
			this->GridResult->AllowUserToResizeRows = false;
			this->GridResult->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->GridResult->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->GridResult->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->GridResult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->GridResult->ColumnHeadersVisible = false;
			this->GridResult->Location = System::Drawing::Point(546, 60);
			this->GridResult->MultiSelect = false;
			this->GridResult->Name = L"GridResult";
			this->GridResult->RowHeadersVisible = false;
			this->GridResult->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->GridResult->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->GridResult->Size = System::Drawing::Size(200, 200);
			this->GridResult->TabIndex = 7;
			// 
			// PlusButton
			// 
			this->PlusButton->Location = System::Drawing::Point(462, 79);
			this->PlusButton->Name = L"PlusButton";
			this->PlusButton->Size = System::Drawing::Size(47, 31);
			this->PlusButton->TabIndex = 8;
			this->PlusButton->Text = L"+";
			this->PlusButton->UseVisualStyleBackColor = true;
			this->PlusButton->Click += gcnew System::EventHandler(this, &MyForm::PlusButton_Click);
			// 
			// MinusButton
			// 
			this->MinusButton->Location = System::Drawing::Point(462, 135);
			this->MinusButton->Name = L"MinusButton";
			this->MinusButton->Size = System::Drawing::Size(47, 31);
			this->MinusButton->TabIndex = 9;
			this->MinusButton->Text = L"-";
			this->MinusButton->UseVisualStyleBackColor = true;
			this->MinusButton->Click += gcnew System::EventHandler(this, &MyForm::MinusButton_Click);
			// 
			// MultipleButton
			// 
			this->MultipleButton->Location = System::Drawing::Point(462, 196);
			this->MultipleButton->Name = L"MultipleButton";
			this->MultipleButton->Size = System::Drawing::Size(47, 31);
			this->MultipleButton->TabIndex = 10;
			this->MultipleButton->Text = L"*";
			this->MultipleButton->UseVisualStyleBackColor = true;
			this->MultipleButton->Click += gcnew System::EventHandler(this, &MyForm::MultipleButton_Click);
			// 
			// DetAButton
			// 
			this->DetAButton->Location = System::Drawing::Point(12, 298);
			this->DetAButton->Name = L"DetAButton";
			this->DetAButton->Size = System::Drawing::Size(200, 26);
			this->DetAButton->TabIndex = 11;
			this->DetAButton->Text = L"Calc det A";
			this->DetAButton->UseVisualStyleBackColor = true;
			this->DetAButton->Click += gcnew System::EventHandler(this, &MyForm::DetAButton_Click);
			// 
			// DetBButton
			// 
			this->DetBButton->Location = System::Drawing::Point(220, 298);
			this->DetBButton->Name = L"DetBButton";
			this->DetBButton->Size = System::Drawing::Size(200, 26);
			this->DetBButton->TabIndex = 12;
			this->DetBButton->Text = L"Calc det B";
			this->DetBButton->UseVisualStyleBackColor = true;
			this->DetBButton->Click += gcnew System::EventHandler(this, &MyForm::DetBButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(758, 351);
			this->Controls->Add(this->DetBButton);
			this->Controls->Add(this->DetAButton);
			this->Controls->Add(this->MultipleButton);
			this->Controls->Add(this->MinusButton);
			this->Controls->Add(this->PlusButton);
			this->Controls->Add(this->GridResult);
			this->Controls->Add(this->SetBButton);
			this->Controls->Add(this->GridB);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->SetAButton);
			this->Controls->Add(this->GridA);
			this->Controls->Add(this->SetSizeButton);
			this->Controls->Add(this->SizeBox);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridResult))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		int size = 0;
		System::Void SetSizeButton_Click(System::Object^  sender, System::EventArgs^  e) {
			int gg = System::Convert::ToInt32(SizeBox->Text);
			//MessageBox::Show(System::Convert::ToString(gg));
			if (gg >= int(1) && gg < 100) {
				//SizeBox->ReadOnly = true;
				GridA->RowCount = gg;
				GridA->ColumnCount = gg;
				GridB->RowCount = gg;
				GridB->ColumnCount = gg;
				
				a = TMatrix<int>(gg);
				b = TMatrix<int>(gg);
				size = gg;
				for (int i = 0; i < size; i++) {
					for (int j = 0; j < i; j++) {
						GridA->Rows[i]->Cells[j]->Value = "0";
						GridB->Rows[i]->Cells[j]->Value = "0";
						GridA->Rows[i]->Cells[j]->ReadOnly = true;
						GridB->Rows[i]->Cells[j]->ReadOnly = true;
					}
					for (int j = i; j < size; j++) {
						GridA->Rows[i]->Cells[j]->Value = "";
						GridB->Rows[i]->Cells[j]->Value = "";
					}
				}
			}
			else {
				MessageBox::Show("REPEAT ENTER");
			}
		}
	private: 
		System::Void SetAButton_Click(System::Object^  sender, System::EventArgs^  e) {
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					int gg = System::Convert::ToInt32(GridA->Rows[i]->Cells[j]->Value);
					if (j >= a[i].get_start()) a[i][j] = gg;
				}
			}
		}
	private: 
		System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
			Close();
		}
	private: 
		System::Void SetBButton_Click(System::Object^  sender, System::EventArgs^  e) {
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					int gg = System::Convert::ToInt32(GridB->Rows[i]->Cells[j]->Value);
					if (j >= b[i].get_start()) b[i][j] = gg;
				}
			}
		}
	private: 
		System::Void PlusButton_Click(System::Object^  sender, System::EventArgs^  e) {
			res = a + b;
			GridResult->RowCount = size;
			GridResult->ColumnCount = size;
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if (j >= res[i].get_start()) GridResult->Rows[i]->Cells[j]->Value = System::Convert::ToString(res[i][j]);
					else GridResult->Rows[i]->Cells[j]->Value = "0";
				}
			}
		}
	private: 
		System::Void MinusButton_Click(System::Object^  sender, System::EventArgs^  e) {
			res = a - b;
			GridResult->RowCount = size;
			GridResult->ColumnCount = size;
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if (j >= res[i].get_start()) GridResult->Rows[i]->Cells[j]->Value = System::Convert::ToString(res[i][j]);
					else GridResult->Rows[i]->Cells[j]->Value = "0";
				}
			}
		}
	private: 
		System::Void MultipleButton_Click(System::Object^  sender, System::EventArgs^  e) {
			res = a * b;
			GridResult->RowCount = size;
			GridResult->ColumnCount = size;
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if (j >= res[i].get_start()) GridResult->Rows[i]->Cells[j]->Value = System::Convert::ToString(res[i][j]);
					else GridResult->Rows[i]->Cells[j]->Value = "0";
				}
			}
		}
	private: 
		System::Void DetAButton_Click(System::Object^  sender, System::EventArgs^  e) {
			long long ans = 1;
			for (int i = 0; i < size; i++) {
				ans *= a[i][i];
			}
			MessageBox::Show(System::Convert::ToString(ans));
		}
	private: 
		System::Void DetBButton_Click(System::Object^  sender, System::EventArgs^  e) {
			long long ans = 1;
			for (int i = 0; i < size; i++) {
				ans *= b[i][i];
			}
			MessageBox::Show(System::Convert::ToString(ans));
		}
};
}
