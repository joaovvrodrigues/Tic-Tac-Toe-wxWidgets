/***************************************************************
 * Name:      felipedefreitasesilva_joaovitorvelosorodriguesApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Felipe de Freitas e Silva e Joao Vitor Veloso Rodrigues (joaovitor_new2@live.com)
 * Created:   2017-06-15
 * Copyright: Felipe de Freitas e Silva e Joao Vitor Veloso Rodrigues ()
 * License:
 **************************************************************/

#include "felipedefreitasesilva_joaovitorvelosorodriguesApp.h"

//(*AppHeaders
#include "felipedefreitasesilva_joaovitorvelosorodriguesMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(felipedefreitasesilva_joaovitorvelosorodriguesApp);

bool felipedefreitasesilva_joaovitorvelosorodriguesApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	felipedefreitasesilva_joaovitorvelosorodriguesFrame* Frame = new felipedefreitasesilva_joaovitorvelosorodriguesFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
        