#pragma once

namespace TestFormCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TestForm
	/// </summary>
	public ref class TestForm : public System::Windows::Forms::Form
	{
	public:
		TestForm(void)
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
		~TestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  helloWorld;
	private: System::Windows::Forms::Button^  pushMe;
	protected:


	protected:

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
			this->helloWorld = (gcnew System::Windows::Forms::Label());
			this->pushMe = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// helloWorld
			// 
			this->helloWorld->AutoSize = true;
			this->helloWorld->Location = System::Drawing::Point(183, 134);
			this->helloWorld->Name = L"helloWorld";
			this->helloWorld->Size = System::Drawing::Size(68, 13);
			this->helloWorld->TabIndex = 0;
			this->helloWorld->Text = L"Hello, World!";
			this->helloWorld->Click += gcnew System::EventHandler(this, &TestForm::label1_Click);
			// 
			// pushMe
			// 
			this->pushMe->Location = System::Drawing::Point(186, 40);
			this->pushMe->Name = L"pushMe";
			this->pushMe->Size = System::Drawing::Size(65, 23);
			this->pushMe->TabIndex = 1;
			this->pushMe->Text = L"Push Me!";
			this->pushMe->UseVisualStyleBackColor = true;
			this->pushMe->Click += gcnew System::EventHandler(this, &TestForm::pushMe_Click);
			// 
			// TestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 304);
			this->Controls->Add(this->pushMe);
			this->Controls->Add(this->helloWorld);
			this->Name = L"TestForm";
			this->Text = L"TestForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pushMe_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	};
}
