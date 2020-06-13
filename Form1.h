#pragma once

namespace My8GadgetPackIconChanger {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int uninst;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			uninst = 0;
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	protected: 

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-1, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(378, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Lumito\'s 8GadgetPack Icon changer";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(377, 56);
			this->label2->TabIndex = 1;
			this->label2->Text = L"This program changes 8GadgetPack\'s context menu icon to Windows 7\'s one.";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(111, 112);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(57, 19);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Install";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(206, 112);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(73, 19);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Uninstall";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->DetectUrls = false;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(12, 170);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ShortcutsEnabled = false;
			this->richTextBox1->Size = System::Drawing::Size(352, 94);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			this->richTextBox1->WordWrap = false;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(361, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Output:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(151, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 28);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Install";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label4
			// 
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(143, 301);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 25);
			this->label4->TabIndex = 7;
			this->label4->Text = L"www.lumito.net";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(376, 328);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Opacity = 0.95;
			this->Text = L"8GadgetPack Icon Changer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					uninst = 1;
					button1 -> Text = "Uninstall";
					richTextBox1 -> Text = "";
				}
		private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					uninst = 0;
					button1 -> Text = "Install";
					richTextBox1 -> Text = "";
				}
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
					 richTextBox1 -> Text = "";
					 button1 -> Enabled = false;
					 Sleep(500);
					 radioButton1 -> Enabled = false;
					 radioButton2 -> Enabled = false;
					 if(uninst == 0)
					 {
						 richTextBox1 -> Text = "Initializing installation...";
						 richTextBox1 -> Text += "\nChanging registry values...";
						 richTextBox1 -> Text += "\nModifying Icon (REG_EXPAND_SZ) in HKCR\\DesktopBackground\\Shell\\Gadgets...";
						 richTextBox1 -> Text += "\n\"%ProgramFiles%\\Windows Sidebar\\dwmapi.dll,0\" -> \"%ProgramFiles%\\Windows Sidebar\\sidebar.exe,0\"";
						 int err = system("@reg add HKCR\\DesktopBackground\\Shell\\Gadgets /v Icon /t REG_EXPAND_SZ /d \"%ProgramFiles%\\Windows Sidebar\\sidebar.exe,0\" /f >NUL 2>NUL");
						 if(err == 0)
						 {
							 richTextBox1 -> Text += "\nInstallation done!";
							 radioButton1 -> Enabled = true;
							 radioButton2 -> Enabled = true;
							 button1 -> Enabled = true;
						 }
						 else
						 {
							 richTextBox1 -> Text += "\nError while installing";
							 radioButton1 -> Enabled = true;
							 radioButton2 -> Enabled = true;
							 button1 -> Enabled = true;
						 }
					 }
					 else if(uninst == 1)
					 {
						 richTextBox1 -> Text = "Initializing uninstallation...";
						 richTextBox1 -> Text = richTextBox1 -> Text + "\nReverting registry values...";
						 richTextBox1 -> Text += "\nModifying Icon (REG_EXPAND_SZ) in HKCR\\DesktopBackground\\Shell\\Gadgets...";
						 richTextBox1 -> Text += "\n\"%ProgramFiles%\\Windows Sidebar\\sidebar.exe,0\" -> \"%ProgramFiles%\\Windows Sidebar\\dwmapi.dll,0\"";
						 int err = system("@reg add HKCR\\DesktopBackground\\Shell\\Gadgets /v Icon /t REG_EXPAND_SZ /d \"%ProgramFiles%\\Windows Sidebar\\dwmapi.dll,0\" /f >NUL 2>NUL");
						 if(err == 0)
						 {
							 richTextBox1 -> Text += "\nUninstallation done!";
							 radioButton1 -> Enabled = true;
							 radioButton2 -> Enabled = true;
							 button1 -> Enabled = true;
						 }
						 else
						 {
							 richTextBox1 -> Text += "\nError while uninstalling";
							 radioButton1 -> Enabled = true;
							 radioButton2 -> Enabled = true;
							 button1 -> Enabled = true;
						 }
					 }
				}
		private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
					 WinExec("cmd /c start https://lumito.net", SW_HIDE);
				}
};
}
