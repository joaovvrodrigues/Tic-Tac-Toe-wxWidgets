/***************************************************************
 * Name:      felipedefreitasesilva_joaovitorvelosorodriguesMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Felipe de Freitas e Silva (felipe.world11@gmail.com) e Joao Vitor Veloso Rodrigues (joaovitor_new2@live.com)
 * Created:   2017-06-15
 * Copyright: Felipe de Freitas e Silva (RA:0034077) e Joao Vitor Veloso Rodrigues (RA:0034079)
 * License:
 **************************************************************/

#include "felipedefreitasesilva_joaovitorvelosorodriguesMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(felipedefreitasesilva_joaovitorvelosorodriguesFrame)
#include <wx/string.h>
#include <wx/intl.h>
//*)

//helper functions
enum wxbuildinfoformat
{
    short_f, long_f
};

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(felipedefreitasesilva_joaovitorvelosorodriguesFrame)
const long felipedefreitasesilva_joaovitorvelosorodriguesFrame::ID_BUTTON1 = wxNewId();
const long felipedefreitasesilva_joaovitorvelosorodriguesFrame::ID_BUTTON2 = wxNewId();
const long felipedefreitasesilva_joaovitorvelosorodriguesFrame::ID_BUTTON3 = wxNewId();
const long felipedefreitasesilva_joaovitorvelosorodriguesFrame::ID_BUTTON4 = wxNewId();
const long felipedefreitasesilva_joaovitorvelosorodriguesFrame::ID_BUTTON5 = wxNewId();
const long felipedefreitasesilva_joaovitorvelosorodriguesFrame::ID_BUTTON6 = wxNewId();
const long felipedefreitasesilva_joaovitorvelosorodriguesFrame::ID_BUTTON7 = wxNewId();
const long felipedefreitasesilva_joaovitorvelosorodriguesFrame::ID_BUTTON8 = wxNewId();
const long felipedefreitasesilva_joaovitorvelosorodriguesFrame::ID_BUTTON9 = wxNewId();
const long felipedefreitasesilva_joaovitorvelosorodriguesFrame::ID_BUTTON10 = wxNewId();
const long felipedefreitasesilva_joaovitorvelosorodriguesFrame::idSair = wxNewId();
const long felipedefreitasesilva_joaovitorvelosorodriguesFrame::idSobre = wxNewId();
const long felipedefreitasesilva_joaovitorvelosorodriguesFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(felipedefreitasesilva_joaovitorvelosorodriguesFrame,wxFrame)
    //(*EventTable(felipedefreitasesilva_joaovitorvelosorodriguesFrame)
    //*)
END_EVENT_TABLE()

