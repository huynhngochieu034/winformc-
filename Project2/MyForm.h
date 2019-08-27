#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}


	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
			serialPort1->Close();
			timer1->Stop();
		}
	private: System::IO::Ports::SerialPort^  serialPort1;
	protected:

	private: System::Windows::Forms::TextBox^  textBox_dattocdo;

	private: System::Windows::Forms::Button^  button_send;






	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;

	private:
		String^ mStr;
		String^ speed;
		int i;
	private: System::Windows::Forms::TextBox^  textBox_KP;
	private: System::Windows::Forms::TextBox^  textBox_KI;
	private: System::Windows::Forms::TextBox^  textBox_KD;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button_start;
	private: System::Windows::Forms::TextBox^  textBox_tocdothuc;




	private: System::Windows::Forms::Button^  button_quaythuan;
	private: System::Windows::Forms::Button^  button_quaynghich;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;



	private: System::Windows::Forms::Button^  button_stop;



#pragma region Windows Form Designer generated code
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
				 System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
				 System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
				 System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
				 this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
				 this->textBox_dattocdo = (gcnew System::Windows::Forms::TextBox());
				 this->button_send = (gcnew System::Windows::Forms::Button());
				 this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
				 this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
				 this->textBox_KP = (gcnew System::Windows::Forms::TextBox());
				 this->textBox_KI = (gcnew System::Windows::Forms::TextBox());
				 this->textBox_KD = (gcnew System::Windows::Forms::TextBox());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->label6 = (gcnew System::Windows::Forms::Label());
				 this->button_start = (gcnew System::Windows::Forms::Button());
				 this->button_stop = (gcnew System::Windows::Forms::Button());
				 this->textBox_tocdothuc = (gcnew System::Windows::Forms::TextBox());
				 this->button_quaythuan = (gcnew System::Windows::Forms::Button());
				 this->button_quaynghich = (gcnew System::Windows::Forms::Button());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->label8 = (gcnew System::Windows::Forms::Label());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // serialPort1
				 // 
				 this->serialPort1->PortName = L"COM1";
				 this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &Form1::serialPort1_DataReceived);
				 // 
				 // textBox_dattocdo
				 // 
				 this->textBox_dattocdo->Location = System::Drawing::Point(253, 54);
				 this->textBox_dattocdo->Name = L"textBox_dattocdo";
				 this->textBox_dattocdo->Size = System::Drawing::Size(73, 20);
				 this->textBox_dattocdo->TabIndex = 1;
				 this->textBox_dattocdo->Text = L"0";
				 // 
				 // button_send
				 // 
				 this->button_send->Location = System::Drawing::Point(202, 203);
				 this->button_send->Name = L"button_send";
				 this->button_send->Size = System::Drawing::Size(143, 30);
				 this->button_send->TabIndex = 2;
				 this->button_send->Text = L"Send";
				 this->button_send->UseVisualStyleBackColor = true;
				 this->button_send->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
				 // 
				 // timer1
				 // 
				 this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
				 // 
				 // chart1
				 // 
				 chartArea1->Name = L"ChartArea1";
				 this->chart1->ChartAreas->Add(chartArea1);
				 legend1->Name = L"Legend1";
				 this->chart1->Legends->Add(legend1);
				 this->chart1->Location = System::Drawing::Point(398, 28);
				 this->chart1->Name = L"chart1";
				 series1->ChartArea = L"ChartArea1";
				 series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
				 series1->Color = System::Drawing::Color::Red;
				 series1->LabelForeColor = System::Drawing::Color::Maroon;
				 series1->Legend = L"Legend1";
				 series1->Name = L"Speed";
				 series1->ShadowColor = System::Drawing::Color::Green;
				 this->chart1->Series->Add(series1);
				 this->chart1->Size = System::Drawing::Size(403, 254);
				 this->chart1->TabIndex = 3;
				 this->chart1->Text = L"chart1";
				 title1->Name = L"Title1";
				 title1->Text = L"DC Motor Speed Display Graph";
				 this->chart1->Titles->Add(title1);
				 // 
				 // textBox_KP
				 // 
				 this->textBox_KP->Location = System::Drawing::Point(46, 51);
				 this->textBox_KP->Name = L"textBox_KP";
				 this->textBox_KP->Size = System::Drawing::Size(70, 20);
				 this->textBox_KP->TabIndex = 4;
				 this->textBox_KP->Text = L"0.07";
				 // 
				 // textBox_KI
				 // 
				 this->textBox_KI->Location = System::Drawing::Point(46, 97);
				 this->textBox_KI->Name = L"textBox_KI";
				 this->textBox_KI->Size = System::Drawing::Size(70, 20);
				 this->textBox_KI->TabIndex = 5;
				 this->textBox_KI->Text = L"0.05";
				 // 
				 // textBox_KD
				 // 
				 this->textBox_KD->Location = System::Drawing::Point(46, 147);
				 this->textBox_KD->Name = L"textBox_KD";
				 this->textBox_KD->Size = System::Drawing::Size(70, 20);
				 this->textBox_KD->TabIndex = 6;
				 this->textBox_KD->Text = L"0.03";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
					 static_cast<System::Int32>(static_cast<System::Byte>(224)));
				 this->label2->ForeColor = System::Drawing::Color::Red;
				 this->label2->Location = System::Drawing::Point(181, 57);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(60, 13);
				 this->label2->TabIndex = 7;
				 this->label2->Text = L"Set_Speed";
				 this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
					 static_cast<System::Int32>(static_cast<System::Byte>(224)));
				 this->label3->ForeColor = System::Drawing::Color::Red;
				 this->label3->Location = System::Drawing::Point(9, 51);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(21, 13);
				 this->label3->TabIndex = 8;
				 this->label3->Text = L"KP";
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
					 static_cast<System::Int32>(static_cast<System::Byte>(224)));
				 this->label4->ForeColor = System::Drawing::Color::Red;
				 this->label4->Location = System::Drawing::Point(9, 104);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(17, 13);
				 this->label4->TabIndex = 9;
				 this->label4->Text = L"KI";
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
					 static_cast<System::Int32>(static_cast<System::Byte>(224)));
				 this->label5->ForeColor = System::Drawing::Color::Red;
				 this->label5->Location = System::Drawing::Point(9, 154);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(22, 13);
				 this->label5->TabIndex = 10;
				 this->label5->Text = L"KD";
				 // 
				 // label6
				 // 
				 this->label6->AutoSize = true;
				 this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
					 static_cast<System::Int32>(static_cast<System::Byte>(224)));
				 this->label6->ForeColor = System::Drawing::Color::Red;
				 this->label6->Location = System::Drawing::Point(180, 104);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(66, 13);
				 this->label6->TabIndex = 11;
				 this->label6->Text = L"Real_Speed";
				 // 
				 // button_start
				 // 
				 this->button_start->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 this->button_start->ForeColor = System::Drawing::Color::White;
				 this->button_start->Location = System::Drawing::Point(12, 204);
				 this->button_start->Name = L"button_start";
				 this->button_start->Size = System::Drawing::Size(143, 29);
				 this->button_start->TabIndex = 12;
				 this->button_start->Text = L"Start";
				 this->button_start->UseVisualStyleBackColor = false;
				 this->button_start->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
				 // 
				 // button_stop
				 // 
				 this->button_stop->BackColor = System::Drawing::Color::Red;
				 this->button_stop->ForeColor = System::Drawing::Color::White;
				 this->button_stop->Location = System::Drawing::Point(12, 254);
				 this->button_stop->Name = L"button_stop";
				 this->button_stop->Size = System::Drawing::Size(143, 28);
				 this->button_stop->TabIndex = 13;
				 this->button_stop->Text = L"Stop";
				 this->button_stop->UseVisualStyleBackColor = false;
				 this->button_stop->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
				 // 
				 // textBox_tocdothuc
				 // 
				 this->textBox_tocdothuc->Location = System::Drawing::Point(253, 97);
				 this->textBox_tocdothuc->Name = L"textBox_tocdothuc";
				 this->textBox_tocdothuc->ReadOnly = true;
				 this->textBox_tocdothuc->Size = System::Drawing::Size(73, 20);
				 this->textBox_tocdothuc->TabIndex = 14;
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label1->ForeColor = System::Drawing::Color::White;
				 this->label1->Location = System::Drawing::Point(8, 12);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(318, 20);
				 this->label1->TabIndex = 17;
				 this->label1->Text = L"DC MOTOR CONTROL INTERFACE ";
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label7->ForeColor = System::Drawing::Color::White;
				 this->label7->Location = System::Drawing::Point(206, 254);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(139, 20);
				 this->label7->TabIndex = 18;
				 this->label7->Text = L"CLICK TO RUN";
				 // 
				 // label8
				 // 
				 this->label8->AutoSize = true;
				 this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label8->ForeColor = System::Drawing::Color::White;
				 this->label8->Location = System::Drawing::Point(151, 145);
				 this->label8->Name = L"label8";
				 this->label8->Size = System::Drawing::Size(241, 20);
				 this->label8->TabIndex = 21;
				 this->label8->Text = L"Speed (Revolutions/Minute)";
				 // 
				 // Form1
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::DarkTurquoise;
				 this->ClientSize = System::Drawing::Size(839, 313);
				 this->Controls->Add(this->label8);
				 this->Controls->Add(this->label7);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->button_quaynghich);
				 this->Controls->Add(this->button_quaythuan);
				 this->Controls->Add(this->textBox_tocdothuc);
				 this->Controls->Add(this->button_stop);
				 this->Controls->Add(this->button_start);
				 this->Controls->Add(this->label6);
				 this->Controls->Add(this->label5);
				 this->Controls->Add(this->label4);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->textBox_KD);
				 this->Controls->Add(this->textBox_KI);
				 this->Controls->Add(this->textBox_KP);
				 this->Controls->Add(this->chart1);
				 this->Controls->Add(this->button_send);
				 this->Controls->Add(this->textBox_dattocdo);
				 this->Name = L"Form1";
				 this->Text = L"Form1";
				 this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 serialPort1->Open();
				 timer1->Start();
				 mStr = "0";
				 i = 300;
				 //serialPort1->Close();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 serialPort1->WriteLine("vs_set_speed" + textBox_dattocdo->Text);
				 serialPort1->WriteLine("vs_kp" + textBox_KP->Text);
				 serialPort1->WriteLine("vs_ki" + textBox_KI->Text);
				 serialPort1->WriteLine("vs_kd" + textBox_KD->Text);
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 String^ length;
				 length = mStr->Length.ToString();
				 if (System::Convert::ToInt32(length)>5){
					 if (mStr->Substring(0, 5) == "speed"){
						 speed = mStr->Substring(5, System::Convert::ToInt32(length) - 6);
						 textBox_tocdothuc->Text = speed;
						 this->chart1->Series["Speed"]->Points->AddXY(i, System::Convert::ToDouble(speed));
						 i++;
						 this->chart1->ChartAreas["ChartArea1"]->AxisX->Minimum = i - 300;
					 }
				 }
	}
	private: System::Void serialPort1_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
				 mStr = serialPort1->ReadLine();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 serialPort1->WriteLine("vs_start");
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 serialPort1->WriteLine("vs_stop");
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 serialPort1->WriteLine("vs_start");
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 serialPort1->WriteLine("vs_nghich");
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
