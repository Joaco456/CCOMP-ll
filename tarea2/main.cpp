#include <iostream>

using namespace std;

int Conversor()
{
    long int u,d,c,m,dm,cm,l,dl,cl,ml,dml,cml;
    long int numero;


        cout<<"Ingrese numero a converir en letras: ";cin>>numero;
        u = (numero-numero/10*10);
        d = (numero-numero/100*100-u)/10;
        c = (numero-numero/1000*1000-u-d)/100;
        m = (numero-numero/10000*10000-u-d-c)/1000;
        dm =(numero-numero/100000*100000-u-d-c-m)/10000;
        cm =(numero-numero/1000000*1000000-u-d-c-m-dm)/100000;
        l = (numero-numero/10000000*10000000-u-d-c-m-dm-cm)/1000000;
        dl =(numero-numero/100000000*100000000-u-d-c-m-dm-cm-l)/10000000;
        cl =(numero-numero/1000000000*1000000000-u-d-c-m-dm-cm-l-dl)/100000000;
        ml =(numero-numero/10000000000*10000000000-u-d-c-m-dm-cm-l-dl-cl)/1000000000;
        dml=(numero-numero/100000000000*100000000000-u-d-c-m-dm-cm-l-dl-cl-ml)/10000000000;
        cml=(numero-numero/1000000000000*1000000000000-u-d-c-m-dm-cm-l-dl-cl-ml-dml)/100000000000;

        switch(cml)
        {
        case 1:
            if(dml == 0 || ml == 0)
                cout<<"cien ";
            else
                cout<<"ciento ";
            break;
        case 2:
            cout<<"docientos ";
            break;
        case 3:
            cout<<"trecientos ";
            break;
        case 4:
            cout<<"cuatrocientos ";
            break;
        case 5:
            cout<<"quinientos ";
            break;
        case 6:
            cout<<"seiscientos ";
            break;
        case 7:
            cout<<"setecientos ";
            break;
        case 8:
            cout<<"ochocientos ";
            break;
        case 9:
            cout<<"novecientos ";
            break;
        default:
            cout<<"";
            break;


        }
        switch(dml)
        {
            case 0:
                switch(ml)
                {
                case 1:
                    cout<<"";
                    break;
                case 2:
                    cout<<"dos ";
                    break;
                case 3:
                    cout<<"tres ";
                    break;
                case 4:
                    cout<<"cuatro ";
                    break;
                case 5:
                    cout<<"cinco ";
                    break;
                case 6:
                    cout<<"seis ";
                    break;
                case 7:
                    cout<<"siete ";
                    break;
                case 8:
                    cout<<"ocho ";
                    break;
                case 9:
                    cout<<"nueve ";
                    break;
                }
                break;
            case 1:
                switch(ml)
                {
                case 0:
                    cout<<"diez ";
                    break;
                case 1:
                    cout<<"once ";
                    break;
                case 2:
                    cout<<"doce ";
                    break;
                case 3:
                    cout<<"trece ";
                    break;
                case 4:
                    cout<<"catorce ";
                    break;
                case 5:
                    cout<<"quince ";
                    break;
                case 6:
                    cout<<"dieciseis ";
                    break;
                case 7:
                    cout<<"diecisiete ";
                    break;
                case 8:
                    cout<<"dieciocho ";
                    break;
                case 9:
                    cout<<"diecinueve ";
                    break;
                }
                break;
            case 2:
                switch(ml)
                {
                case 0:
                    cout<<"veinte ";
                    break;
                case 1:
                    cout<<"veintiuno ";
                    break;
                case 2:
                    cout<<"veintidos ";
                    break;
                case 3:
                    cout<<"veintitres ";
                    break;
                case 4:
                    cout<<"veinticuatro ";
                    break;
                case 5:
                    cout<<"veinticinco ";
                    break;
                case 6:
                    cout<<"veintiseis ";
                    break;
                case 7:
                    cout<<"veintisiete ";
                    break;
                case 8:
                    cout<<"veintiocho ";
                    break;
                case 9:
                    cout<<"veintinueve ";
                    break;

                }
                break;
            case 3:
                switch(ml)
                {
                case 0:
                    cout<<"treinta ";
                    break;
                case 1:
                    cout<<"treinta y uno ";
                    break;
                case 2:
                    cout<<"treinta y dos ";
                    break;
                case 3:
                    cout<<"treinta y tres ";
                    break;
                case 4:
                    cout<<"treinta y cuatro ";
                    break;
                case 5:
                    cout<<"treinta y cinco ";
                    break;
                case 6:
                    cout<<"treinta y seis ";
                    break;
                case 7:
                    cout<<"treinta y siete ";
                    break;
                case 8:
                    cout<<"treinta y ocho ";
                    break;
                case 9:
                    cout<<"treinta y nueve ";
                    break;
                }
                break;
            case 4:
                switch(ml)
                {
                case 0:
                    cout<<"cuarenta ";
                    break;
                case 1:
                    cout<<"cuarenta y uno ";
                    break;
                case 2:
                    cout<<"cuarenta y dos ";
                    break;
                case 3:
                    cout<<"cuarenta y tres ";
                    break;
                case 4:
                    cout<<"cuarenta y cuatro ";
                    break;
                case 5:
                    cout<<"cuarenta y cinco ";
                    break;
                case 6:
                    cout<<"cuarenta y seis ";
                    break;
                case 7:
                    cout<<"cuarenta y siete ";
                    break;
                case 8:
                    cout<<"cuarenta y ocho ";
                    break;
                case 9:
                    cout<<"cuarenta y nueve ";
                    break;
                }
                break;
            case 5:
                switch(ml)
                {
                case 0:
                    cout<<"cincuenta ";
                    break;
                case 1:
                    cout<<"cincuenta y uno ";
                    break;
                case 2:
                    cout<<"cincuenta y dos ";
                    break;
                case 3:
                    cout<<"cincuenta y tres ";
                    break;
                case 4:
                    cout<<"cincuenta y cuatro ";
                    break;
                case 5:
                    cout<<"cincuenta y cinco ";
                    break;
                case 6:
                    cout<<"cincuenta y seis ";
                    break;
                case 7:
                    cout<<"cincuenta y siete ";
                    break;
                case 8:
                    cout<<"cincuenta y ocho ";
                    break;
                case 9:
                    cout<<"cincuenta y nueve ";
                    break;
                }
                break;
            case 6:
                switch(ml)
                {
                case 0:
                    cout<<"sesenta ";
                    break;
                case 1:
                    cout<<"sesenta y uno ";
                    break;
                case 2:
                    cout<<"sesenta y dos ";
                    break;
                case 3:
                    cout<<"sesenta y tres ";
                    break;
                case 4:
                    cout<<"sesenta y cuatro ";
                    break;
                case 5:
                    cout<<"sesenta y cinco ";
                    break;
                case 6:
                    cout<<"sesenta y seis ";
                    break;
                case 7:
                    cout<<"sesenta y siete ";
                    break;
                case 8:
                    cout<<"sesenta y ocho ";
                    break;
                case 9:
                    cout<<"sesenta y nueve ";
                    break;
                }
                break;
            case 7:
                switch(ml)
                {
                case 0:
                    cout<<"setenta ";
                    break;
                case 1:
                    cout<<"setenta y uno ";
                    break;
                case 2:
                    cout<<"setenta y dos ";
                    break;
                case 3:
                    cout<<"setenta y tres ";
                    break;
                case 4:
                    cout<<"setenta y cuatro ";
                    break;
                case 5:
                    cout<<"setenta y cinco ";
                    break;
                case 6:
                    cout<<"setenta y seis ";
                    break;
                case 7:
                    cout<<"setenta y siete ";
                    break;
                case 8:
                    cout<<"setenta y ocho ";
                    break;
                case 9:
                    cout<<"setenta y nueve ";
                    break;
                }
                break;
            case 8:
                switch(ml)
                {
                case 0:
                    cout<<"ochenta ";
                    break;
                case 1:
                    cout<<"ochenta y uno ";
                    break;
                case 2:
                    cout<<"ochenta y dos ";
                    break;
                case 3:
                    cout<<"ochenta y tres ";
                    break;
                case 4:
                    cout<<"ochenta y cuatro ";
                    break;
                case 5:
                    cout<<"ochenta y cinco ";
                    break;
                case 6:
                    cout<<"ochenta y seis ";
                    break;
                case 7:
                    cout<<"ochenta y siete ";
                    break;
                case 8:
                    cout<<"ochenta y ocho ";
                    break;
                case 9:
                    cout<<"ochenta y nueve ";
                    break;
                }
                break;
            case 9:
                switch(ml)
                {
                case 0:
                    cout<<"noventa ";
                    break;
                case 1:
                    cout<<"noventa y uno ";
                    break;
                case 2:
                    cout<<"noventa y dos ";
                    break;
                case 3:
                    cout<<"noventa y tres ";
                    break;
                case 4:
                    cout<<"noventa y cuatro ";
                    break;
                case 5:
                    cout<<"noventa y cinco ";
                    break;
                case 6:
                    cout<<"noventa y seis ";
                    break;
                case 7:
                    cout<<"noventa y siete ";
                    break;
                case 8:
                    cout<<"noventa y ocho ";
                    break;
                case 9:
                    cout<<"noventa y nueve ";
                    break;
                }
                break;
            default:
                cout<<"";
                break;
        }
        if(ml!=0||dml!=0||cml!=0)
        {
            cout<<"mil ";
        }
        switch(cl)
        {
        case 1:
            if(l == 0 && dl == 0)
            {
                cout<<"cien ";
            }
            else{
                cout<<"ciento ";
            }
            break;
        case 2:
            cout<<"docientos ";
            break;
        case 3:
            cout<<"trecientos ";
            break;
        case 4:
            cout<<"cuatrocientos ";
            break;
        case 5:
            cout<<"quinientos ";
            break;
        case 6:
            cout<<"seiscientos ";
            break;
        case 7:
            cout<<"setecientos ";
            break;
        case 8:
            cout<<"ochocientos ";
            break;
        case 9:
            cout<<"novecientos ";
            break;
        default:
            cout<<"";
            break;

        }
        switch(dl)
        {
        case 0:
            switch(l)
            {
                case 1:
                    cout<<"un ";
                    break;
                case 2:
                    cout<<"dos ";
                    break;
                case 3:
                    cout<<"tres ";
                    break;
                case 4:
                    cout<<"cuatro ";
                    break;
                case 5:
                    cout<<"cinco ";
                    break;
                case 6:
                    cout<<"seis ";
                    break;
                case 7:
                    cout<<"siete ";
                    break;
                case 8:
                    cout<<"ocho ";
                    break;
                case 9:
                    cout<<"nueve ";
                    break;
                }
                break;
        case 1:
            switch(l)
            {
                 case 0:
                    cout<<"diez ";
                    break;
                case 1:
                    cout<<"once ";
                    break;
                case 2:
                    cout<<"doce ";
                    break;
                case 3:
                    cout<<"trece ";
                    break;
                case 4:
                    cout<<"catorce ";
                    break;
                case 5:
                    cout<<"quince ";
                    break;
                case 6:
                    cout<<"dieciseis ";
                    break;
                case 7:
                    cout<<"diecisiete ";
                    break;
                case 8:
                    cout<<"dieciocho ";
                    break;
                case 9:
                    cout<<"diecinueve ";
                    break;
                }
                break;
        case 2:
            switch(l)
            {
                case 0:
                    cout<<"veinte ";
                    break;
                case 1:
                    cout<<"veintiuno ";
                    break;
                case 2:
                    cout<<"veintidos ";
                    break;
                case 3:
                    cout<<"veintitres ";
                    break;
                case 4:
                    cout<<"veinticuatro ";
                    break;
                case 5:
                    cout<<"veinticinco ";
                    break;
                case 6:
                    cout<<"veintiseis ";
                    break;
                case 7:
                    cout<<"veintisiete ";
                    break;
                case 8:
                    cout<<"veintiocho ";
                    break;
                case 9:
                    cout<<"veintinueve ";
                    break;

                }
                break;
        case 3:
            switch(l)
            {
                case 0:
                    cout<<"treinta ";
                    break;
                case 1:
                    cout<<"treinta y uno ";
                    break;
                case 2:
                    cout<<"treinta y dos ";
                    break;
                case 3:
                    cout<<"treinta y tres ";
                    break;
                case 4:
                    cout<<"treinta y cuatro ";
                    break;
                case 5:
                    cout<<"treinta y cinco ";
                    break;
                case 6:
                    cout<<"treinta y seis ";
                    break;
                case 7:
                    cout<<"treinta y siete ";
                    break;
                case 8:
                    cout<<"treinta y ocho ";
                    break;
                case 9:
                    cout<<"treinta y nueve ";
                    break;
                }
                break;
        case 4:
            switch(l)
            {
                case 0:
                    cout<<"cuarenta ";
                    break;
                case 1:
                    cout<<"cuarenta y uno ";
                    break;
                case 2:
                    cout<<"cuarenta y dos ";
                    break;
                case 3:
                    cout<<"cuarenta y tres ";
                    break;
                case 4:
                    cout<<"cuarenta y cuatro ";
                    break;
                case 5:
                    cout<<"cuarenta y cinco ";
                    break;
                case 6:
                    cout<<"cuarenta y seis ";
                    break;
                case 7:
                    cout<<"cuarenta y siete ";
                    break;
                case 8:
                    cout<<"cuarenta y ocho ";
                    break;
                case 9:
                    cout<<"cuarenta y nueve ";
                    break;
                }
                break;
        case 5:
            switch(l)
            {
                 case 0:
                    cout<<"cincuenta ";
                    break;
                case 1:
                    cout<<"cincuenta y uno ";
                    break;
                case 2:
                    cout<<"cincuenta y dos ";
                    break;
                case 3:
                    cout<<"cincuenta y tres ";
                    break;
                case 4:
                    cout<<"cincuenta y cuatro ";
                    break;
                case 5:
                    cout<<"cincuenta y cinco ";
                    break;
                case 6:
                    cout<<"cincuenta y seis ";
                    break;
                case 7:
                    cout<<"cincuenta y siete ";
                    break;
                case 8:
                    cout<<"cincuenta y ocho ";
                    break;
                case 9:
                    cout<<"cincuenta y nueve ";
                    break;
                }
                break;
        case 6:
            switch(l)
            {
                case 0:
                    cout<<"sesenta ";
                    break;
                case 1:
                    cout<<"sesenta y uno ";
                    break;
                case 2:
                    cout<<"sesenta y dos ";
                    break;
                case 3:
                    cout<<"sesenta y tres ";
                    break;
                case 4:
                    cout<<"sesenta y cuatro ";
                    break;
                case 5:
                    cout<<"sesenta y cinco ";
                    break;
                case 6:
                    cout<<"sesenta y seis ";
                    break;
                case 7:
                    cout<<"sesenta y siete ";
                    break;
                case 8:
                    cout<<"sesenta y ocho ";
                    break;
                case 9:
                    cout<<"sesenta y nueve ";
                    break;
                }
                break;
        case 7:
            switch(l)
            {
                 case 0:
                    cout<<"setenta ";
                    break;
                case 1:
                    cout<<"setenta y uno ";
                    break;
                case 2:
                    cout<<"setenta y dos ";
                    break;
                case 3:
                    cout<<"setenta y tres ";
                    break;
                case 4:
                    cout<<"setenta y cuatro ";
                    break;
                case 5:
                    cout<<"setenta y cinco ";
                    break;
                case 6:
                    cout<<"setenta y seis ";
                    break;
                case 7:
                    cout<<"setenta y siete ";
                    break;
                case 8:
                    cout<<"setenta y ocho ";
                    break;
                case 9:
                    cout<<"setenta y nueve ";
                    break;
                }
                break;
        case 8:
            switch(l)
            {
                 case 0:
                    cout<<"ochenta ";
                    break;
                case 1:
                    cout<<"ochenta y uno ";
                    break;
                case 2:
                    cout<<"ochenta y dos ";
                    break;
                case 3:
                    cout<<"ochenta y tres ";
                    break;
                case 4:
                    cout<<"ochenta y cuatro ";
                    break;
                case 5:
                    cout<<"ochenta y cinco ";
                    break;
                case 6:
                    cout<<"ochenta y seis ";
                    break;
                case 7:
                    cout<<"ochenta y siete ";
                    break;
                case 8:
                    cout<<"ochenta y ocho ";
                    break;
                case 9:
                    cout<<"ochenta y nueve ";
                    break;
                }
                break;
        case 9:
            switch(l)
            {
                 case 0:
                    cout<<"noventa ";
                    break;
                case 1:
                    cout<<"noventa y uno ";
                    break;
                case 2:
                    cout<<"noventa y dos ";
                    break;
                case 3:
                    cout<<"noventa y tres ";
                    break;
                case 4:
                    cout<<"noventa y cuatro ";
                    break;
                case 5:
                    cout<<"noventa y cinco ";
                    break;
                case 6:
                    cout<<"noventa y seis ";
                    break;
                case 7:
                    cout<<"noventa y siete ";
                    break;
                case 8:
                    cout<<"noventa y ocho ";
                    break;
                case 9:
                    cout<<"noventa y nueve ";
                    break;
                }
                break;
            default:
                cout<<"";
                break;

            }
            if(l!=0||dl!=0||cl!=0||ml!=0||dml!=0||cml!=0)
            {
                if(l>1 || l==0)
                {
                    cout<<"millones ";
                }
                if(l==1)
                {
                    if(dl==0&&cl==0&&ml==0&&dml==0&&cml==0)
                    {
                        cout<<"millon ";
                    }
                    else{
                        cout<<"millones ";
                    }
                }
            }
            switch(cm)
            {
            case 1:
                if(m==0&&dm==0)
                {
                    cout<<"cien ";
                }
                else{
                    cout<<"ciento ";
                }
                break;
            case 2:
                cout<<"docientos ";
                break;
            case 3:
                cout<<"trecientos ";
                break;
            case 4:
                cout<<"cuatrocientos ";
                break;
            case 5:
                cout<<"quinientos ";
                break;
            case 6:
                cout<<"seiscientos ";
                break;
            case 7:
                cout<<"setecientos ";
                break;
            case 8:
                cout<<"ochocientos ";
                break;
            case 9:
                cout<<"novecientos ";
                break;
            default:
                cout<<"";
                break;

            }
            switch(dm)
            {
            case 0:
                switch(m)
                {
                case 1:
                    cout<<"";
                    break;
                case 2:
                    cout<<"dos ";
                    break;
                case 3:
                    cout<<"tres ";
                    break;
                case 4:
                    cout<<"cuatro ";
                    break;
                case 5:
                    cout<<"cinco ";
                    break;
                case 6:
                    cout<<"seis ";
                    break;
                case 7:
                    cout<<"siete ";
                    break;
                case 8:
                    cout<<"ocho ";
                    break;
                case 9:
                    cout<<"nueve ";
                    break;
                }
                break;
            case 1:
                switch(m)
                {
                case 0:
                    cout<<"diez ";
                    break;
                case 1:
                    cout<<"once ";
                    break;
                case 2:
                    cout<<"doce ";
                    break;
                case 3:
                    cout<<"trece ";
                    break;
                case 4:
                    cout<<"catorce ";
                    break;
                case 5:
                    cout<<"quince ";
                    break;
                case 6:
                    cout<<"dieciseis ";
                    break;
                case 7:
                    cout<<"diecisiete ";
                    break;
                case 8:
                    cout<<"dieciocho ";
                    break;
                case 9:
                    cout<<"diecinueve ";
                    break;
                }
                break;
            case 2:
                switch(m)
                {
                case 0:
                    cout<<"veinte ";
                    break;
                case 1:
                    cout<<"veintiuno ";
                    break;
                case 2:
                    cout<<"veintidos ";
                    break;
                case 3:
                    cout<<"veintitres ";
                    break;
                case 4:
                    cout<<"veinticuatro ";
                    break;
                case 5:
                    cout<<"veinticinco ";
                    break;
                case 6:
                    cout<<"veintiseis ";
                    break;
                case 7:
                    cout<<"veintisiete ";
                    break;
                case 8:
                    cout<<"veintiocho ";
                    break;
                case 9:
                    cout<<"veintinueve ";
                    break;

                }
                break;
            case 3:
                switch(m)
                {
                case 0:
                    cout<<"treinta ";
                    break;
                case 1:
                    cout<<"treinta y uno ";
                    break;
                case 2:
                    cout<<"treinta y dos ";
                    break;
                case 3:
                    cout<<"treinta y tres ";
                    break;
                case 4:
                    cout<<"treinta y cuatro ";
                    break;
                case 5:
                    cout<<"treinta y cinco ";
                    break;
                case 6:
                    cout<<"treinta y seis ";
                    break;
                case 7:
                    cout<<"treinta y siete ";
                    break;
                case 8:
                    cout<<"treinta y ocho ";
                    break;
                case 9:
                    cout<<"treinta y nueve ";
                    break;
                }
                break;
            case 4:
                switch(m)
                {
                case 0:
                    cout<<"cuarenta ";
                    break;
                case 1:
                    cout<<"cuarenta y uno ";
                    break;
                case 2:
                    cout<<"cuarenta y dos ";
                    break;
                case 3:
                    cout<<"cuarenta y tres ";
                    break;
                case 4:
                    cout<<"cuarenta y cuatro ";
                    break;
                case 5:
                    cout<<"cuarenta y cinco ";
                    break;
                case 6:
                    cout<<"cuarenta y seis ";
                    break;
                case 7:
                    cout<<"cuarenta y siete ";
                    break;
                case 8:
                    cout<<"cuarenta y ocho ";
                    break;
                case 9:
                    cout<<"cuarenta y nueve ";
                    break;
                }
                break;
            case 5:
                switch(m)
                {
                case 0:
                    cout<<"cincuenta ";
                    break;
                case 1:
                    cout<<"cincuenta y uno ";
                    break;
                case 2:
                    cout<<"cincuenta y dos ";
                    break;
                case 3:
                    cout<<"cincuenta y tres ";
                    break;
                case 4:
                    cout<<"cincuenta y cuatro ";
                    break;
                case 5:
                    cout<<"cincuenta y cinco ";
                    break;
                case 6:
                    cout<<"cincuenta y seis ";
                    break;
                case 7:
                    cout<<"cincuenta y siete ";
                    break;
                case 8:
                    cout<<"cincuenta y ocho ";
                    break;
                case 9:
                    cout<<"cincuenta y nueve ";
                    break;
                }
                break;
            case 6:
                switch(m)
                {
                case 0:
                    cout<<"sesenta ";
                    break;
                case 1:
                    cout<<"sesenta y uno ";
                    break;
                case 2:
                    cout<<"sesenta y dos ";
                    break;
                case 3:
                    cout<<"sesenta y tres ";
                    break;
                case 4:
                    cout<<"sesenta y cuatro ";
                    break;
                case 5:
                    cout<<"sesenta y cinco ";
                    break;
                case 6:
                    cout<<"sesenta y seis ";
                    break;
                case 7:
                    cout<<"sesenta y siete ";
                    break;
                case 8:
                    cout<<"sesenta y ocho ";
                    break;
                case 9:
                    cout<<"sesenta y nueve ";
                    break;
                }
                break;
            case 7:
                switch(m)
                {
                case 0:
                    cout<<"setenta ";
                    break;
                case 1:
                    cout<<"setenta y uno ";
                    break;
                case 2:
                    cout<<"setenta y dos ";
                    break;
                case 3:
                    cout<<"setenta y tres ";
                    break;
                case 4:
                    cout<<"setenta y cuatro ";
                    break;
                case 5:
                    cout<<"setenta y cinco ";
                    break;
                case 6:
                    cout<<"setenta y seis ";
                    break;
                case 7:
                    cout<<"setenta y siete ";
                    break;
                case 8:
                    cout<<"setenta y ocho ";
                    break;
                case 9:
                    cout<<"setenta y nueve ";
                    break;
                }
                break;
            case 8:
                switch(ml)
                {
                case 0:
                    cout<<"ochenta ";
                    break;
                case 1:
                    cout<<"ochenta y uno ";
                    break;
                case 2:
                    cout<<"ochenta y dos ";
                    break;
                case 3:
                    cout<<"ochenta y tres ";
                    break;
                case 4:
                    cout<<"ochenta y cuatro ";
                    break;
                case 5:
                    cout<<"ochenta y cinco ";
                    break;
                case 6:
                    cout<<"ochenta y seis ";
                    break;
                case 7:
                    cout<<"ochenta y siete ";
                    break;
                case 8:
                    cout<<"ochenta y ocho ";
                    break;
                case 9:
                    cout<<"ochenta y nueve ";
                    break;
                }
                break;
            case 9:
                switch(m)
                {
                case 0:
                    cout<<"noventa ";
                    break;
                case 1:
                    cout<<"noventa y uno ";
                    break;
                case 2:
                    cout<<"noventa y dos ";
                    break;
                case 3:
                    cout<<"noventa y tres ";
                    break;
                case 4:
                    cout<<"noventa y cuatro ";
                    break;
                case 5:
                    cout<<"noventa y cinco ";
                    break;
                case 6:
                    cout<<"noventa y seis ";
                    break;
                case 7:
                    cout<<"noventa y siete ";
                    break;
                case 8:
                    cout<<"noventa y ocho ";
                    break;
                case 9:
                    cout<<"noventa y nueve ";
                    break;
                }
                break;
            default:
                cout<<"";
                break;
        }
        if(m!=0||dm!=0||cm!=0)
        {
            cout<<"mil ";
        }
        switch(c)
        {
        case 1:
            if(u == 0 && d == 0)
            {
                cout<<"cien ";
            }
            else{
                cout<<"ciento ";
            }
            break;
        case 2:
            cout<<"docientos ";
            break;
        case 3:
            cout<<"trecientos ";
            break;
        case 4:
            cout<<"cuatrocientos ";
            break;
        case 5:
            cout<<"quinientos ";
            break;
        case 6:
            cout<<"seiscientos ";
            break;
        case 7:
            cout<<"setecientos ";
            break;
        case 8:
            cout<<"ochocientos ";
            break;
        case 9:
            cout<<"novecientos";
            break;
        default:
            cout<<"";
            break;
        }
        switch(d)
            {
            case 0:
                switch(u)
                {
                case 1:
                    cout<<"";
                    break;
                case 2:
                    cout<<"dos ";
                    break;
                case 3:
                    cout<<"tres ";
                    break;
                case 4:
                    cout<<"cuatro ";
                    break;
                case 5:
                    cout<<"cinco ";
                    break;
                case 6:
                    cout<<"seis ";
                    break;
                case 7:
                    cout<<"siete ";
                    break;
                case 8:
                    cout<<"ocho ";
                    break;
                case 9:
                    cout<<"nueve ";
                    break;
                }
                break;
            case 1:
                switch(u)
                {
                case 0:
                    cout<<"diez ";
                    break;
                case 1:
                    cout<<"once ";
                    break;
                case 2:
                    cout<<"doce ";
                    break;
                case 3:
                    cout<<"trece ";
                    break;
                case 4:
                    cout<<"catorce ";
                    break;
                case 5:
                    cout<<"quince ";
                    break;
                case 6:
                    cout<<"dieciseis ";
                    break;
                case 7:
                    cout<<"diecisiete ";
                    break;
                case 8:
                    cout<<"dieciocho ";
                    break;
                case 9:
                    cout<<"diecinueve ";
                    break;
                }
                break;
            case 2:
                switch(u)
                {
                case 0:
                    cout<<"veinte ";
                    break;
                case 1:
                    cout<<"veintiuno ";
                    break;
                case 2:
                    cout<<"veintidos ";
                    break;
                case 3:
                    cout<<"veintitres ";
                    break;
                case 4:
                    cout<<"veinticuatro ";
                    break;
                case 5:
                    cout<<"veinticinco ";
                    break;
                case 6:
                    cout<<"veintiseis ";
                    break;
                case 7:
                    cout<<"veintisiete ";
                    break;
                case 8:
                    cout<<"veintiocho ";
                    break;
                case 9:
                    cout<<"veintinueve ";
                    break;

                }
                break;
            case 3:
                switch(u)
                {
                case 0:
                    cout<<"treinta ";
                    break;
                case 1:
                    cout<<"treinta y uno ";
                    break;
                case 2:
                    cout<<"treinta y dos ";
                    break;
                case 3:
                    cout<<"treinta y tres ";
                    break;
                case 4:
                    cout<<"treinta y cuatro ";
                    break;
                case 5:
                    cout<<"treinta y cinco ";
                    break;
                case 6:
                    cout<<"treinta y seis ";
                    break;
                case 7:
                    cout<<"treinta y siete ";
                    break;
                case 8:
                    cout<<"treinta y ocho ";
                    break;
                case 9:
                    cout<<"treinta y nueve ";
                    break;
                }
                break;
            case 4:
                switch(u)
                {
                case 0:
                    cout<<"cuarenta ";
                    break;
                case 1:
                    cout<<"cuarenta y uno ";
                    break;
                case 2:
                    cout<<"cuarenta y dos ";
                    break;
                case 3:
                    cout<<"cuarenta y tres ";
                    break;
                case 4:
                    cout<<"cuarenta y cuatro ";
                    break;
                case 5:
                    cout<<"cuarenta y cinco ";
                    break;
                case 6:
                    cout<<"cuarenta y seis ";
                    break;
                case 7:
                    cout<<"cuarenta y siete ";
                    break;
                case 8:
                    cout<<"cuarenta y ocho ";
                    break;
                case 9:
                    cout<<"cuarenta y nueve ";
                    break;
                }
                break;
            case 5:
                switch(u)
                {
                case 0:
                    cout<<"cincuenta ";
                    break;
                case 1:
                    cout<<"cincuenta y uno ";
                    break;
                case 2:
                    cout<<"cincuenta y dos ";
                    break;
                case 3:
                    cout<<"cincuenta y tres ";
                    break;
                case 4:
                    cout<<"cincuenta y cuatro ";
                    break;
                case 5:
                    cout<<"cincuenta y cinco ";
                    break;
                case 6:
                    cout<<"cincuenta y seis ";
                    break;
                case 7:
                    cout<<"cincuenta y siete ";
                    break;
                case 8:
                    cout<<"cincuenta y ocho ";
                    break;
                case 9:
                    cout<<"cincuenta y nueve ";
                    break;
                }
                break;
            case 6:
                switch(u)
                {
                case 0:
                    cout<<"sesenta ";
                    break;
                case 1:
                    cout<<"sesenta y uno ";
                    break;
                case 2:
                    cout<<"sesenta y dos ";
                    break;
                case 3:
                    cout<<"sesenta y tres ";
                    break;
                case 4:
                    cout<<"sesenta y cuatro ";
                    break;
                case 5:
                    cout<<"sesenta y cinco ";
                    break;
                case 6:
                    cout<<"sesenta y seis ";
                    break;
                case 7:
                    cout<<"sesenta y siete ";
                    break;
                case 8:
                    cout<<"sesenta y ocho ";
                    break;
                case 9:
                    cout<<"sesenta y nueve ";
                    break;
                }
                break;
            case 7:
                switch(u)
                {
                case 0:
                    cout<<"setenta ";
                    break;
                case 1:
                    cout<<"setenta y uno ";
                    break;
                case 2:
                    cout<<"setenta y dos ";
                    break;
                case 3:
                    cout<<"setenta y tres ";
                    break;
                case 4:
                    cout<<"setenta y cuatro ";
                    break;
                case 5:
                    cout<<"setenta y cinco ";
                    break;
                case 6:
                    cout<<"setenta y seis ";
                    break;
                case 7:
                    cout<<"setenta y siete ";
                    break;
                case 8:
                    cout<<"setenta y ocho ";
                    break;
                case 9:
                    cout<<"setenta y nueve ";
                    break;
                }
                break;
            case 8:
                switch(u)
                {
                case 0:
                    cout<<"ochenta ";
                    break;
                case 1:
                    cout<<"ochenta y uno ";
                    break;
                case 2:
                    cout<<"ochenta y dos ";
                    break;
                case 3:
                    cout<<"ochenta y tres ";
                    break;
                case 4:
                    cout<<"ochenta y cuatro ";
                    break;
                case 5:
                    cout<<"ochenta y cinco ";
                    break;
                case 6:
                    cout<<"ochenta y seis ";
                    break;
                case 7:
                    cout<<"ochenta y siete ";
                    break;
                case 8:
                    cout<<"ochenta y ocho ";
                    break;
                case 9:
                    cout<<"ochenta y nueve ";
                    break;
                }
                break;
            case 9:
                switch(u)
                {
                case 0:
                    cout<<"noventa ";
                    break;
                case 1:
                    cout<<"noventa y uno ";
                    break;
                case 2:
                    cout<<"noventa y dos ";
                    break;
                case 3:
                    cout<<"noventa y tres ";
                    break;
                case 4:
                    cout<<"noventa y cuatro ";
                    break;
                case 5:
                    cout<<"noventa y cinco ";
                    break;
                case 6:
                    cout<<"noventa y seis ";
                    break;
                case 7:
                    cout<<"noventa y siete ";
                    break;
                case 8:
                    cout<<"noventa y ocho ";
                    break;
                case 9:
                    cout<<"noventa y nueve ";
                    break;
                }
                break;
            default:
                cout<<"";
                break;
        }
        if(u==0&&d==0&&c==0&&m==0&&dm==0&&cm==0&&l==0&&dl==0&&cl==0&&ml==0&&dml==0&&cml==0)
        {
            cout<<"cero ";
        }
        return 0;

}


int main()
{
   Conversor();

    return 0;
}

