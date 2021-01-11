#pragma once

namespace ProjetoCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
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
	private: System::Windows::Forms::Button^ btnRemoverViagens;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Button^ btnPreencherGrid;
	private: System::Windows::Forms::Button^ btnLimparGrid;
	private: System::Windows::Forms::Button^ btnInserirViagens;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtMarcaCarro;
	private: System::Windows::Forms::TextBox^ txtKilometros;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnVerificarKilometros;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
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
			this->btnRemoverViagens = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnPreencherGrid = (gcnew System::Windows::Forms::Button());
			this->btnLimparGrid = (gcnew System::Windows::Forms::Button());
			this->btnInserirViagens = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtMarcaCarro = (gcnew System::Windows::Forms::TextBox());
			this->txtKilometros = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnVerificarKilometros = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnRemoverViagens
			// 
			this->btnRemoverViagens->Location = System::Drawing::Point(30, 402);
			this->btnRemoverViagens->Name = L"btnRemoverViagens";
			this->btnRemoverViagens->Size = System::Drawing::Size(140, 23);
			this->btnRemoverViagens->TabIndex = 0;
			this->btnRemoverViagens->Text = L"Remover Viagens";
			this->btnRemoverViagens->UseVisualStyleBackColor = true;
			this->btnRemoverViagens->Click += gcnew System::EventHandler(this, &Form1::btnRemoverViagens_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(224, 97);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(241, 328);
			this->dataGridView1->TabIndex = 1;
			// 
			// btnPreencherGrid
			// 
			this->btnPreencherGrid->Location = System::Drawing::Point(30, 97);
			this->btnPreencherGrid->Name = L"btnPreencherGrid";
			this->btnPreencherGrid->Size = System::Drawing::Size(140, 23);
			this->btnPreencherGrid->TabIndex = 2;
			this->btnPreencherGrid->Text = L"Preencher Grid";
			this->btnPreencherGrid->UseVisualStyleBackColor = true;
			this->btnPreencherGrid->Click += gcnew System::EventHandler(this, &Form1::btnPreencherGrid_Click);
			// 
			// btnLimparGrid
			// 
			this->btnLimparGrid->Location = System::Drawing::Point(30, 136);
			this->btnLimparGrid->Name = L"btnLimparGrid";
			this->btnLimparGrid->Size = System::Drawing::Size(140, 23);
			this->btnLimparGrid->TabIndex = 3;
			this->btnLimparGrid->Text = L"Limpar Grid";
			this->btnLimparGrid->UseVisualStyleBackColor = true;
			this->btnLimparGrid->Click += gcnew System::EventHandler(this, &Form1::btnLimparGrid_Click);
			// 
			// btnInserirViagens
			// 
			this->btnInserirViagens->Location = System::Drawing::Point(30, 178);
			this->btnInserirViagens->Name = L"btnInserirViagens";
			this->btnInserirViagens->Size = System::Drawing::Size(140, 23);
			this->btnInserirViagens->TabIndex = 4;
			this->btnInserirViagens->Text = L"Inserir Viagens em Baixo";
			this->btnInserirViagens->UseVisualStyleBackColor = true;
			this->btnInserirViagens->Click += gcnew System::EventHandler(this, &Form1::btnInserirViagens_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 312);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Contar Viagens";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txtMarcaCarro
			// 
			this->txtMarcaCarro->Location = System::Drawing::Point(30, 230);
			this->txtMarcaCarro->Name = L"txtMarcaCarro";
			this->txtMarcaCarro->Size = System::Drawing::Size(77, 20);
			this->txtMarcaCarro->TabIndex = 6;
			this->txtMarcaCarro->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtKilometros
			// 
			this->txtKilometros->Location = System::Drawing::Point(130, 230);
			this->txtKilometros->Name = L"txtKilometros";
			this->txtKilometros->Size = System::Drawing::Size(40, 20);
			this->txtKilometros->TabIndex = 7;
			this->txtKilometros->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 214);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Marca do Carro";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(139, 214);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Km";
			// 
			// btnVerificarKilometros
			// 
			this->btnVerificarKilometros->Location = System::Drawing::Point(30, 261);
			this->btnVerificarKilometros->Name = L"btnVerificarKilometros";
			this->btnVerificarKilometros->Size = System::Drawing::Size(140, 23);
			this->btnVerificarKilometros->TabIndex = 9;
			this->btnVerificarKilometros->Text = L"Verificar n.º de Kms";
			this->btnVerificarKilometros->UseVisualStyleBackColor = true;
			this->btnVerificarKilometros->Click += gcnew System::EventHandler(this, &Form1::btnVerificarKilometros_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(79, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(328, 31);
			this->label3->TabIndex = 8;
			this->label3->Text = L"REGISTO DE VIAGENS";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Marca Carro";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Km";
			this->Column2->Name = L"Column2";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(538, 488);
			this->Controls->Add(this->btnVerificarKilometros);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtKilometros);
			this->Controls->Add(this->txtMarcaCarro);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnInserirViagens);
			this->Controls->Add(this->btnLimparGrid);
			this->Controls->Add(this->btnPreencherGrid);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnRemoverViagens);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRemoverViagens_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}
	private: System::Void btnPreencherGrid_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//Inicializar a Grid com os dados em baixo.
		dataGridView1->Rows->Add("FIAT", 300);
		dataGridView1->Rows->Add("FORD", 100);
		dataGridView1->Rows->Add("OPEL", 50);
		dataGridView1->Rows->Add("OPEL", 60);
		dataGridView1->Rows->Add("FIAT", 190);
	}
private: System::Void btnLimparGrid_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//Limpar a Grid.
		dataGridView1->Rows->Clear();
	}
private: System::Void btnInserirViagens_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//Inserir uma marca de um Carro e Respetivos Kilometros SE os campos não estiverem vazios.
		
		if ( (txtKilometros->Text != "") && (txtMarcaCarro->Text != "") )
		{
			
			dataGridView1->Rows->Add(txtMarcaCarro->Text, txtKilometros->Text);
			
		}
		else
		{
			MessageBox::Show("Por favor Preencha TODOS os campos!");
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//Somar ou obter o total das Viagens Realizadas por todos os Carros

		//A variável "total" é iniciaizada a zero
		int total = 0;

		//A variável "localizar" conta o número de linhas menos a ultima "-1"
		int localizar = dataGridView1->Rows->Count - 1;

		//O ciclo FOR percorre todas as linhas e conta os números da segunda coluna "Cells [1]"
		//Ou seja, copia os numeros da segunda coluna de cada linha e adiciona à variável "total"
		for (size_t i = 0; i < localizar; i++)
		{
			total = total + Convert::ToInt16 (dataGridView1->Rows[i]->Cells[1]->Value);
		}

		//Depois de terminado o Ciclo, o valor da variável "total" passa para a textBox "txtKilometros"
		txtKilometros->Text = Convert::ToString(total);
	}
private: System::Void btnVerificarKilometros_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//Contabiliza os Kilómetros percorridos da marca digitada na TextBox
		

	}
};
}