felipedefreitasesilva_joaovitorvelosorodriguesFrame::felipedefreitasesilva_joaovitorvelosorodriguesFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(felipedefreitasesilva_joaovitorvelosorodriguesFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxBoxSizer* BoxSizer3;
    wxMenu* Menu1;
    wxBoxSizer* BoxSizer16;
    wxBoxSizer* BoxSizer10;
    wxBoxSizer* BoxSizer7;
    wxBoxSizer* BoxSizer11;
    wxBoxSizer* BoxSizer13;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer9;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* BoxSizer8;
    wxBoxSizer* BoxSizer1;
    wxMenuBar* MenuBar1;
    wxBoxSizer* BoxSizer12;
    wxMenu* Menu2;
    wxBoxSizer* BoxSizer14;
    wxBoxSizer* BoxSizer6;
    wxBoxSizer* BoxSizer5;

    Create(parent, id, _("Jogo da Velha"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer2 = new wxBoxSizer(wxVERTICAL);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
    btn1 = new wxButton(this, ID_BUTTON1, wxEmptyString, wxDefaultPosition, wxSize(50,50), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer8->Add(btn1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3->Add(BoxSizer8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
    btn2 = new wxButton(this, ID_BUTTON2, wxEmptyString, wxDefaultPosition, wxSize(50,50), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    BoxSizer13->Add(btn2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3->Add(BoxSizer13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
    btn3 = new wxButton(this, ID_BUTTON3, wxEmptyString, wxDefaultPosition, wxSize(50,50), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    BoxSizer14->Add(btn3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3->Add(BoxSizer14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
    btn4 = new wxButton(this, ID_BUTTON4, wxEmptyString, wxDefaultPosition, wxSize(50,50), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    BoxSizer7->Add(btn4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4->Add(BoxSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
    btn5 = new wxButton(this, ID_BUTTON5, wxEmptyString, wxDefaultPosition, wxSize(50,50), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    BoxSizer11->Add(btn5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4->Add(BoxSizer11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
    btn6 = new wxButton(this, ID_BUTTON6, wxEmptyString, wxDefaultPosition, wxSize(50,50), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    BoxSizer12->Add(btn6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4->Add(BoxSizer12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
    btn7 = new wxButton(this, ID_BUTTON7, wxEmptyString, wxDefaultPosition, wxSize(50,50), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    BoxSizer6->Add(btn7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer5->Add(BoxSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
    btn8 = new wxButton(this, ID_BUTTON8, wxEmptyString, wxDefaultPosition, wxSize(50,50), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    BoxSizer9->Add(btn8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer5->Add(BoxSizer9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
    btn9 = new wxButton(this, ID_BUTTON9, wxEmptyString, wxDefaultPosition, wxSize(50,50), 0, wxDefaultValidator, _T("ID_BUTTON9"));
    BoxSizer10->Add(btn9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer5->Add(BoxSizer10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(BoxSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
    btnSair = new wxButton(this, ID_BUTTON10, _("Sair"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON10"));
    BoxSizer16->Add(btnSair, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(BoxSizer16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idSair, _("Sair\tAlt-F4"), _("Sai do Jogo"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("Opcoes"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idSobre, _("Sobre\tF1"), _("Mostra algumas informacoes"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Ajuda"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);
    Center();

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn3Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn4Click);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn5Click);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn6Click);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn7Click);
    Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn8Click);
    Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn9Click);
    Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&felipedefreitasesilva_joaovitorvelosorodriguesFrame::OnQuit);
    Connect(idSair,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&felipedefreitasesilva_joaovitorvelosorodriguesFrame::OnQuit);
    Connect(idSobre,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&felipedefreitasesilva_joaovitorvelosorodriguesFrame::OnAbout);
    //*)
}

felipedefreitasesilva_joaovitorvelosorodriguesFrame::~felipedefreitasesilva_joaovitorvelosorodriguesFrame()
{
    //(*Destroy(felipedefreitasesilva_joaovitorvelosorodriguesFrame)
    //*)
}
//Função para o Computador jogar e realizar testes de Vitoria, Empate e Perda.
void felipedefreitasesilva_joaovitorvelosorodriguesFrame::pcjoga()
{
    int alea,mensagem,temp=0; //Variavel temp para sair do WHILE.
    wxString x,o,a,b,c,d,e,f,g,h,i,vz;
    vz=""; //Variavel da casa vazia.
    x="X";  //Variavel X para o Jogador.
    o="O";  //Variavel O para o Computador.

    a = (btn1->GetLabel());     //Puxando informações contidas em todos os botões.
    b = (btn2->GetLabel());
    c = (btn3->GetLabel());
    d = (btn4->GetLabel());
    e = (btn5->GetLabel());
    f = (btn6->GetLabel());
    g = (btn7->GetLabel());
    h = (btn8->GetLabel());
    i = (btn9->GetLabel());

    srand(time(NULL));
    alea = rand() % 9 + 1; //Gerar um aleaero aleatorio de 1 a 9.

    while(temp==0)
    {
        switch (alea)
        {
        case 1:
            if(a == "")          //testar se a casa esta vazia
            {
                btn1->SetLabel("O");    //trocar o label
                a=o;
                temp=1;                    //sair do laço
                break;
            }
            else
            {
                alea=(rand() % 9) + 1;
                break;
            }
        case 2:
            if(b == "")
            {
                btn2->SetLabel("O");
                b=o;
                temp=1;
                break;
            }
            else
            {
                alea=(rand() % 9) + 1;
                break;
            }
        case 3:
            if(c == "")
            {
                btn3->SetLabel("O");
                c=o;
                temp=1;
                break;
            }
            else
            {
                alea=(rand() % 9) + 1;
                break;
            }
        case 4:
            if(d == "")
            {
                btn4->SetLabel("O");
                d=o;
                temp=1;
                break;
            }
            else
            {
                alea=(rand() % 9) + 1;
                break;
            }
        case 5:
            if(e == "")
            {
                btn5->SetLabel("O");
                e=o;
                temp=1;
                break;
            }
            else
            {
                alea=(rand() % 9) + 1;
                break;
            }
        case 6:
            if(f == "")
            {
                btn6->SetLabel("O");
                f=o;
                temp=1;
                break;
            }
            else
            {
                alea=(rand() % 9) + 1;
                break;
            }
        case 7:
            if(g == "")
            {
                btn7->SetLabel("O");
                g=o;
                temp=1;
                break;
            }
            else
            {
                alea=(rand() % 9) + 1;
                break;
            }
        case 8:
            if(h == "")
            {
                btn8->SetLabel("O");
                h=o;
                temp=1;
                break;
            }
            else
            {
                alea=(rand() % 9) + 1;
                break;
            }
        case 9:
            if(i == "")
            {
                btn9->SetLabel("O");
                i=o;
                temp=1;
                break;
            }
            else
            {
                alea=(rand() % 9) + 1;
                break;
            }
        }
        if ((a==o&&b==o&&c==o) || (d==o&&e==o&&f==o) || (g==o&&h==o&&i==o) || (a==o&&d==o&&g==o) || (b==o&&e==o&&h==o) || (c==o&&f==o&&i==o) || (a==o&&e==o&&i==o) || (c==o&&e==o&&g==o))
        {
            //Verifica todas as possibilidades de vitoria do computador.

            mensagem = wxMessageBox("Voce perdeu, deseja continuar?", "QUE PENA!", wxYES_NO);
            //Caso algum caso seja verdadeiro, mostrar a mensagem e zerar todos os botoes caso escolha continuar.

            if (mensagem == wxYES)  //Se a resposta for SIM, zerar os botoes para continuar.
            {
                zerar(); //Chama a função para Zerar todos os botões e variaveis.
                return; //Retorna.
            }
            if (mensagem == wxNO)  //Caso a resposta seja NAO, fechar o programa.
            {
                Close(); //Fecha o programa.
            }

            return; //Retorna.
        }

        if ((a==x&&b==x&&c==x) || (d==x&&e==x&&f==x) || (g==x&&h==x&&i==x) || (a==x&&d==x&&g==x) || (b==x&&e==x&&h==x) || (c==x&&f==x&&i==x) || (a==x&&e==x&&i==x) || (c==x&&e==x&&g==x))
        {
            //Verifica todas as possibilidades de vitoria do jogador.
            mensagem = wxMessageBox("Voce ganhou, deseja continuar?", "PARABENS!", wxYES_NO);
            //Caso algum caso seja verdadeiro, mostrar a mensagem e zerar todos os botoes caso escolha continuar.

            if (mensagem == wxYES)  //Se a resposta for SIM, zerar os botoes para continuar.
            {
                zerar(); //Chama a função para Zerar todos os botões e variaveis.
                return; //Retorna.
            }
            if (mensagem == wxNO)  //Caso a resposta seja NAO, fechar o programa.
            {
                Close(); //Fecha o programa.
            }

            return; //Retorna.
        }

        if(a!=vz && b!=vz && c!=vz && d!=vz && e!=vz && f!=vz && g!=vz && h!=vz && i!=vz) //Verificar a possibilidade de empate.
        {

            mensagem = wxMessageBox("Deu velha, deseja continuar?", "DEU VELHA!", wxYES_NO);
            //Caso algum caso seja verdadeiro, mostrar a mensagem e zerar todos os botoes caso escolha continuar.

            if (mensagem == wxYES)  //Se a resposta for SIM, zerar os botoes para continuar.
            {
                zerar(); //Chama a função para Zerar todos os botões e variaveis.
                return; //Retorna.
            }
            if (mensagem == wxNO)  //Caso a resposta seja NAO, fechar o programa.
            {
                Close(); //Fechar o programa.
            }

            return; //Retorna.

        }

    }
}





void felipedefreitasesilva_joaovitorvelosorodriguesFrame::zerar() //Função para Zerar todas as casas.
{
    wxString vz;

    vz=""; //Seta todas as casa com valor de vazio.
    btn1-> SetLabel(vz);
    btn2-> SetLabel(vz);
    btn3-> SetLabel(vz);
    btn4-> SetLabel(vz);
    btn5-> SetLabel(vz);
    btn6-> SetLabel(vz);
    btn7-> SetLabel(vz);
    btn8-> SetLabel(vz);
    btn9-> SetLabel(vz);
}

void felipedefreitasesilva_joaovitorvelosorodriguesFrame::OnQuit(wxCommandEvent& event)
{
    Close(); //Caso no MENU, seja escolhido a opçao fechar, feche o programa.
}

void felipedefreitasesilva_joaovitorvelosorodriguesFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox(_("Felipe de Freitas e Silva (RA:0034077) \nJoao Vitor Veloso Rodrigues (RA:0034079) \n\nAlgoritmos e Estruturas de Dados 1 \n\nProf.: Samuel Pereira Dias"),_("INFORMACOES"));
}

void felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn1Click(wxCommandEvent& event)
{
    wxString x,o,a,b,c,d,e,f,g,h,i,vz;
    vz=""; //Variavel da casa vazia.
    x="X";  //Variavel X para o Jogador.
    o="O";  //Variavel O para o Computador.

    a = (btn1->GetLabel());     //Puxando informações contidas em todos os botões.
    b = (btn2->GetLabel());
    c = (btn3->GetLabel());
    d = (btn4->GetLabel());
    e = (btn5->GetLabel());
    f = (btn6->GetLabel());
    g = (btn7->GetLabel());
    h = (btn8->GetLabel());
    i = (btn9->GetLabel());

    if(a==vz) // Caso o primeiro botão seja IGUAL a VAZIO.
    {
        btn1-> SetLabel(x); //Marque o X do jogador.
        a=x;    // A, recebera X para uma futura comparação.
    }
    else
    {
        wxMessageBox(_("Este botao ja foi utilizado, escolha um VAZIO!"),_("TENTE NOVAMENTE"), wxICON_ERROR); //Caso o botao já esteja preenchido, avisar ao jogador.

        return;    // Retornar.
    }

    pcjoga(); //Chamar a função para o Computador jogar e fazer as respectivas comparações.
}

void felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn2Click(wxCommandEvent& event)
{
    wxString x,o,a,b,c,d,e,f,g,h,i,vz;
    vz=""; //Variavel da casa vazia.
    x="X";  //Variavel X para o Jogador.
    o="O";  //Variavel O para o Computador.

    a = (btn1->GetLabel());     //Puxando informações contidas em todos os botões.
    b = (btn2->GetLabel());
    c = (btn3->GetLabel());
    d = (btn4->GetLabel());
    e = (btn5->GetLabel());
    f = (btn6->GetLabel());
    g = (btn7->GetLabel());
    h = (btn8->GetLabel());
    i = (btn9->GetLabel());

    if(b==vz) // Caso o segundo botão seja IGUAL a VAZIO.
    {
        btn2-> SetLabel(x); //Marque o X do jogador
        b=x;    // A, recebera X para uma futura comparação
    }
    else
    {
        wxMessageBox(_("Este botao ja foi utilizado, escolha um VAZIO!"),_("TENTE NOVAMENTE"), wxICON_ERROR); //Caso o botao já esteja preenchido, avisar ao jogador.

        return;    // Retornar VOLTAR
    }

    pcjoga();//Chamar a função para o Computador jogar e fazer as respectivas comparações.
}

void felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn3Click(wxCommandEvent& event)
{
    wxString x,o,a,b,c,d,e,f,g,h,i,vz;
    vz=""; //Variavel da casa vazia.
    x="X";  //Variavel X para o Jogador.
    o="O";  //Variavel O para o Computador.

    a = (btn1->GetLabel());     //Puxando informações contidas em todos os botões.
    b = (btn2->GetLabel());
    c = (btn3->GetLabel());
    d = (btn4->GetLabel());
    e = (btn5->GetLabel());
    f = (btn6->GetLabel());
    g = (btn7->GetLabel());
    h = (btn8->GetLabel());
    i = (btn9->GetLabel());

    if(c==vz) // Caso o terceiro botão seja IGUAL a VAZIO.
    {
        btn3-> SetLabel(x); //Marque o X do jogador.
        c=x;    // A, recebera X para uma futura comparação.
    }
    else
    {
        wxMessageBox(_("Este botao ja foi utilizado, escolha um VAZIO!"),_("TENTE NOVAMENTE"), wxICON_ERROR); //Caso o botao já esteja preenchido, avisar ao jogador.

        return;    // Retornar.
    }
    pcjoga(); //Chamar a função para o Computador jogar e fazer as respectivas comparações.
}

void felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn4Click(wxCommandEvent& event)
{    wxString x,o,a,b,c,d,e,f,g,h,i,vz;
    vz=""; //Variavel da casa vazia.
    x="X";  //Variavel X para o Jogador.
    o="O";  //Variavel O para o Computador.

    a = (btn1->GetLabel());     //Puxando informações contidas em todos os botões.
    b = (btn2->GetLabel());
    c = (btn3->GetLabel());
    d = (btn4->GetLabel());
    e = (btn5->GetLabel());
    f = (btn6->GetLabel());
    g = (btn7->GetLabel());
    h = (btn8->GetLabel());
    i = (btn9->GetLabel());

    if(d==vz) // Caso o quarto botão seja IGUAL a VAZIO.
    {
        btn4-> SetLabel(x); //Marque o X do jogador.
        d=x;    // A, recebera X para uma futura comparação.
    }
    else
    {
        wxMessageBox(_("Este botao ja foi utilizado, escolha um VAZIO!"),_("TENTE NOVAMENTE"), wxICON_ERROR); //Caso o botao já esteja preenchido, avisar ao jogador.

        return;    // Retornar.
    }

    pcjoga();//Chamar a função para o Computador jogar e fazer as respectivas comparações.
}

void felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn5Click(wxCommandEvent& event)
{
    wxString x,o,a,b,c,d,e,f,g,h,i,vz;
    vz=""; //Variavel da casa vazia.
    x="X";  //Variavel X para o Jogador.
    o="O";  //Variavel O para o Computador.

    a = (btn1->GetLabel());     //Puxando informações contidas em todos os botões.
    b = (btn2->GetLabel());
    c = (btn3->GetLabel());
    d = (btn4->GetLabel());
    e = (btn5->GetLabel());
    f = (btn6->GetLabel());
    g = (btn7->GetLabel());
    h = (btn8->GetLabel());
    i = (btn9->GetLabel());

    if(e==vz) // Caso o quinto botão seja IGUAL a VAZIO.
    {
        btn5-> SetLabel(x); //Marque o X do jogador.
        e=x;    // A, recebera X para uma futura comparação.
    }
    else
    {
        wxMessageBox(_("Este botao ja foi utilizado, escolha um VAZIO!"),_("TENTE NOVAMENTE"), wxICON_ERROR); //Caso o botao já esteja preenchido, avisar ao jogador.

        return;    // Retornar.
    }
    pcjoga();//Chamar a função para o Computador jogar e fazer as respectivas comparações.
}

void felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn6Click(wxCommandEvent& event)
{
    wxString x,o,a,b,c,d,e,f,g,h,i,vz;
    vz=""; //Variavel da casa vazia.
    x="X";  //Variavel X para o Jogador.
    o="O";  //Variavel O para o Computador.

    a = (btn1->GetLabel());     //Puxando informações contidas em todos os botões.
    b = (btn2->GetLabel());
    c = (btn3->GetLabel());
    d = (btn4->GetLabel());
    e = (btn5->GetLabel());
    f = (btn6->GetLabel());
    g = (btn7->GetLabel());
    h = (btn8->GetLabel());
    i = (btn9->GetLabel());

    if(f==vz) // Caso o sexto botão seja IGUAL a VAZIO.
    {
        btn6-> SetLabel(x); //Marque o X do jogador.
        f=x;    // A, recebera X para uma futura comparação.
    }
    else
    {
        wxMessageBox(_("Este botao ja foi utilizado, escolha um VAZIO!"),_("TENTE NOVAMENTE"), wxICON_ERROR); //Caso o botao já esteja preenchido, avisar ao jogador.

        return;    // Retornar.
    }
    pcjoga(); //Chamar a função para o Computador jogar e fazer as respectivas comparações.
}

void felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn7Click(wxCommandEvent& event)
{
    wxString x,o,a,b,c,d,e,f,g,h,i,vz;
    vz=""; //Variavel da casa vazia.
    x="X";  //Variavel X para o Jogador.
    o="O";  //Variavel O para o Computador.

    a = (btn1->GetLabel());     //Puxando informações contidas em todos os botões.
    b = (btn2->GetLabel());
    c = (btn3->GetLabel());
    d = (btn4->GetLabel());
    e = (btn5->GetLabel());
    f = (btn6->GetLabel());
    g = (btn7->GetLabel());
    h = (btn8->GetLabel());
    i = (btn9->GetLabel());

    if(g==vz) // Caso o setimo botão seja IGUAL a VAZIO.
    {
        btn7-> SetLabel(x); //Marque o X do jogador.
        g=x;    // A, recebera X para uma futura comparação.
    }
    else
    {
        wxMessageBox(_("Este botao ja foi utilizado!"),_("TENTE NOVAMENTE"), wxICON_ERROR); //Caso o botao já esteja preenchido, avisar ao jogador.

        return;    // Retornar.
    }
    pcjoga();//Chamar a função para o Computador jogar e fazer as respectivas comparações.
}

void felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn8Click(wxCommandEvent& event)
{
    wxString x,o,a,b,c,d,e,f,g,h,i,vz;
    vz=""; //Variavel da casa vazia.
    x="X";  //Variavel X para o Jogador.
    o="O";  //Variavel O para o Computador.

    a = (btn1->GetLabel());     //Puxando informações contidas em todos os botões.
    b = (btn2->GetLabel());
    c = (btn3->GetLabel());
    d = (btn4->GetLabel());
    e = (btn5->GetLabel());
    f = (btn6->GetLabel());
    g = (btn7->GetLabel());
    h = (btn8->GetLabel());
    i = (btn9->GetLabel());

    if(h==vz) // Caso o oitavo botão seja IGUAL a VAZIO.
    {
        btn8-> SetLabel(x); //Marque o X do jogador.
        h=x;    // A, recebera X para uma futura comparação.
    }
    else
    {
        wxMessageBox(_("Este botao ja foi utilizado, escolha um VAZIO!"),_("TENTE NOVAMENTE"), wxICON_ERROR); //Caso o botao já esteja preenchido, avisar ao jogador.

        return;    // Retornar.
    }
    pcjoga();   //Chamar a função para o Computador jogar e fazer as respectivas comparações.
}

void felipedefreitasesilva_joaovitorvelosorodriguesFrame::Onbtn9Click(wxCommandEvent& event)
{
    wxString x,o,a,b,c,d,e,f,g,h,i,vz;
    vz=""; //Variavel da casa vazia.
    x="X";  //Variavel X para o Jogador.
    o="O";  //Variavel O para o Computador.

    a = (btn1->GetLabel());     //Puxando informações contidas em todos os botões.
    b = (btn2->GetLabel());
    c = (btn3->GetLabel());
    d = (btn4->GetLabel());
    e = (btn5->GetLabel());
    f = (btn6->GetLabel());
    g = (btn7->GetLabel());
    h = (btn8->GetLabel());
    i = (btn9->GetLabel());

    if(i==vz) // Caso o nono botão seja IGUAL a VAZIO.
    {
        btn9-> SetLabel(x); //Marque o X do jogador.
        i=x;    // A, recebera X para uma futura comparação.
    }
    else
    {
        wxMessageBox(_("Este botao ja foi utilizado, escolha um VAZIO!"),_("TENTE NOVAMENTE"), wxICON_ERROR); //Caso o botao já esteja preenchido, avisar ao jogador.

        return;    // Retornar.
    }
    pcjoga();   //Chamar a função para o Computador jogar e fazer as respectivas comparações.
}
