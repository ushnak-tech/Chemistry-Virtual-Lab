#pragma once
#include "calculation.h"

namespace EVA01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Title;
	private: System::Windows::Forms::Button^ paperButton;
	private: System::Windows::Forms::Label^ appTitle;
	private: System::Windows::Forms::PictureBox^ apparatus;
	private: System::Windows::Forms::Button^ beakerButton;
	private: System::Windows::Forms::Label^ colorTitle;
	private: System::Windows::Forms::Button^ colorBlack;
	private: System::Windows::Forms::Button^ colorBlue;


	private: System::Windows::Forms::Button^ colorGreen;
	private: System::Windows::Forms::Button^ calculate;
	private: System::Windows::Forms::Button^ colorRed;
	private: System::Windows::Forms::Label^ errorBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;


	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Title = (gcnew System::Windows::Forms::Label());
			this->paperButton = (gcnew System::Windows::Forms::Button());
			this->appTitle = (gcnew System::Windows::Forms::Label());
			this->apparatus = (gcnew System::Windows::Forms::PictureBox());
			this->beakerButton = (gcnew System::Windows::Forms::Button());
			this->colorTitle = (gcnew System::Windows::Forms::Label());
			this->colorBlack = (gcnew System::Windows::Forms::Button());
			this->colorBlue = (gcnew System::Windows::Forms::Button());
			this->colorGreen = (gcnew System::Windows::Forms::Button());
			this->colorRed = (gcnew System::Windows::Forms::Button());
			this->calculate = (gcnew System::Windows::Forms::Button());
			this->errorBox = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->apparatus))->BeginInit();
			this->SuspendLayout();
			// 
			// Title
			// 
			this->Title->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Bold));
			this->Title->Location = System::Drawing::Point(225, 9);
			this->Title->Name = L"Title";
			this->Title->Padding = System::Windows::Forms::Padding(4);
			this->Title->Size = System::Drawing::Size(349, 43);
			this->Title->TabIndex = 0;
			this->Title->Text = L"CHROMATOGRAPHY";
			this->Title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// paperButton
			// 
			this->paperButton->BackColor = System::Drawing::Color::RosyBrown;
			this->paperButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->paperButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->paperButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->paperButton->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->paperButton->Location = System::Drawing::Point(27, 137);
			this->paperButton->Name = L"paperButton";
			this->paperButton->Size = System::Drawing::Size(78, 29);
			this->paperButton->TabIndex = 2;
			this->paperButton->Text = L"Paper";
			this->paperButton->UseVisualStyleBackColor = false;
			this->paperButton->Click += gcnew System::EventHandler(this, &MyForm::paperClick);
			// 
			// appTitle
			// 
			this->appTitle->AutoSize = true;
			this->appTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->appTitle->Location = System::Drawing::Point(12, 96);
			this->appTitle->Name = L"appTitle";
			this->appTitle->Size = System::Drawing::Size(143, 25);
			this->appTitle->TabIndex = 3;
			this->appTitle->Text = L"Add Apparatus";
			this->appTitle->Click += gcnew System::EventHandler(this, &MyForm::appTitle_Click);
			// 
			// apparatus
			// 
			this->apparatus->BackColor = System::Drawing::Color::Transparent;
			this->apparatus->ImageLocation = L"img/blackPaper.png";
			this->apparatus->Location = System::Drawing::Point(175, 96);
			this->apparatus->Name = L"apparatus";
			this->apparatus->Size = System::Drawing::Size(399, 321);
			this->apparatus->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->apparatus->TabIndex = 4;
			this->apparatus->TabStop = false;
			this->apparatus->Visible = false;
			this->apparatus->Click += gcnew System::EventHandler(this, &MyForm::beaker_Click);
			// 
			// beakerButton
			// 
			this->beakerButton->BackColor = System::Drawing::Color::RosyBrown;
			this->beakerButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->beakerButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->beakerButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->beakerButton->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->beakerButton->Location = System::Drawing::Point(27, 187);
			this->beakerButton->Name = L"beakerButton";
			this->beakerButton->Size = System::Drawing::Size(78, 29);
			this->beakerButton->TabIndex = 5;
			this->beakerButton->Text = L"Beaker";
			this->beakerButton->UseVisualStyleBackColor = false;
			this->beakerButton->Click += gcnew System::EventHandler(this, &MyForm::beakerClick);
			// 
			// colorTitle
			// 
			this->colorTitle->AutoSize = true;
			this->colorTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->colorTitle->Location = System::Drawing::Point(12, 238);
			this->colorTitle->Name = L"colorTitle";
			this->colorTitle->Size = System::Drawing::Size(157, 25);
			this->colorTitle->TabIndex = 6;
			this->colorTitle->Text = L"Choose Pigment";
			// 
			// colorBlack
			// 
			this->colorBlack->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->colorBlack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->colorBlack->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->colorBlack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->colorBlack->ForeColor = System::Drawing::SystemColors::Control;
			this->colorBlack->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->colorBlack->Location = System::Drawing::Point(27, 288);
			this->colorBlack->Name = L"colorBlack";
			this->colorBlack->Size = System::Drawing::Size(78, 29);
			this->colorBlack->TabIndex = 7;
			this->colorBlack->Text = L"Black";
			this->colorBlack->UseVisualStyleBackColor = false;
			this->colorBlack->Click += gcnew System::EventHandler(this, &MyForm::blackColorClick);
			// 
			// colorBlue
			// 
			this->colorBlue->BackColor = System::Drawing::Color::MidnightBlue;
			this->colorBlue->Cursor = System::Windows::Forms::Cursors::Hand;
			this->colorBlue->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->colorBlue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->colorBlue->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->colorBlue->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->colorBlue->Location = System::Drawing::Point(27, 335);
			this->colorBlue->Name = L"colorBlue";
			this->colorBlue->Size = System::Drawing::Size(78, 29);
			this->colorBlue->TabIndex = 8;
			this->colorBlue->Text = L"Blue";
			this->colorBlue->UseVisualStyleBackColor = false;
			this->colorBlue->Click += gcnew System::EventHandler(this, &MyForm::blueColorClick);
			// 
			// colorGreen
			// 
			this->colorGreen->BackColor = System::Drawing::Color::ForestGreen;
			this->colorGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->colorGreen->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->colorGreen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->colorGreen->ForeColor = System::Drawing::Color::Snow;
			this->colorGreen->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->colorGreen->Location = System::Drawing::Point(27, 382);
			this->colorGreen->Name = L"colorGreen";
			this->colorGreen->Size = System::Drawing::Size(78, 29);
			this->colorGreen->TabIndex = 9;
			this->colorGreen->Text = L"Green";
			this->colorGreen->UseVisualStyleBackColor = false;
			this->colorGreen->Click += gcnew System::EventHandler(this, &MyForm::greenColorClick);
			// 
			// colorRed
			// 
			this->colorRed->BackColor = System::Drawing::Color::Maroon;
			this->colorRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->colorRed->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->colorRed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->colorRed->ForeColor = System::Drawing::Color::Snow;
			this->colorRed->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->colorRed->Location = System::Drawing::Point(27, 429);
			this->colorRed->Name = L"colorRed";
			this->colorRed->Size = System::Drawing::Size(78, 29);
			this->colorRed->TabIndex = 11;
			this->colorRed->Text = L"Red";
			this->colorRed->UseVisualStyleBackColor = false;
			this->colorRed->Click += gcnew System::EventHandler(this, &MyForm::redColorClick);
			// 
			// calculate
			// 
			this->calculate->BackColor = System::Drawing::Color::SkyBlue;
			this->calculate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->calculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->calculate->Location = System::Drawing::Point(611, 440);
			this->calculate->Margin = System::Windows::Forms::Padding(2);
			this->calculate->Name = L"calculate";
			this->calculate->Size = System::Drawing::Size(162, 47);
			this->calculate->TabIndex = 10;
			this->calculate->Text = L"Calculate";
			this->calculate->UseVisualStyleBackColor = false;
			this->calculate->Click += gcnew System::EventHandler(this, &MyForm::calc);
			// 
			// errorBox
			// 
			this->errorBox->AutoSize = true;
			this->errorBox->BackColor = System::Drawing::Color::DarkRed;
			this->errorBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->errorBox->ForeColor = System::Drawing::Color::MistyRose;
			this->errorBox->Location = System::Drawing::Point(250, 454);
			this->errorBox->Name = L"errorBox";
			this->errorBox->Size = System::Drawing::Size(80, 25);
			this->errorBox->TabIndex = 12;
			this->errorBox->Text = L"ERROR";
			this->errorBox->Visible = false;
			this->errorBox->Click += gcnew System::EventHandler(this, &MyForm::errorBox_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(620, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 25);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Procedure";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(594, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 20);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Step-1 Choose Paper";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(594, 207);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(178, 20);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Step-2 Choose Pigment";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(594, 243);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(171, 20);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Step-3 Choose Beaker";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->Location = System::Drawing::Point(594, 335);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 17);
			this->label5->TabIndex = 17;
			this->label5->Text = L"*Note : This Experiment";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->Location = System::Drawing::Point(598, 352);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(158, 17);
			this->label6->TabIndex = 18;
			this->label6->Text = L"will use fountain pen ink";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->Location = System::Drawing::Point(598, 369);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(143, 17);
			this->label7->TabIndex = 19;
			this->label7->Text = L"of the choosen Color.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(784, 511);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->errorBox);
			this->Controls->Add(this->colorRed);
			this->Controls->Add(this->calculate);
			this->Controls->Add(this->colorGreen);
			this->Controls->Add(this->colorBlue);
			this->Controls->Add(this->colorBlack);
			this->Controls->Add(this->colorTitle);
			this->Controls->Add(this->beakerButton);
			this->Controls->Add(this->apparatus);
			this->Controls->Add(this->appTitle);
			this->Controls->Add(this->paperButton);
			this->Controls->Add(this->Title);
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(800, 550);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Chromatography";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->apparatus))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Int16 stepCount = 0;
	public: System::String^ pigment = "Black";

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void paperClick(System::Object^ sender, System::EventArgs^ e) {
		stepCount = 1;
		this->apparatus->ImageLocation = "img/paper.png";
		if (this->apparatus->Visible == false) {
			this->apparatus->Visible = true;
			this->apparatus->ImageLocation = "img/paper.png";
		}
		else {
			this->apparatus->Visible = false;
		}
	}
	private: System::Void changeColor(System::Int16 count, System::String^ color) {
		if (count == 0) {
			this->errorBox->Text = "ERROR : Select paper first.";
			this->errorBox->Visible = true;
		}
		else if (count == 1) {
			this->errorBox->Visible = false;
			stepCount = 2;
			pigment = color;
			this->apparatus->ImageLocation = "img/"+color+"Paper.png";
		}
		else if (stepCount == 3) {
			this->errorBox->Visible = false;
			pigment = color;
			this->apparatus->ImageLocation = "img/" + color + "PaperBeaker.png";
		}
	}
	private: System::Void blackColorClick(System::Object^ sender, System::EventArgs^ e) {
		if (stepCount == 1 || stepCount ==2) {
			changeColor(1, "Black");
		}
		else if (stepCount == 3) {
			changeColor(3, "Black");
		}
	}

	private: System::Void blueColorClick(System::Object^ sender, System::EventArgs^ e) {
		if (stepCount == 1 || stepCount == 2) {
			changeColor(1, "Blue");
		}
		else if (stepCount == 3) {
			changeColor(3, "Blue");
		}
	}
	private: System::Void greenColorClick(System::Object^ sender, System::EventArgs^ e) {
		if (stepCount == 1 || stepCount == 2) {
			changeColor(1, "Green");
		}
		else if (stepCount == 3) {
			changeColor(3, "Green");
		}
	}
	private: System::Void redColorClick(System::Object^ sender, System::EventArgs^ e) {
		if (stepCount == 1 || stepCount == 2) {
			changeColor(1, "Red");
		}
		else if (stepCount == 3) {
			changeColor(3, "Red");
		}
	}
	private: System::Void beakerClick(System::Object^ sender, System::EventArgs^ e) {
		//stepCount = 2;
		if (stepCount == 0) {
			this->errorBox->Text = "ERROR : Select paper and pigment first.";
			this->errorBox->Visible = true;
		}
		else if (stepCount == 1) {
			this->errorBox->Text = "ERROR : Select pigment first.";
			this->errorBox->Visible = true;
		}
		else if (stepCount == 2) {
			stepCount = 3;
			this->apparatus->ImageLocation = "img/"+pigment+"PaperBeaker.png";

			this->errorBox->Visible = false;
		}
	}

	public: System::Void calc(System::Object^ sender, System::EventArgs^ e) {
		if (stepCount == 3) {
			this->errorBox->Visible = false;
			EVA02::calculation one;
			one.pigment = pigment;
			one.Refresh();
			one.ShowDialog();
			one.Refresh();
		}
		else if (stepCount == 0) {
			this->errorBox->Text = "ERROR : Select paper and pigment first.";
			this->errorBox->Visible = true;
		}
		else if (stepCount == 1) {
			this->errorBox->Text = "ERROR : Select pigment first.";
			this->errorBox->Visible = true;
		}
		else if (stepCount == 2) {
			this->errorBox->Text = "ERROR : Select beaker first.";
			this->errorBox->Visible = true;
		}
	}
	
private: System::Void beaker_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void colorTitle_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Paper_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void calcTable_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void appTitle_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void errorBox_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}


/*
Step -0 : landing page
Step -1 : choose paper
Step -2 : choose pigment
Step -3 : choose beaker
Step -4 : calculate
*/