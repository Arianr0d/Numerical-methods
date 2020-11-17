#pragma once
#include<cmath>
#include <vector>
namespace ЛР1ЧМ {

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea17 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series33 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series34 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series35 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea18 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series36 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series37 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series38 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea19 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series39 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea20 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series40 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(1080, 325);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Полином Лагранжа";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->Location = System::Drawing::Point(302, 24);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(55, 23);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Location = System::Drawing::Point(46, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 23);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите количество узлов интерполяции: \r\n\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1103, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(10, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"[";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1208, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(10, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"]";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1119, 24);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(32, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1170, 24);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(32, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Location = System::Drawing::Point(1016, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Интервал:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1080, 325);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 43);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Полином Ньютона";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1151, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L";";
			// 
			// chart2
			// 
			this->chart2->BackColor = System::Drawing::Color::GhostWhite;
			this->chart2->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::TopBottom;
			this->chart2->BackImageTransparentColor = System::Drawing::Color::White;
			chartArea17->BackColor = System::Drawing::Color::Azure;
			chartArea17->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea17);
			legend17->Alignment = System::Drawing::StringAlignment::Center;
			legend17->BackColor = System::Drawing::Color::White;
			legend17->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Center;
			legend17->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend17->LegendStyle = System::Windows::Forms::DataVisualization::Charting::LegendStyle::Row;
			legend17->Name = L"Legend1";
			legend17->TableStyle = System::Windows::Forms::DataVisualization::Charting::LegendTableStyle::Wide;
			this->chart2->Legends->Add(legend17);
			this->chart2->Location = System::Drawing::Point(20, 19);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series33->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::TopBottom;
			series33->BorderColor = System::Drawing::Color::White;
			series33->BorderWidth = 2;
			series33->ChartArea = L"ChartArea1";
			series33->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series33->Color = System::Drawing::Color::BlueViolet;
			series33->Legend = L"Legend1";
			series33->LegendText = L"f(x) = e^(-x) + 2 sin(x)";
			series33->MarkerBorderColor = System::Drawing::Color::White;
			series33->MarkerColor = System::Drawing::Color::MediumPurple;
			series33->MarkerSize = 6;
			series33->Name = L"Series1";
			series34->BorderColor = System::Drawing::Color::White;
			series34->BorderWidth = 2;
			series34->ChartArea = L"ChartArea1";
			series34->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series34->Color = System::Drawing::Color::PaleVioletRed;
			series34->Legend = L"Legend1";
			series34->LegendText = L"L(x)";
			series34->Name = L"Series2";
			series35->ChartArea = L"ChartArea1";
			series35->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series35->IsVisibleInLegend = false;
			series35->Legend = L"Legend1";
			series35->MarkerColor = System::Drawing::Color::DarkViolet;
			series35->MarkerSize = 6;
			series35->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			series35->Name = L"Series3";
			this->chart2->Series->Add(series33);
			this->chart2->Series->Add(series34);
			this->chart2->Series->Add(series35);
			this->chart2->Size = System::Drawing::Size(530, 349);
			this->chart2->TabIndex = 13;
			this->chart2->Text = L"chart2";
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Location = System::Drawing::Point(476, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(173, 23);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Исходная функция:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Controls->Add(this->chart1);
			this->groupBox1->Controls->Add(this->chart4);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(12, 453);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1232, 384);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->richTextBox1->Location = System::Drawing::Point(586, 325);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(470, 43);
			this->richTextBox1->TabIndex = 14;
			this->richTextBox1->Text = L"";
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::GhostWhite;
			this->chart1->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::TopBottom;
			this->chart1->BackImageTransparentColor = System::Drawing::Color::White;
			chartArea18->BackColor = System::Drawing::Color::Azure;
			chartArea18->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea18);
			legend18->Alignment = System::Drawing::StringAlignment::Center;
			legend18->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Top;
			legend18->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend18->LegendStyle = System::Windows::Forms::DataVisualization::Charting::LegendStyle::Row;
			legend18->Name = L"Legend1";
			this->chart1->Legends->Add(legend18);
			this->chart1->Location = System::Drawing::Point(20, 19);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series36->BorderColor = System::Drawing::Color::White;
			series36->BorderWidth = 2;
			series36->ChartArea = L"ChartArea1";
			series36->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series36->Color = System::Drawing::Color::BlueViolet;
			series36->Legend = L"Legend1";
			series36->LegendText = L"f(x) = e^(-x) + 2 sin(x)";
			series36->Name = L"Series1";
			series37->BorderColor = System::Drawing::Color::White;
			series37->BorderWidth = 2;
			series37->ChartArea = L"ChartArea1";
			series37->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series37->Color = System::Drawing::Color::PaleVioletRed;
			series37->Legend = L"Legend1";
			series37->LegendText = L"L(x)";
			series37->Name = L"Series2";
			series38->ChartArea = L"ChartArea1";
			series38->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series38->Color = System::Drawing::Color::DarkViolet;
			series38->IsVisibleInLegend = false;
			series38->Legend = L"Legend1";
			series38->MarkerColor = System::Drawing::Color::DarkViolet;
			series38->MarkerSize = 6;
			series38->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			series38->Name = L"Series3";
			this->chart1->Series->Add(series36);
			this->chart1->Series->Add(series37);
			this->chart1->Series->Add(series38);
			this->chart1->Size = System::Drawing::Size(530, 349);
			this->chart1->TabIndex = 13;
			this->chart1->Text = L"chart1";
			// 
			// chart4
			// 
			chartArea19->BackColor = System::Drawing::Color::Azure;
			chartArea19->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea19);
			legend19->Enabled = false;
			legend19->Name = L"Legend1";
			this->chart4->Legends->Add(legend19);
			this->chart4->Location = System::Drawing::Point(586, 19);
			this->chart4->Name = L"chart4";
			series39->BorderColor = System::Drawing::Color::White;
			series39->BorderWidth = 2;
			series39->ChartArea = L"ChartArea1";
			series39->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series39->Color = System::Drawing::Color::Red;
			series39->Legend = L"Legend1";
			series39->Name = L"Series1";
			this->chart4->Series->Add(series39);
			this->chart4->Size = System::Drawing::Size(470, 279);
			this->chart4->TabIndex = 12;
			this->chart4->Text = L"chart4";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Gainsboro;
			this->groupBox2->Controls->Add(this->richTextBox2);
			this->groupBox2->Controls->Add(this->chart3);
			this->groupBox2->Controls->Add(this->chart2);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox2->Location = System::Drawing::Point(12, 62);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1232, 385);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->richTextBox2->Location = System::Drawing::Point(586, 325);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox2->Size = System::Drawing::Size(470, 43);
			this->richTextBox2->TabIndex = 15;
			this->richTextBox2->Text = L"";
			// 
			// chart3
			// 
			chartArea20->BackColor = System::Drawing::Color::Azure;
			chartArea20->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea20);
			legend20->Enabled = false;
			legend20->Name = L"Legend1";
			this->chart3->Legends->Add(legend20);
			this->chart3->Location = System::Drawing::Point(586, 19);
			this->chart3->Name = L"chart3";
			series40->BackSecondaryColor = System::Drawing::Color::White;
			series40->BorderColor = System::Drawing::Color::White;
			series40->BorderWidth = 2;
			series40->ChartArea = L"ChartArea1";
			series40->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series40->Color = System::Drawing::Color::Red;
			series40->LabelBackColor = System::Drawing::Color::White;
			series40->LabelBorderColor = System::Drawing::Color::White;
			series40->Legend = L"Legend1";
			series40->MarkerBorderColor = System::Drawing::Color::Gray;
			series40->MarkerColor = System::Drawing::Color::Gray;
			series40->MarkerSize = 6;
			series40->Name = L"Series1";
			series40->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart3->Series->Add(series40);
			this->chart3->Size = System::Drawing::Size(470, 279);
			this->chart3->TabIndex = 14;
			this->chart3->Text = L"chart3";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox4->Location = System::Drawing::Point(655, 21);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(155, 23);
			this->textBox4->TabIndex = 18;
			this->textBox4->Text = L"f(x) = e^(-x) + 2 sin(x)";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1254, 845);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Cursor = System::Windows::Forms::Cursors::Cross;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		double Polinom(double i, int n, std::vector <double> arr_L) {
			double L = 0;
			for (int j = n - 1; j >= 0; j--) {
				L += pow(i, j) * arr_L[n - j - 1];
			}
			return L;
		}

		double Polinom_N(double q, int n, std::vector <double> arr_N) {
			double L = 0;
			for (int j = 0; j < n; j++) {
				L += pow(q, j) * arr_N[j];
			}
			return L;
		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->chart1->Series[0]->Points->Clear();
		this->chart1->Series[1]->Points->Clear();
		this->chart1->Series[2]->Points->Clear();

		this->chart4->Series[0]->Points->Clear();

		this->richTextBox1->Clear();

		int n = int::Parse(textBox1->Text);

		double h = (2 / (double)(n - 1));// исправить
		std::vector<double> arr_x(n);
		for (int i = 0; i < n; i++) {
			arr_x[i] = -1 + h * i;
		}

		std::vector<double> arr_y(n);
		for (int i = 0; i < n; i++) {
			arr_y[i] = exp(-arr_x[i]) + 2 * sin(arr_x[i]);
		}

		std::vector<double> arr_L_coef_1(n);
		for (int i = 0; i < n; i++) {
			arr_L_coef_1[i] = arr_y[i];
			for (int j = 0; j < n; j++) {
				if (i != j) {
					arr_L_coef_1[i] /= (arr_x[i] - arr_x[j]);
				}
			}
		}

		int c = n - 1;
		std::vector <double> arr_L_per_2(n, 1);
		std::vector <double> arr_L(n, 0);
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < n; i++) {
				for (int k = n - c - 1; k >= 0; k--) {
					if (i == j) {
						c++;
						break;
					}
					if (j == 0 && i == 1) {
						arr_L_per_2[k] = -arr_x[i];
						continue;
					}
					if (i == 0) {
						arr_L_per_2[k] = -arr_x[i];
					}
					else {
						if (k == 0) {
							arr_L_per_2[k] *= -arr_x[i];
						}
						else {
							arr_L_per_2[k] = arr_L_per_2[k] * (-arr_x[i]) + arr_L_per_2[k - 1];
						}
					}
				}
				c--;
			}

			for (int i = 0; i < n; i++) {
				arr_L[i] += arr_L_coef_1[j] * arr_L_per_2[n - i - 1];
				arr_L_per_2[n - i - 1] = 1;
			}
			c = n - 1;
		}

		double n1 = double::Parse(textBox2->Text);
		double n2 = double::Parse(textBox3->Text);
		double interval = (abs(n1) + abs(n2)) / 100;

		for (double i = n1; i <= n2; i += interval) {
			this->chart1->Series["Series1"]->Points->AddXY(i, (exp(-i) + 2 * sin(i)));
			this->chart1->Series["Series2"]->Points->AddXY(i, Polinom(i, n, arr_L));
			this->chart4->Series["Series1"]->Points->AddXY(i, abs(exp(-i) + 2 * sin(i) - Polinom(i, n, arr_L)));
		}

		for (int i = 0; i < n; i++) {
			this->chart1->Series["Series3"]->Points->AddXY(arr_x[i], arr_y[i]);
		}

		this->richTextBox1->SelectionCharOffset = 0;
		this->richTextBox1->SelectedText = "L";
		this->richTextBox1->SelectionCharOffset = -6;
		this->richTextBox1->SelectedText = (n - 1).ToString();
		this->richTextBox1->SelectionCharOffset = 0;
		this->richTextBox1->SelectedText = "(x) = ";

		int pr = 0, l = 1;
		for (int i = 0; i < n; i++) {
			if (arr_L[i] == 0 || Math::Round(arr_L[i], 6, MidpointRounding::AwayFromZero) == 0.000000) {
				if (l == 1) {
					pr++;
				}
				continue;
			}
			else if (arr_L[i] > 0) {
				if (pr == 0 && i != 0) {
					this->richTextBox1->SelectionCharOffset = 0;
					this->richTextBox1->SelectedText = " + ";
				}
				else {
					pr = 0;
					l = 0;
				}
				if (((arr_L[i] != 1 && Math::Round(arr_L[i], 6, MidpointRounding::AwayFromZero) != 1.000000) && (n - i - 1) != 0) || (n - i - 1) == 0) {
					this->richTextBox1->SelectionCharOffset = 0;
					this->richTextBox1->SelectedText = Math::Round(arr_L[i], 6, MidpointRounding::AwayFromZero).ToString();
				}
				if ((n - i - 1) == 0) {
					continue;
				}
				this->richTextBox1->SelectionCharOffset = 0;
				this->richTextBox1->SelectedText = " x";
				if ((n - i - 1) == 1) {
					continue;
				}
				this->richTextBox1->SelectionCharOffset = 10;
				this->richTextBox1->SelectedText = (n - i - 1).ToString();
			}
			else if (arr_L[i] < 0) {
				if (pr != 0) {
					pr = 0;
					l = 0;
				}
				this->richTextBox1->SelectionCharOffset = 0;
				this->richTextBox1->SelectedText = " - ";
				if (arr_L[i] != -1 && Math::Round(arr_L[i], 6, MidpointRounding::AwayFromZero) != -1.000000) {
					this->richTextBox1->SelectionCharOffset = 0;
					this->richTextBox1->SelectedText = Math::Round(abs(arr_L[i]), 6, MidpointRounding::AwayFromZero).ToString();
				}
				if ((n - i - 1) == 0) {
					continue;
				}
				this->richTextBox1->SelectionCharOffset = 0;
				this->richTextBox1->SelectedText = " x";
				if ((n - i - 1) == 1) {
					continue;
				}
				this->richTextBox1->SelectionCharOffset = 10;
				this->richTextBox1->SelectedText = (n - i - 1).ToString();
			}
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->chart2->Series[0]->Points->Clear();
		this->chart2->Series[1]->Points->Clear();
		this->chart2->Series[2]->Points->Clear();

		this->chart3->Series[0]->Points->Clear();

		this->richTextBox2->Clear();

		int n = int::Parse(textBox1->Text);

		double h = (2 / (double)(n - 1));
		std::vector<double> arr_x(n);
		for (int i = 0; i < n; i++) {
			arr_x[i] = -1 + h * i;
		}

		std::vector<double> arr_y(n);
		for (int i = 0; i < n; i++) {
			arr_y[i] = exp(-arr_x[i]) + 2 * sin(arr_x[i]);
		}

		std::vector<double> arr_y1(n);
		for (int i = 0; i < n; i++) {
			arr_y1[i] = arr_y[i];
		}

		int c1 = 0;
		std::vector<double> arr_rr(n);
		arr_rr[0] = arr_y1[0];
		for (int j = 1; j < n; j++) {
			for (int i = (n - 2); i >= c1; i--) {
				arr_y1[i + 1] = arr_y1[i + 1] - arr_y1[i];
			}
			c1 = j;
			arr_rr[j] = arr_y1[j];
		}

		c1 = 1;
		arr_y1[0] = 0;
		for (int i = 1; i < n; i++) {
			arr_rr[i] /= c1;
			c1 = c1 * (i + 1);
			if (i <= (n - 1)) {
				arr_y1[i] = -i;
			}
		}

		int l = 1;
		c1 = n;
		std::vector<double> arr_per_N(n, 1);
		std::vector<double> arr_N(n, 0);
		arr_N[0] = arr_rr[0];
		for (int i = 0; i < n; i++) {
			for (int j = n - c1; j > 0 && j < (n - 1); j--) {
				arr_per_N[0] = 0;
				if (i == 0) {
					break;
				}
				else {
					arr_per_N[j] = arr_per_N[j] * (arr_y1[i]) + arr_per_N[j - 1];
				}
			}
			arr_per_N[0] = 0;
			for (int k = 0; k < n; k++) {
			}

			if (l < n) {
				for (int k = 1; k <= l && k < n; k++) {
					arr_N[k] += arr_per_N[k] * arr_rr[i + 1];
				}
			}
			l++;
			c1--;
		}

		double n1 = double::Parse(textBox2->Text);
		double n2 = double::Parse(textBox3->Text);
		double interval = (abs(n1) + abs(n2)) / 100;

		for (double i = n1; i <= n2; i += interval) {
			this->chart2->Series["Series1"]->Points->AddXY(i, (exp(-i) + 2 * sin(i)));
			this->chart2->Series["Series2"]->Points->AddXY(i, Polinom_N(((i - n1) / h), n, arr_N));
			this->chart3->Series["Series1"]->Points->AddXY(i, abs(exp(-i) + 2 * sin(i) - Polinom_N(((i - n1) / h), n, arr_N)));
		}

		for (int i = 0; i < n; i++) {
			this->chart2->Series["Series3"]->Points->AddXY(arr_x[i], arr_y[i]);
		}

		this->richTextBox2->SelectionCharOffset = 0;
		this->richTextBox2->SelectedText = "L";
		this->richTextBox2->SelectionCharOffset = -6;
		this->richTextBox2->SelectedText = (n - 1).ToString();
		this->richTextBox2->SelectionCharOffset = 0;
		this->richTextBox2->SelectedText = "(x) = ";

		int pr1 = 0, l1 = 1;
		for (int i = 0; i < n; i++) {
			if (arr_N[i] == 0 || Math::Round(arr_N[i], 6, MidpointRounding::AwayFromZero) == 0.000000) {
				if (l1 == 1) {
					pr1++;
				}
				continue;
			}
			else if (arr_N[i] > 0) {
				if (pr1 == 0 && i != 0) {
					this->richTextBox2->SelectionCharOffset = 0;
					this->richTextBox2->SelectedText = " + ";
				}
				else {
					pr1 = 0;
					l1 = 0;
				}
				if (((arr_N[i] != 1 && Math::Round(arr_N[i], 6, MidpointRounding::AwayFromZero) != 1.0000000) && (n - i - 1) != 0) || (n - i - 1) == 0) {
					this->richTextBox2->SelectionCharOffset = 0;
					this->richTextBox2->SelectedText = Math::Round(arr_N[i], 6, MidpointRounding::AwayFromZero).ToString();
				}
				if ((n - i - 1) == 0) {
					continue;
				}
				this->richTextBox2->SelectionCharOffset = 0;
				this->richTextBox2->SelectedText = " x";
				if ((n - i - 1) == 1) {
					continue;
				}
				this->richTextBox2->SelectionCharOffset = 10;
				this->richTextBox2->SelectedText = (n - i - 1).ToString();
			}
			else if (arr_N[i] < 0) {
				if (pr1 != 0) {
					pr1 = 0;
					l1 = 0;
				}
				this->richTextBox2->SelectionCharOffset = 0;
				this->richTextBox2->SelectedText = " - ";
				if (arr_N[i] != -1 && Math::Round(arr_N[i], 6, MidpointRounding::AwayFromZero) != -1.000000) {
					this->richTextBox2->SelectionCharOffset = 0;
					this->richTextBox2->SelectedText = Math::Round(abs(arr_N[i]), 6, MidpointRounding::AwayFromZero).ToString();
				}
				if ((n - i - 1) == 0) {
					continue;
				}
				this->richTextBox2->SelectionCharOffset = 0;
				this->richTextBox2->SelectedText = " x";
				if ((n - i - 1) == 1) {
					continue;
				}
				this->richTextBox2->SelectionCharOffset = 10;
				this->richTextBox2->SelectedText = (n - i - 1).ToString();
			}
		}
	}
	};
}