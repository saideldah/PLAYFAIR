#pragma once
#include<cstring>
#include<ctype.h>
namespace PLAYFAIRWIN {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  table_btn;
	private: System::Windows::Forms::TextBox^  key_txt;
	protected: 


	private: System::Windows::Forms::TextBox^  table_txt;

	private: System::Windows::Forms::TextBox^  plaintext_txt;

	private: System::Windows::Forms::TextBox^  edit_txt;




	private: System::Windows::Forms::Button^  encrypt_btn;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  encrypt_txt;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
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
			this->table_btn = (gcnew System::Windows::Forms::Button());
			this->key_txt = (gcnew System::Windows::Forms::TextBox());
			this->table_txt = (gcnew System::Windows::Forms::TextBox());
			this->plaintext_txt = (gcnew System::Windows::Forms::TextBox());
			this->edit_txt = (gcnew System::Windows::Forms::TextBox());
			this->encrypt_btn = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->encrypt_txt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// table_btn
			// 
			this->table_btn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->table_btn->Location = System::Drawing::Point(114, 57);
			this->table_btn->Name = L"table_btn";
			this->table_btn->Size = System::Drawing::Size(147, 23);
			this->table_btn->TabIndex = 0;
			this->table_btn->Text = L"build up the cipher table";
			this->table_btn->UseVisualStyleBackColor = true;
			this->table_btn->Click += gcnew System::EventHandler(this, &Form1::table_btn_Click);
			// 
			// key_txt
			// 
			this->key_txt->Location = System::Drawing::Point(114, 22);
			this->key_txt->Name = L"key_txt";
			this->key_txt->Size = System::Drawing::Size(147, 20);
			this->key_txt->TabIndex = 1;
			// 
			// table_txt
			// 
			this->table_txt->Location = System::Drawing::Point(114, 86);
			this->table_txt->Multiline = true;
			this->table_txt->Name = L"table_txt";
			this->table_txt->Size = System::Drawing::Size(147, 126);
			this->table_txt->TabIndex = 2;
			// 
			// plaintext_txt
			// 
			this->plaintext_txt->Location = System::Drawing::Point(218, 265);
			this->plaintext_txt->Multiline = true;
			this->plaintext_txt->Name = L"plaintext_txt";
			this->plaintext_txt->Size = System::Drawing::Size(385, 111);
			this->plaintext_txt->TabIndex = 3;
			// 
			// edit_txt
			// 
			this->edit_txt->Location = System::Drawing::Point(218, 452);
			this->edit_txt->Multiline = true;
			this->edit_txt->Name = L"edit_txt";
			this->edit_txt->Size = System::Drawing::Size(385, 116);
			this->edit_txt->TabIndex = 4;
			// 
			// encrypt_btn
			// 
			this->encrypt_btn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->encrypt_btn->Location = System::Drawing::Point(371, 393);
			this->encrypt_btn->Name = L"encrypt_btn";
			this->encrypt_btn->Size = System::Drawing::Size(75, 23);
			this->encrypt_btn->TabIndex = 5;
			this->encrypt_btn->Text = L"encrypt";
			this->encrypt_btn->UseVisualStyleBackColor = true;
			this->encrypt_btn->Click += gcnew System::EventHandler(this, &Form1::encrypt_btn_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->key_txt);
			this->groupBox1->Controls->Add(this->table_txt);
			this->groupBox1->Controls->Add(this->table_btn);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(218, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(385, 224);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"cipher table";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"key word";
			// 
			// encrypt_txt
			// 
			this->encrypt_txt->Location = System::Drawing::Point(218, 607);
			this->encrypt_txt->Multiline = true;
			this->encrypt_txt->Name = L"encrypt_txt";
			this->encrypt_txt->Size = System::Drawing::Size(385, 126);
			this->encrypt_txt->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(76, 306);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"enter the plaintext";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(76, 663);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"encrypt text";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(76, 501);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"edit plaintext";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(662, 83);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(796, 748);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->encrypt_txt);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->encrypt_btn);
			this->Controls->Add(this->edit_txt);
			this->Controls->Add(this->plaintext_txt);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
static const int n=5;
private: void cipher_table(String^ key , char table[][n])
{
	char letter='A';
	int r=0;
	int c=0;
	int i=0;
	//int len=key->Length;
	//while(i<key->Length)
	while(i<key_txt->Text->Length)
	{
		if( ((key[i]>='a' && key[i]<='z') || (key[i]>'A' && key[i]<'Z')) && key[i]!='q' && key[i]!='Q' && key[i]!=' ' && !found(table,toupper(key[i])) )
		{
			if(c<5)
			{
				table[r][c]=toupper(key[i]);
				c++;
			}
			else
			{
				c=0;
				r++;
				table[r][c]=toupper(key[i]);
				c++;
			}
		}
		i++;
	}
	while(letter<='Z')
	{
		if(letter !='Q' && !found(table,letter))
		{
			if(c<5)
			{
				table[r][c]=letter;
				c++;
			}
			else
			{
				c=0;
				r++;
				table[r][c]=letter;
				c++;
			}
		}
		letter++;
	}
}
//-------------------------------------
private: bool found(char table[][n] , char letter)
{
	bool f=false;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			if(table[i][j]==letter)
			{
				f=true;
			}
		}
	}
	return f;
}
//-------------------------------------
private: void print(char table[][n])
{
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			table_txt->Text+=table[i][j]+"  ";
		}
		table_txt->Text+="\r\n";
	}

}
//-------------------------------------
private: void plaintext_edit(char plaintext[])
{
	int counter=0;
	int len=strlen(plaintext);
	for(int i=0; i<=len ; i++)
	{
		if(plaintext[i]==' ')
		{
			removal(plaintext,'L',i);
		}
		len=strlen(plaintext);
	}
	while(counter<len)
	{
		if( plaintext[counter]==plaintext[counter+1] || plaintext[counter+1]=='\0')
		{
			removal(plaintext,'R',counter);
			plaintext[counter+1]='x';
		}
		counter+=2;
		len=strlen(plaintext);
	}
}
//---------------------------------------
private: void removal(char plaintext[], char direction , int index)
{
	int len=strlen(plaintext);
	if(direction=='L')
	{
		for(int i=index ; i<len ; i++)
		{
			plaintext[i]=plaintext[i+1];
		}
	}
	else
	{
		for(int i=len+1 ; i>index ; i--)
		{
			plaintext[i+1]=plaintext[i];
		}
	}
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void table_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ key;
			String^ plaintext;
			char table[n][n];
			for(int i=0 ; i<n ; i++)
			{
				for(int j=0 ; j<n ; j++)
				{
					table[i][j]='\0';
				}
			}
			cipher_table(key,table);
			print(table);
		 }
private: System::Void encrypt_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ key;
			String^ plaintext;
			char table[n][n];
			for(int i=0 ; i<n ; i++)
			{
				for(int j=0 ; j<n ; j++)
				{
					table[i][j]='\0';
				}
			}
			cipher_table(key,table);
			print(table);
		 }
		 private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

}
};
}

