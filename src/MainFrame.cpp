#include "MainFrame.h"

MainFrame::MainFrame(const wxString &title) : wxFrame(nullptr, wxID_ANY, title)
{
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    wxPanel *panel = new wxPanel(this);

    wxStaticText *inputPathST = new wxStaticText(panel, wxID_ANY, "Input file path:", wxPoint(50, 25), wxDefaultSize);
    this->inputPathTC = new wxTextCtrl(panel, wxID_ANY, "/home/inf/Projects/message_creator_window/input/serialising_contactless.json", wxPoint(50, 50), wxSize(300, -1));

    wxStaticText *outputPathST = new wxStaticText(panel, wxID_ANY, "Output file path:", wxPoint(50, 75), wxDefaultSize);
    this->outputPathTC = new wxTextCtrl(panel, wxID_ANY, "/home/inf/Projects/message_creator_window/output/output_contactless_messages.txt", wxPoint(50, 100), wxSize(300, -1));

    wxButton *generateB = new wxButton(panel, wxID_ANY, "Generate", wxPoint(75, 150));
    generateB->Bind(wxEVT_BUTTON, &MainFrame::OnClickGenerateButton, this);

    CreateStatusBar();
}

void MainFrame::OnClickGenerateButton(wxCommandEvent &evt)
{
    std::string inputFilePath = this->inputPathTC->GetLineText(0).ToStdString();
    std::string outputFilePath = this->outputPathTC->GetLineText(0).ToStdString();

    try
    {
        MessageCreator creator(inputFilePath);
        creator.generate_messages(inputFilePath, outputFilePath);
    }
    catch (ex::CantOpenFile &ex)
    {
        wxLogError(wxString(ex.what()));
    }
    catch (ex::JsonParsingException &ex)
    {
        wxLogError(wxString(ex.what()));
    }
    catch (ex::InvalidMessageIR &ex)
    {
        wxLogError(wxString(ex.what()));
    }
    catch (std::invalid_argument &ex)
    {
        wxLogError(wxString(ex.what()));
    }
    catch (...)
    {
        wxLogError("Unknown error");
    }
}
