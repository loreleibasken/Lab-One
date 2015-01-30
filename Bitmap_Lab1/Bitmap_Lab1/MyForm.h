#pragma once

#include "icon.h"

namespace Project1 {

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
	private: System::Windows::Forms::Button^  show;
	protected:

	protected:
	private: System::Windows::Forms::Button^  button2;

			 //Graphics^ g;
			 //Bitmap^ bmp = gcnew Bitmap("Graphics/dog.bmp");
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

	private: icon^ myIcon;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->show = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// show
			// 
			this->show->Location = System::Drawing::Point(468, 12);
			this->show->Name = L"show";
			this->show->Size = System::Drawing::Size(75, 46);
			this->show->TabIndex = 0;
			this->show->Text = L"Show";
			this->show->UseVisualStyleBackColor = true;
			this->show->Click += gcnew System::EventHandler(this, &MyForm::show_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(599, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Hide";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(421, 439);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(540, 196);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 43);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Up";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(540, 291);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(65, 43);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Down";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(478, 245);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 40);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Left";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(599, 245);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 40);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Right";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 517);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->show);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		myIcon = gcnew icon(pictureBox1);
	}

	private: System::Void show_Click(System::Object^  sender, System::EventArgs^  e) {
		myIcon->show();
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		myIcon->hide();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		myIcon->up();
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 myIcon->down();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

			 myIcon->left();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

			 myIcon->right();
}
};
}
