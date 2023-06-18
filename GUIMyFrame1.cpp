#include "GUIMyFrame1.h"

GUIMyFrame1::GUIMyFrame1( wxWindow* parent )
:
MyFrame1( parent )
{
	m_timer.Start(20);
}

void GUIMyFrame1::m_button_loadfileOnButtonClick(wxCommandEvent& event)
{
	wxFileDialog Open_File_Dialog(this, wxT("Wybierz plik"), wxT(""), wxT(""), wxT("Plik tekstowy (*.txt)|*.txt"), wxFD_OPEN | wxFD_FILE_MUST_EXIST);
	if (Open_File_Dialog.ShowModal() == wxID_OK)
	{
		std::ifstream file(Open_File_Dialog.GetPath().ToAscii());
		if (file.is_open())
		{
			lines.clear();
			spheres.clear();
			int flag = 0;
			double x1 = 0, y1 = 0, z1 = 0, x2 = 0, y2 = 0, z2 = 0, r = 0, t = 0;
			file >> object_num;
			while (!file.eof() && (lines.size() + spheres.size()) < object_num) {
				file >> flag;
				if (flag == 1) {
					file >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> t;
					lines.push_back(Line(x1, y1, z1, x2, y2, z2, t));
					file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				else {
					file >> x1 >> y1 >> z1 >> r >> t;
					spheres.push_back(Sphere(x1, y1, z1, r, t));
					file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
			}
			file.close();
		}
	}
	Repaint();
}

void GUIMyFrame1::m_button_savefileOnButtonClick(wxCommandEvent& event)
{
	wxFileDialog save_file_dialog(this, "Wybierz plik", "", "", "Pliki obrazow (*.png;*.bmp;*.jpg)|*.png;*.bmp;*.jpg", wxFD_SAVE | wxFD_OVERWRITE_PROMPT);
	if (save_file_dialog.ShowModal() == wxID_OK)
	{
		wxNumberEntryDialog x_number_dialog(this,"Wprowadz szerokosc obrazu","Szerokosc :","Rozmiar obrazu",800,40,2000);
		wxNumberEntryDialog y_number_dialog(this, "Wprowadz wysokosc obrazu", "Wysokosc :", "Rozmiar obrazu", 600, 30, 1500);
		x_number_dialog.ShowModal();
		y_number_dialog.ShowModal();
		wxImage image_to_save = to_save.ConvertToImage();
		image_to_save.Rescale(x_number_dialog.GetValue(), y_number_dialog.GetValue());
		image_to_save.AddHandler(new wxJPEGHandler);
		image_to_save.AddHandler(new wxBMPHandler);
		image_to_save.AddHandler(new wxPNGHandler);
		image_to_save.SaveFile(save_file_dialog.GetPath());
	}
}

void GUIMyFrame1::m_slider_rotationXOnScroll(wxScrollEvent& event)
{
	rotationX = m_slider_rotationX->GetValue() / 180.0 * M_PI;
	m_staticText_rotationX_value->SetLabel(std::to_string(m_slider_rotationX->GetValue()));
	Repaint();
}

void GUIMyFrame1::m_slider_rotationYOnScroll(wxScrollEvent& event)
{
	rotationY = m_slider_rotationY->GetValue() / 180.0 * M_PI;
	m_staticText_rotationY_value->SetLabel(std::to_string(m_slider_rotationY->GetValue()));
	Repaint();
}

void GUIMyFrame1::m_slider_rotationZOnScroll(wxScrollEvent& event)
{
	rotationZ = m_slider_rotationZ->GetValue() / 180.0 * M_PI;
	m_staticText_rotationZ_value->SetLabel(std::to_string(m_slider_rotationZ->GetValue()));
	Repaint();
}

void GUIMyFrame1::m_slider_translationXOnScroll(wxScrollEvent& event)
{
	translationX = m_slider_translationX->GetValue() / 100.0;
	m_staticText_translationX_value->SetLabel(std::to_string(translationX).substr(0, std::to_string(translationX).find(".") + 3));
	Repaint();
}

void GUIMyFrame1::m_slider_translationYOnScroll(wxScrollEvent& event)
{
	translationY = m_slider_translationY->GetValue() / 100.0;
	m_staticText_translationY_value->SetLabel(std::to_string(translationY).substr(0, std::to_string(translationY).find(".") + 3));
	Repaint();
}

void GUIMyFrame1::m_slider_translationZOnScroll(wxScrollEvent& event)
{
	translationZ = m_slider_translationZ->GetValue() / 100.0;
	m_staticText_translationZ_value->SetLabel(std::to_string(translationZ).substr(0, std::to_string(translationZ).find(".") + 3));
	Repaint();
}

void GUIMyFrame1::m_slider_scaleXOnScroll(wxScrollEvent& event)
{
	scaleX = m_slider_scaleX->GetValue() / 100.0;
	m_staticText_scaleX_value->SetLabel(std::to_string(scaleX).substr(0, std::to_string(scaleX).find(".") + 3));
	Repaint();
}

void GUIMyFrame1::m_slider_scaleYOnScroll(wxScrollEvent& event)
{
	scaleY = m_slider_scaleY->GetValue() / 100.0;
	m_staticText_scaleY_value->SetLabel(std::to_string(scaleY).substr(0, std::to_string(scaleY).find(".") + 3));
	Repaint();
}

void GUIMyFrame1::m_slider_scaleZOnScroll(wxScrollEvent& event)
{
	scaleZ = m_slider_scaleZ->GetValue() / 100.0;
	m_staticText_scaleZ_value->SetLabel(std::to_string(scaleZ).substr(0, std::to_string(scaleZ).find(".") + 3));
	Repaint();
}

void GUIMyFrame1::m_slider_spacingOnScroll(wxScrollEvent& event)
{
	spacing = m_slider_spacing->GetValue() / 10.0;
	m_staticText_spacing_value->SetLabel(std::to_string(spacing).substr(0, std::to_string(spacing).find(".") + 2));
	Repaint();
}

void GUIMyFrame1::m_button_color_oneOnButtonClick(wxCommandEvent& event)
{
	wxColourData c_data;
	wxColourDialog dlg(this, &c_data);
	if (dlg.ShowModal() == wxID_OK)
	{
		c_data = dlg.GetColourData();
		color_one = c_data.GetColour();
	}
	Repaint();
}

void GUIMyFrame1::m_button_color_twoOnButtonClick(wxCommandEvent& event)
{
	wxColourData c_data;
	wxColourDialog dlg(this, &c_data);
	if (dlg.ShowModal() == wxID_OK)
	{
		c_data = dlg.GetColourData();
		color_two = c_data.GetColour();
	}
	Repaint();
}

void GUIMyFrame1::m_button_animateOnButtonClick(wxCommandEvent& event)
{
	if (!animate)
	{
		rotationX = 0, rotationY = 0, rotationZ = 0;
		translationX = 0, translationY = 0, translationZ = 0;
		timer = 0;
		m_slider_rotationX->SetValue(0), m_staticText_rotationX_value->SetLabel(std::to_string(m_slider_rotationX->GetValue()));
		m_slider_rotationY->SetValue(0), m_staticText_rotationY_value->SetLabel(std::to_string(m_slider_rotationY->GetValue()));
		m_slider_rotationZ->SetValue(0), m_staticText_rotationZ_value->SetLabel(std::to_string(m_slider_rotationZ->GetValue()));
		m_slider_translationX->SetValue(0), m_staticText_translationX_value->SetLabel(std::to_string(translationX).substr(0, std::to_string(translationX).find(".") + 3));
		m_slider_translationY->SetValue(0), m_staticText_translationY_value->SetLabel(std::to_string(translationY).substr(0, std::to_string(translationY).find(".") + 3));
		m_slider_translationZ->SetValue(0), m_staticText_translationZ_value->SetLabel(std::to_string(translationZ).substr(0, std::to_string(translationZ).find(".") + 3));
		Repaint();
	}
	animate = !animate;
}

void GUIMyFrame1::m_panelOnSize( wxSizeEvent& event )
{
	Repaint();
}

void GUIMyFrame1::m_timerOnTimer( wxTimerEvent& event )
{
	if (animate)
	{
		timer = (timer + 1) % 360;
		double alpha = timer / 180.0 * M_PI;
		rotationX = rotationY = rotationZ = alpha;
		translationX = translationY = translationZ = sin(alpha);
		m_slider_rotationX->SetValue(timer), m_staticText_rotationX_value->SetLabel(std::to_string(m_slider_rotationX->GetValue()));
		m_slider_rotationY->SetValue(timer), m_staticText_rotationY_value->SetLabel(std::to_string(m_slider_rotationY->GetValue()));
		m_slider_rotationZ->SetValue(timer), m_staticText_rotationZ_value->SetLabel(std::to_string(m_slider_rotationZ->GetValue()));
		m_slider_translationX->SetValue(100*sin(alpha)), m_staticText_translationX_value->SetLabel(std::to_string(translationX).substr(0, std::to_string(translationX).find(".") + 3));
		m_slider_translationY->SetValue(100*sin(alpha)), m_staticText_translationY_value->SetLabel(std::to_string(translationY).substr(0, std::to_string(translationY).find(".") + 3));
		m_slider_translationZ->SetValue(100*sin(alpha)), m_staticText_translationZ_value->SetLabel(std::to_string(translationZ).substr(0, std::to_string(translationZ).find(".") + 3));
		Repaint();
	}
}

void GUIMyFrame1::Repaint()
{
	to_save = wxBitmap(m_panel->GetSize());
	wxClientDC dc_no_buffer(m_panel);
	wxBufferedDC dc(&dc_no_buffer,to_save);
	dc.SetBackground(wxBrush(RGB(255, 255, 255)));
	dc.Clear();
	double width = m_panel->GetSize().x;
	double height = m_panel->GetSize().y;
	Vector begin;
	Vector end;
	Matrix transformation_matrix = Matrix_Translation(translationX, translationY, translationZ) * Matrix_RotationX(rotationX) * Matrix_RotationY(rotationY) * Matrix_RotationZ(rotationZ) * Matrix_Scale(scaleX, scaleY, scaleZ);
	for (const auto& x : lines) {
		begin = transformation_matrix * x.begin;
		end = transformation_matrix * x.end;
		if (begin(2) <= -3) begin(2) = -2.99; // obciecie tak by bylo widziane, sprawdzic edge-case'y
		if (end(2) <= -3) end(2) = -2.99; //to samo
		dc.SetPen(wxPen(color_one,x.thickness));
		dc.DrawLine(point_cast(begin, width, height), point_cast(end, width, height));
		dc.SetPen(wxPen(color_two,x.thickness));
		dc.DrawLine(point_cast(begin, width, height) + wxPoint(spacing, 0), point_cast(end, width, height) + wxPoint(spacing, 0));
	}
}
