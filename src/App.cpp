#include "App.h"
#include "MainFrame.h"

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
    // MainFrame *mainFrame = new MainFrame("My best window", wxPoint(50, 50), wxSize(450, 340));
    MainFrame *mainFrame = new MainFrame("My best window");
    mainFrame->SetClientSize(800, 600);
    mainFrame->Center();

    mainFrame->Show();
    return true;
}