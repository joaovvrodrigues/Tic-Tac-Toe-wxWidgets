/***************************************************************
 * Name:      felipedefreitasesilva_joaovitorvelosorodriguesMain.h
 * Purpose:   Defines Application Frame
 * Author:    Felipe de Freitas e Silva (felipe.world11@gmail.com) e Joao Vitor Veloso Rodrigues (joaovitor_new2@live.com)
 * Created:   2017-06-15
 * Copyright: Felipe de Freitas e Silva (RA:0034077) e Joao Vitor Veloso Rodrigues (RA:0034079)
 * License:
 **************************************************************/

#ifndef FELIPEDEFREITASESILVA_JOAOVITORVELOSORODRIGUESMAIN_H
#define FELIPEDEFREITASESILVA_JOAOVITORVELOSORODRIGUESMAIN_H

//(*Headers(felipedefreitasesilva_joaovitorvelosorodriguesFrame)
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
//*)

class felipedefreitasesilva_joaovitorvelosorodriguesFrame: public wxFrame
{
    public:

        felipedefreitasesilva_joaovitorvelosorodriguesFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~felipedefreitasesilva_joaovitorvelosorodriguesFrame();
        void zerar();
        void pcjoga();

    private:

        //(*Handlers(felipedefreitasesilva_joaovitorvelosorodriguesFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void Onbtn1Click(wxCommandEvent& event);
        void Onbtn2Click(wxCommandEvent& event);
        void Onbtn3Click(wxCommandEvent& event);
        void Onbtn4Click(wxCommandEvent& event);
        void Onbtn5Click(wxCommandEvent& event);
        void Onbtn6Click(wxCommandEvent& event);
        void Onbtn7Click(wxCommandEvent& event);
        void Onbtn8Click(wxCommandEvent& event);
        void Onbtn9Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(felipedefreitasesilva_joaovitorvelosorodriguesFrame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_BUTTON6;
        static const long ID_BUTTON7;
        static const long ID_BUTTON8;
        static const long ID_BUTTON9;
        static const long ID_BUTTON10;
        static const long idSair;
        static const long idSobre;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(felipedefreitasesilva_joaovitorvelosorodriguesFrame)
        wxButton* btn6;
        wxButton* btn5;
        wxStatusBar* StatusBar1;
        wxButton* btn8;
        wxButton* btn2;
        wxButton* btn3;
        wxButton* btn1;
        wxButton* btnSair;
        wxButton* btn9;
        wxButton* btn7;
        wxButton* btn4;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // FELIPEDEFREITASESILVA_JOAOVITORVELOSORODRIGUESMAIN_H
