#include <iostream>
#include <vector>
#include <algorithm>
#include "bits/stdc++.h"
#include <fstream>
#include <sstream>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <windows.h>
using namespace std;

class MayIn
{
protected:
    string soHieuMayIn;
    string mauSac;
    int tocDo;
    int cuongDo;
    int boNho;
    int soLuong;

public:
    MayIn(string soHieu, string mau, int tocDo, int cuongDo, int boNho, int soLuong)
    {
        soHieuMayIn = soHieu;
        mauSac = mau;
        this->tocDo = tocDo;
        this->cuongDo = cuongDo;
        this->boNho = boNho;
        this->soLuong = soLuong;
    }

    virtual void xuatThongTin() = 0;
    virtual void xuatbangtimkiem() = 0;

    string getSoHieuMayIn()
    {
        return soHieuMayIn;
    }
    int getSoLuong()
    {
        return soLuong;
    }
    void setSoLuong(int sl)
    {
        soLuong = sl;
    }
    string getMausac()
    {
        return mauSac;
    }
    void setMausac(string ms)
    {
        mauSac = ms;
    }
};

class MayInThuong : public MayIn
{
public:
    MayInThuong(string soHieu, string mau, int tocDo, int cuongDo, int boNho, int soLuong) : MayIn(soHieu, mau, tocDo, cuongDo, boNho, soLuong) {}
    void xuatThongTin()
    {

        cout << "   |" << setw(10) << soHieuMayIn << setw(10) << "|" << setw(7) << mauSac << setw(7) << setw(7) << "|"
             << setw(7) << tocDo << setw(7) << "|" << setw(7) << cuongDo << setw(7) << "|" << setw(7) << boNho << setw(7) << "|" << setw(7) << soLuong << setw(8) << "|\n";
        cout << "   |___________________|_____________|_____________|_____________|_____________|_____________|\n";
        ofstream outputFile("output.txt", ios::app);
        if (outputFile.is_open())
        {
            outputFile << "   |" << setw(10) << soHieuMayIn << setw(10) << "|" << setw(7) << mauSac << setw(7) << "|" << setw(7) << tocDo
                       << setw(7) << "|" << setw(7) << cuongDo << setw(7) << "|" << setw(7) << boNho << setw(7) << "|" << setw(7) << soLuong << setw(8) << "|\n";
            outputFile << "   |___________________|_____________|_____________|_____________|_____________|_____________|\n";

            outputFile.close();
        }
        else
        {
            cout << "Khong the mo file!" << endl;
        }
    }

    void xuatbangtimkiem()
    {
        cout << "========================================= May In Thuong ===============================================================\n";
        cout << "    _________________________________________________________________________________________\n";
        cout << "   |  So hieu may in   |  Mau sac    |  Toc do     |  Cuong do   |  Bo nho     |  So luong   |\n";
        cout << "   |___________________|_____________|_____________|_____________|_____________|_____________|\n";

        cout << "   |" << setw(10) << soHieuMayIn << setw(10) << "|" << setw(7) << mauSac << setw(7) << setw(7) << "|"
             << setw(7) << tocDo << setw(7) << "|" << setw(7) << cuongDo << setw(7) << "|" << setw(7) << boNho << setw(7) << "|" << setw(7) << soLuong << setw(8) << "|\n";
        cout << "   |___________________|_____________|_____________|_____________|_____________|_____________|\n";

        ofstream outputFile("output.txt", ios::app);
        if (outputFile.is_open())
        {
            outputFile << endl;
            outputFile << "====================================== May In Thuong ===============================================================\n";
            outputFile << "    _________________________________________________________________________________________\n";
            outputFile << "   |  So hieu may in   |  Mau sac    |  Toc do     |  Cuong do   |  Bo nho     |  So luong   |\n";
            outputFile << "   |___________________|_____________|_____________|_____________|_____________|_____________|\n";

            outputFile << "   |" << setw(10) << soHieuMayIn << setw(10) << "|" << setw(7) << mauSac << setw(7) << "|" << setw(7) << tocDo
                       << setw(7) << "|" << setw(7) << cuongDo << setw(7) << "|" << setw(7) << boNho << setw(7) << "|" << setw(7) << soLuong << setw(8) << "|\n";
            outputFile << "   |___________________|_____________|_____________|_____________|_____________|_____________|\n";

            outputFile.close();
        }
        else
        {
            cout << "Khong the mo file!" << endl;
        }
    }
};

class MayInLaser : public MayInThuong
{
protected:
    int dpi;

public:
    MayInLaser(string soHieu, string mau, int tocDo, int cuongDo, int boNho, int soLuong, int dpi) : MayInThuong(soHieu, mau, tocDo, cuongDo, boNho, soLuong)
    {
        this->dpi = dpi;
    }

    void xuatThongTin()
    {

        cout << "   |" << setw(10) << soHieuMayIn << setw(10) << "|" << setw(7) << mauSac << setw(7) << setw(7) << "|" << setw(7) << tocDo
             << setw(7) << "|" << setw(7) << cuongDo << setw(7) << "|" << setw(7) << boNho << setw(7) << "|" << setw(7) << soLuong << setw(7) << "|" << setw(7) << dpi << setw(8) << "|\n";
        cout << "   |___________________|_____________|_____________|_____________|_____________|_____________|_____________|\n";

        ofstream outputFile("output.txt", ios::app);
        if (outputFile.is_open())
        {

            outputFile << "   |" << setw(10) << soHieuMayIn << setw(10) << "|" << setw(7) << mauSac << setw(7) << setw(7) << "|" << setw(7) << tocDo
                       << setw(7) << "|" << setw(7) << cuongDo << setw(7) << "|" << setw(7) << boNho << setw(7) << "|" << setw(7) << soLuong << setw(7) << "|" << setw(7) << dpi << setw(8) << "|\n";
            outputFile << "   |___________________|_____________|_____________|_____________|_____________|_____________|_____________|\n";

            outputFile.close();
        }
        else
        {
            cout << "Khong the mo file!" << endl;
        }
    }
    void xuatbangtimkiem()
    {

        cout << "================================================== May In LASER ===============================================================\n";
        cout << "    _______________________________________________________________________________________________________\n";
        cout << "   |  So hieu may in   |  Mau sac    |  Toc do     |  Cuong do   |  Bo nho     |  So luong   |     DPI     |\n";
        cout << "   |___________________|_____________|_____________|_____________|_____________|_____________|_____________|\n";

        cout << "   |" << setw(10) << soHieuMayIn << setw(10) << "|" << setw(7) << mauSac << setw(7) << setw(7) << "|" << setw(7) << tocDo
             << setw(7) << "|" << setw(7) << cuongDo << setw(7) << "|" << setw(7) << boNho << setw(7) << "|" << setw(7) << soLuong << setw(7) << "|" << setw(7) << dpi << setw(8) << "|\n";
        cout << "   |___________________|_____________|_____________|_____________|_____________|_____________|_____________|\n";

        ofstream outputFile("output.txt", ios::app);
        if (outputFile.is_open())
        {
            outputFile << "================================================== May In Laser ===============================================================\n";
            outputFile << "    _______________________________________________________________________________________________________\n";
            outputFile << "   |  So hieu may in   |  Mau sac    |  Toc do     |  Cuong do   |  Bo nho     |  So luong   |     DPI     |\n";
            outputFile << "   |___________________|_____________|_____________|_____________|_____________|_____________|_____________|\n";

            outputFile << "   |" << setw(10) << soHieuMayIn << setw(10) << "|" << setw(7) << mauSac << setw(7) << setw(7) << "|" << setw(7) << tocDo
                       << setw(7) << "|" << setw(7) << cuongDo << setw(7) << "|" << setw(7) << boNho << setw(7) << "|" << setw(7) << soLuong << setw(7) << "|" << setw(7) << dpi << setw(8) << "|\n";
            outputFile << "   |___________________|_____________|_____________|_____________|_____________|_____________|_____________|\n";

            outputFile.close();
        }
        else
        {
            cout << "Khong the mo file!" << endl;
        }
    }
};

class MayInMau : public MayInLaser
{
private:
    int soMauInDuoc;

public:
    MayInMau(string soHieu, string mau, int tocDo, int cuongDo, int boNho, int soLuong, int dpi, int soMau) : MayInLaser(soHieu, mau, tocDo, cuongDo, boNho, soLuong, dpi)
    {
        soMauInDuoc = soMau;
    }

    void xuatThongTin()
    {
        cout << "   |" << setw(12) << soHieuMayIn << setw(8) << "|" << setw(7) << mauSac << setw(7) << setw(7) << "|" << setw(7) << tocDo << setw(7)
             << "|" << setw(7) << cuongDo << setw(7) << "|" << setw(7) << boNho << setw(7) << "|" << setw(7) << soLuong << setw(7) << "|" << setw(7)
             << dpi << setw(7) << "|" << setw(9) << soMauInDuoc << setw(12) << "|\n";
        cout << "   |___________________|_____________|_____________|_____________|_____________|_____________|_____________|___________________|\n";

        ofstream outputFile("output.txt", ios::app);
        if (outputFile.is_open())
        {

            outputFile << "   |" << setw(10) << soHieuMayIn << setw(10) << "|" << setw(7) << mauSac << setw(7) << setw(7) << "|" << setw(7) << tocDo << setw(7)
                       << "|" << setw(7) << cuongDo << setw(7) << "|" << setw(7) << boNho << setw(7) << "|" << setw(7) << soLuong << setw(7) << "|" << setw(7)
                       << dpi << setw(7) << "|" << setw(9) << soMauInDuoc << setw(12) << "|\n";
            outputFile << "   |___________________|_____________|_____________|_____________|_____________|_____________|_____________|___________________|\n";

            outputFile.close();
        }
        else
        {
            cout << "Khong the mo file!" << endl;
        }
    }

    void xuatbangtimkiem()
    {
        cout << endl;
        cout << "================================================== May In Mau ===============================================================\n";
        cout << "    ___________________________________________________________________________________________________________________________\n";
        cout << "   |  So hieu may in   |  Mau sac    |  Toc do     |  Cuong do   |  Bo nho     |  So luong   |   Dpi       | So mau in duoc    |\n";
        cout << "   |___________________|_____________|_____________|_____________|_____________|_____________|_____________|___________________|\n";

        cout << "   |" << setw(10) << soHieuMayIn << setw(10) << "|" << setw(7) << mauSac << setw(7) << setw(7) << "|" << setw(7) << tocDo << setw(7)
             << "|" << setw(7) << cuongDo << setw(7) << "|" << setw(7) << boNho << setw(7) << "|" << setw(7) << soLuong << setw(7) << "|" << setw(7)
             << dpi << setw(7) << "|" << setw(9) << soMauInDuoc << setw(12) << "|\n";
        cout << "   |___________________|_____________|_____________|_____________|_____________|_____________|_____________|___________________|\n";

        ofstream outputFile("output.txt", ios::app);
        if (outputFile.is_open())
        {
            outputFile << endl;
            outputFile << "================================================== May In Mau ===============================================================\n";
            outputFile << "    ___________________________________________________________________________________________________________________________\n";
            outputFile << "   |  So hieu may in   |  Mau sac    |  Toc do     |  Cuong do   |  Bo nho     |  So luong   |   Dpi       | So mau in duoc    |\n";
            outputFile << "   |___________________|_____________|_____________|_____________|_____________|_____________|_____________|___________________|\n";

            outputFile << "   |" << setw(10) << soHieuMayIn << setw(10) << "|" << setw(7) << mauSac << setw(7) << setw(7) << "|" << setw(7) << tocDo << setw(7)
                       << "|" << setw(7) << cuongDo << setw(7) << "|" << setw(7) << boNho << setw(7) << "|" << setw(7) << soLuong << setw(7) << "|" << setw(7)
                       << dpi << setw(7) << "|" << setw(9) << soMauInDuoc << setw(12) << "|\n";
            outputFile << "   |___________________|_____________|_____________|_____________|_____________|_____________|_____________|___________________|\n";

            outputFile.close();
        }
        else
        {
            cout << "Khong the mo file!" << endl;
        }
    }
};

class QuanLyMayIn
{
private:
    vector<MayIn *> danhSachMayIn;
    int tongsomayinnhap = 0;
    int tongsomayinxuat = 0;

public:
    void NhapDuLieu()
    {
        int choice;
        do
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            cout << endl;
            cout << "   === Vui long chon theo so thu tu ===" << endl;
            cout << "    _________________________________\n";
            cout << "   |  STT  |       CONTENT           |\n";
            cout << "   |_______|_________________________|\n";
            cout << "   |   1   |  May In Thuong          |\n";
            cout << "   |_______|_________________________|\n";
            cout << "   |   2   |  May In Laser           |\n";
            cout << "   |_______|_________________________|\n";
            cout << "   |   3   |  May In Mau             |\n";
            cout << "   |_______|_________________________|\n";
            cout << "   |   0   |  Ket thuc nhap kho      |\n";
            cout << "   |_______|_________________________|\n";
            cout << "" << endl;
            cout << "Nhap lua chon: ";
            cin >> choice;
            cout << endl;
            if (choice == 1)
            {
                ifstream inputFile("may_in_thuong.txt");
                if (inputFile.is_open())
                {
                    string line;
                    while (getline(inputFile, line))
                    {
                        stringstream ss(line);
                        string soHieuMayIn, mauSac;
                        int tocDo, cuongDo, boNho, soLuong;
                        getline(ss, soHieuMayIn, ';');
                        getline(ss, mauSac, ';');
                        ss >> tocDo;
                        ss.ignore();
                        ss >> cuongDo;
                        ss.ignore();
                        ss >> boNho;
                        ss.ignore();
                        ss >> soLuong;

                        MayInThuong *mayInThuong = new MayInThuong(soHieuMayIn, mauSac, tocDo, cuongDo, boNho, soLuong);
                        danhSachMayIn.push_back(mayInThuong);
                    }

                    inputFile.close();
                }
                else
                {
                    cout << "Khong the mo file!" << endl;
                }
            }
            else if (choice == 2)
            {
                ifstream inputFile("may_in_laser.txt");
                if (inputFile.is_open())
                {
                    string line;
                    while (getline(inputFile, line))
                    {
                        stringstream ss(line);
                        string soHieuMayIn, mauSac;
                        int tocDo, cuongDo, boNho, soLuong, DPI;
                        getline(ss, soHieuMayIn, ';');
                        getline(ss, mauSac, ';');
                        ss >> tocDo;
                        ss.ignore();
                        ss >> cuongDo;
                        ss.ignore();
                        ss >> boNho;
                        ss.ignore();
                        ss >> soLuong;
                        ss.ignore();
                        ss >> DPI;

                        MayInLaser *mayInLaser = new MayInLaser(soHieuMayIn, mauSac, tocDo, cuongDo, boNho, soLuong, DPI);
                        danhSachMayIn.push_back(mayInLaser);
                    }

                    inputFile.close();
                }
                else
                {
                    cout << "Khong the mo file!" << endl;
                }
            }
            else if (choice == 3)
            {
                ifstream inputFile("may_in_mau.txt");
                if (inputFile.is_open())
                {
                    string line;
                    while (getline(inputFile, line))
                    {
                        stringstream ss(line);
                        string soHieuMayIn, mauSac;
                        int tocDo, cuongDo, boNho, soLuong, DPI, soLanInMau;
                        getline(ss, soHieuMayIn, ';');
                        getline(ss, mauSac, ';');
                        ss >> tocDo;
                        ss.ignore();
                        ss >> cuongDo;
                        ss.ignore();
                        ss >> boNho;
                        ss.ignore();
                        ss >> soLuong;
                        ss.ignore();
                        ss >> DPI;
                        ss.ignore();
                        ss >> soLanInMau;

                        MayInMau *mayInMau = new MayInMau(soHieuMayIn, mauSac, tocDo, cuongDo, boNho, soLuong, DPI, soLanInMau);
                        danhSachMayIn.push_back(mayInMau);
                    }

                    inputFile.close();
                }
                else
                {
                    cout << "Khong the mo file!" << endl;
                }
            }
        } while (choice != 0);
    }

    void showMayInMau()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 2);
        cout << endl;
        cout << "================================================== May In Mau ===============================================================\n";
        cout << "    ___________________________________________________________________________________________________________________________\n";
        cout << "   |  So hieu may in   |  Mau sac    |  Toc do     |  Cuong do   |  Bo nho     |  So luong   |   Dpi       | So mau in duoc    |\n";
        cout << "   |___________________|_____________|_____________|_____________|_____________|_____________|_____________|___________________|\n";
        ofstream outputFile("output.txt", ios::app);
        if (outputFile.is_open())
        {
            outputFile << endl;
            outputFile << "================================================== May In Mau ===============================================================\n";
            outputFile << "    ___________________________________________________________________________________________________________________________\n";
            outputFile << "   |  So hieu may in   |  Mau sac    |  Toc do     |  Cuong do   |  Bo nho     |  So luong   |   Dpi       | So mau in duoc    |\n";
            outputFile << "   |___________________|_____________|_____________|_____________|_____________|_____________|_____________|___________________|\n";

            outputFile.close();
        }
        else
        {
            cout << "Khong the mo file!" << endl;
        }
        for (MayIn *mayIn : danhSachMayIn)
        {
            MayInMau *derivedPtr = dynamic_cast<MayInMau *>(mayIn);
            if (derivedPtr)
                derivedPtr->xuatThongTin();
        }
    }

    void showMayInThuong()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 1);
        cout << endl;
        cout << "================================================== May In Thuong ===============================================================\n";
        cout << "    _________________________________________________________________________________________\n";
        cout << "   |  So hieu may in   |  Mau sac    |  Toc do     |  Cuong do   |  Bo nho     |  So luong   |\n";
        cout << "   |___________________|_____________|_____________|_____________|_____________|_____________|\n";
        ofstream outputFile("output.txt", ios::app);
        if (outputFile.is_open())
        {
            outputFile << endl;
            outputFile << "================================================== May In Thuong ===============================================================\n";
            outputFile << "    _________________________________________________________________________________________\n";
            outputFile << "   |  So hieu may in   |  Mau sac    |  Toc do     |  Cuong do   |  Bo nho     |  So luong   |\n";
            outputFile << "   |___________________|_____________|_____________|_____________|_____________|_____________|\n";
            outputFile.close();
        }
        else
        {
            cout << "Khong the mo file!" << endl;
        }
        for (MayIn *mayIn : danhSachMayIn)
        {
            if (typeid(*mayIn) == typeid(MayInThuong))
            {
                MayInThuong *derivedPtr = dynamic_cast<MayInThuong *>(mayIn);
                derivedPtr->xuatThongTin();
            }
        }
    }

    void showMayInLaser()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 14);
        cout << endl;
        cout << "================================================== May In LASER ===============================================================\n";
        cout << "    _______________________________________________________________________________________________________\n";
        cout << "   |  So hieu may in   |  Mau sac    |  Toc do     |  Cuong do   |  Bo nho     |  So luong   |     DPI     |\n";
        cout << "   |___________________|_____________|_____________|_____________|_____________|_____________|_____________|\n";

        ofstream outputFile("output.txt", ios::app);
        if (outputFile.is_open())
        {
            outputFile << endl;
            outputFile << "================================================== May In Laser ===============================================================\n";
            outputFile << "    _______________________________________________________________________________________________________\n";
            outputFile << "   |  So hieu may in   |  Mau sac    |  Toc do     |  Cuong do   |  Bo nho     |  So luong   |     DPI     |\n";
            outputFile << "   |___________________|_____________|_____________|_____________|_____________|_____________|_____________|\n";

            outputFile.close();
        }
        else
        {
            cout << "Khong the mo file!" << endl;
        }
        for (MayIn *mayIn : danhSachMayIn)
        {
            if (typeid(*mayIn) == typeid(MayInLaser))
            {
                MayInLaser *derivedPtr = dynamic_cast<MayInLaser *>(mayIn);
                derivedPtr->xuatThongTin();
            }
        }
    }
    void XuatDuLieu()
    {
        int choice;
        do
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, 6);
            cout << endl;
            cout << "   === Vui long chon theo so thu tu ===" << endl;
            cout << "    _________________________________\n";
            cout << "   |  STT  |       CONTENT           |\n";
            cout << "   |_______|_________________________|\n";
            cout << "   |   1   |  May In Thuong          |\n";
            cout << "   |_______|_________________________|\n";
            cout << "   |   2   |  May In Laser           |\n";
            cout << "   |_______|_________________________|\n";
            cout << "   |   3   |  May In Mau             |\n";
            cout << "   |_______|_________________________|\n";
            cout << "   |   4   |  Xuat tat ca may in     |\n";
            cout << "   |_______|_________________________|\n";
            cout << "   |   0   |  Ket thuc xuat kho      |\n";
            cout << "   |_______|_________________________|\n";
            cout << "" << endl;
            cout << "Nhap lua chon: ";
            cin >> choice;
            cout << endl;
            if (choice == 1)
            {
                showMayInThuong();
            }
            else if (choice == 2)
            {
                showMayInLaser();
            }
            else if (choice == 3)
            {
                showMayInMau();
            }
            else if (choice == 4)
            {
                showMayInThuong();
                showMayInLaser();
                showMayInMau();
            }

        } while (choice != 0);
    }

    void set_soluongnhap(int sl)
    {
        tongsomayinnhap = sl;
    }
    int get_soluongnhap()
    {
        return tongsomayinnhap;
    }
    void set_soluongxuat(int sl)
    {
        tongsomayinxuat = sl;
    }
    int get_soluongxuat()
    {
        return tongsomayinxuat;
    }

    void XuatKho()
    {
        string soHieu;
        string mauSac;
        int soLuong;
        int thongtin;
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 9);
        cout << "How much information to export goods from the warehouse? ";
        cin >> thongtin;
        cin.ignore();
        cout << "Nhap so hieu may in can xuat: ";
        getline(cin, soHieu);
        cout << "Nhap Mau sac cua may in can xuat: ";
        cin >> mauSac;
        cout << "Nhap so luong can xuat: ";
        cin >> soLuong;
        set_soluongxuat(tongsomayinxuat + soLuong);

        bool found = false;
        for (MayIn *mayIn : danhSachMayIn)
        {
            if (mayIn->getSoHieuMayIn() == soHieu && mayIn->getMausac() == mauSac)
            {
                if (mayIn->getSoLuong() >= soLuong)
                {
                    mayIn->setSoLuong(mayIn->getSoLuong() - soLuong);

                    cout << "Xuat kho thanh cong!" << endl;
                    cout << "So luong may in co so Hieu " << soHieu << " va color :" << mauSac << " sau khi xuat kho la " << mayIn->getSoLuong() << endl;
                    cout << endl;
                    cout << "~~~~~~~~~~  Thong TIN MAY IN  ~~~~~~~~~~ " << endl;
                    cout << "    _______________________________________________\n";
                    cout << "   |  So hieu may in   |   Mau Sac   |   So luong  |\n";
                    cout << "   |___________________|_____________|_____________|\n";
                    cout << "   |" << setw(10) << soHieu << setw(10) << right << "|" << setw(7) << mauSac << setw(7) << right << "|" << setw(6) << mayIn->getSoLuong() << setw(9) << right << "|\n";
                    cout << "   |___________________|_____________|_____________|\n";
                    cout << endl;
                }
                else
                {
                    cout << "So luong may in co so hieu " << soHieu << " trong kho khong du. Vui long nhap so luong nho hon!." << endl;
                }
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Khong tim thay may in trong kho !." << endl;
        }
    }

    void NhapKho()
    {
        string soHieu;
        string mauSac;
        int soLuong;
        int thongtin;
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 9);
        cout << "How Much Information To Import Goods Into Warehouse? ";
        cin >> thongtin;
        cin.ignore();
        cout << "Nhap so hieu may in can nhap: ";
        getline(cin, soHieu);
        cout << "Nhap mau sac cua mau in can nhap: ";
        cin >> mauSac;
        cout << "Nhap so luong can nhap: ";
        cin >> soLuong;

        set_soluongnhap(tongsomayinnhap + soLuong);
        bool found = false;
        for (MayIn *mayIn : danhSachMayIn)
        {
            if (mayIn->getSoHieuMayIn() == soHieu && mayIn->getMausac() == mauSac)
            {
                mayIn->setSoLuong(mayIn->getSoLuong() + soLuong);

                cout << "Nhap kho thanh cong!" << endl;
                cout << "So luong may in co so hieu " << soHieu << "va color:" << mauSac << " sau khi nhap kho la " << mayIn->getSoLuong() << endl;
                cout << endl;
                cout << "~~~~~~~~~~  Thong TIN MAY IN  ~~~~~~~~~~ " << endl;
                cout << "    _______________________________________________\n";
                cout << "   |  So hieu may in   |   Mau Sac   |   So luong  |\n";
                cout << "   |___________________|_____________|_____________|\n";
                cout << "   |" << setw(10) << soHieu << setw(10) << right << "|" << setw(7) << mauSac << setw(7) << right << "|" << setw(6) << mayIn->getSoLuong() << setw(9) << right << "|\n";
                cout << "   |___________________|_____________|_____________|\n";

                cout << endl;
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "Khong tim thay may in co so hieu " << soHieu << " trong kho." << endl;
        }
    }

    void Hoadonxuat()
    {
        string TenKH, DiachiKH;
        string DATE, tenhanghoa, payments;
        string soHieu, masohoadon;
        int SDTKH, CODEKH, donhang;
        float taxrate;
        int soLuong;
        float DonGia, tongtien = 0, thanhtien = 0;
        int STT = 0;
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 14);
        cout << "Nhap so luong don hang: ";
        cin >> donhang;
        cout << "================== Nhap Thong Tin HOA DON =================" << endl;
        cin.ignore();
        cout << "Nhap Ma so don hang: ";
        getline(cin, masohoadon);
        cout << "Nhap Ten Khach Hang: ";
        getline(cin, TenKH);
        cout << "Nhap Dia Chi Khach Hang: ";
        getline(cin, DiachiKH);
        cout << "So dien thoai Khach Hang: ";
        cin >> SDTKH;
        cin.ignore();
        cout << "Nhap Ma Khach Hang: ";
        cin >> CODEKH;
        cin.ignore();
        cout << "Hinh Thuc Thanh Toan: ";
        getline(cin, payments);
        cout << "Nhap ngay thang nam: ";
        getline(cin, DATE);

        cout << "Loai May In Ma Khach Hang chon co thong tin: " << endl;

        for (int i = 1; i <= donhang; i++)
        {
            cout << "Nhap ten hang hoa: ";
            getline(cin, tenhanghoa);
            cout << "Nhap so Hieu May In: ";
            getline(cin, soHieu);
            cout << "Nhap so luong may in trong kho can xuat: ";
            cin >> soLuong;
            cout << "Nhap gia don hang: ";
            cin >> DonGia;
            cin.ignore();
            thanhtien = DonGia * soLuong;
            tongtien += thanhtien;
        }

        cout << "Nhap thue(%) = ";
        cin >> taxrate;
        float tienthue = tongtien * taxrate / 100;
        float tongthanhtoan = tienthue + tongtien;

        for (MayIn *mayIn : danhSachMayIn)
        {

            if (mayIn->getSoHieuMayIn() == soHieu && mayIn->getSoLuong() >= soLuong)
            {
                mayIn->setSoLuong(mayIn->getSoLuong() - soLuong);

                cout << " ____________________________________________________________________________________________________________________________________\n";
                cout << "|                                                                                                                                    |\n";
                cout << "|====================================================== HOA DON XUAT =============================================================== |\n";
                cout << "|                                                                                                                                    |\n";
                cout << "|                                                                                             SO Hoa Don: " << left << masohoadon << setw(23) << right << "|\n";
                cout << "|                                                                                                                                    |\n";
                cout << "| Don Vi          : CONG TY CO PHAN THUONG MAI MAY IN SO MOT THE GIOI                                                                |\n";
                cout << "| Ma So Thue      : 123456789                                                                                                        |\n";
                cout << "| Dia Chi         : 309 - VIET NAM - TP. TRAI DAT                                                                                    |\n";
                cout << "|                                                                                                                                    |\n";
                cout << "|                                                                                                                                    |\n";
                cout << "| Khach Hang      : " << setw(100) << left << TenKH << setw(15) << right << "|\n";
                cout << "| Dia Chi Khach   : " << setw(100) << left << DiachiKH << setw(15) << right << "|\n";
                cout << "| So dien thoai   : " << setw(100) << left << SDTKH << setw(15) << right << "|\n";
                cout << "| Ma Khach hang   : " << setw(100) << left << CODEKH << setw(15) << right << "|\n";
                cout << "| Thanh Toan      : " << setw(100) << left << payments << setw(15) << right << "|\n";
                cout << "| Ngay/Thang/Nam  : " << setw(100) << left << DATE << setw(15) << right << "|\n";
                cout << "|                                                                                                                                    |\n";
                cout << "|                  __________________________________________________________________________________________________________        |\n";
                cout << "|                 |  STT |    Ten Hang Hoa   |     So Hieu       |  So Luong         |     Don Gia       |   Thanh Tien      |       |\n";
                cout << "|                 |______|___________________|___________________|___________________|___________________|___________________|       |\n";

                for (int i = 1; i <= donhang; i++)
                {

                    STT++;

                    cout << fixed << setprecision(3);
                    cout << "|                 |" << setw(3) << STT << setw(4) << "|" << left << setw(17) << tenhanghoa << setw(3) << right << "|" << setw(12) << left << soHieu
                         << setw(8) << right << "|" << setw(12) << left << soLuong << setw(8) << right << "|" << setw(12) << DonGia << left << setw(8) << right << "|" << setw(12) << left << thanhtien << setw(8) << right << "|" << setw(9) << right
                         << "|\n";
                    cout << "|                 |______|___________________|___________________|___________________|___________________|___________________|       |\n";
                }
                cout << "|                                                                                    |    TONG TIEN      |" << setw(17) << left << tongtien << setw(3) << right << "|" << setw(9) << "|\n";
                cout << "|                                                                                    |___________________|___________________|       |\n";
                cout << "|      PAYMENT METHOD :                                                              |    TAX(%)         |" << setw(17) << left << tienthue << setw(3) << right << "|" << setw(9) << "|\n";
                cout << "|      Bank Name      : ANHH PHAPP                                                   |___________________|___________________|       |\n";
                cout << "|      BANK           : BIDV                                                         |  TONG THANH TOAN  |" << setw(17) << left << tongthanhtoan << setw(3) << right << "|" << setw(9) << "|\n";
                cout << "|      ACCOUNT        : 0339573127                                                   |___________________|___________________|       |\n";
                cout << "|                                                                                                                                    |\n";
                cout << "|                                                                                                                                    |\n";
                cout << "|      THANK YOU FOR PURCHASE ^^                                                                                                     |\n";
                cout << "|____________________________________________________________________________________________________________________________________|\n";
            }
        }
    }

    void Hoadonnhap()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 14);
        string TenKH, DiachiKH;
        string DATE, tenhanghoa, payments;
        string soHieu, masohoadon;
        int SDTKH, CODEKH, donhang;
        float taxrate;
        int soLuong;
        float DonGia, tongtien = 0, thanhtien = 0;
        int STT = 0;
        cout << "Nhap so luong don hang: ";
        cin >> donhang;
        cout << "================== Nhap Thong Tin HOA DON =================" << endl;
        cin.ignore();
        cout << "Nhap Ma so hoa don: ";
        getline(cin, masohoadon);
        cout << "Nhap Ten Khach Hang: ";
        getline(cin, TenKH);
        cout << "Nhap Dia Chi Khach Hang: ";
        getline(cin, DiachiKH);
        cout << "So dien thoai Khach Hang: ";
        cin >> SDTKH;
        cin.ignore();
        cout << "Nhap Ma Khach Hang: ";
        cin >> CODEKH;
        cin.ignore();
        cout << "Hinh Thuc Thanh Toan: ";
        getline(cin, payments);
        cout << "Nhap ngay thang nam: ";
        getline(cin, DATE);

        cout << "Loai May In Ma Khach Hang chon co thong tin: " << endl;

        for (int i = 1; i <= donhang; i++)
        {
            cout << "Nhap ten hang hoa: ";
            getline(cin, tenhanghoa);
            cout << "Nhap so Hieu May In: ";
            getline(cin, soHieu);
            cout << "Nhap so luong may in trong kho can nhap: ";
            cin >> soLuong;
            cout << "Nhap gia don hang: ";
            cin >> DonGia;
            cin.ignore();
            thanhtien = DonGia * soLuong;
            tongtien += thanhtien;
        }

        cout << "Nhap thue(%) = ";
        cin >> taxrate;
        float tienthue = tongtien * taxrate / 100;
        float tongthanhtoan = tienthue + tongtien;

        for (MayIn *mayIn : danhSachMayIn)
        {

            if (mayIn->getSoHieuMayIn() == soHieu)
            {
                mayIn->setSoLuong(mayIn->getSoLuong() + soLuong);

                cout << " ____________________________________________________________________________________________________________________________________\n";
                cout << "|                                                                                                                                    |\n";
                cout << "|====================================================== HOA DON NHAP =============================================================== |\n";
                cout << "|                                                                                                                                    |\n";
                cout << "|                                                                                             SO Hoa Don: " << left << masohoadon << setw(23) << right << "|\n";
                cout << "|                                                                                                                                    |\n";
                cout << "| Don Vi Gui Hang : CONG TY CO PHAN THUONG MAI MAY IN SO MOT THE GIOI                                                                |\n";
                cout << "| Ma So Thue      : 123456789                                                                                                        |\n";
                cout << "| Dia Chi         : 309 - VIET NAM - TP. TRAI DAT                                                                                    |\n";
                cout << "|                                                                                                                                    |\n";
                cout << "|                                                                                                                                    |\n";
                cout << "| Khach Hang      : " << setw(100) << left << TenKH << setw(15) << right << "|\n";
                cout << "| Dia Chi Khach   : " << setw(100) << left << DiachiKH << setw(15) << right << "|\n";
                cout << "| So dien thoai   : " << setw(100) << left << SDTKH << setw(15) << right << "|\n";
                cout << "| Ma Khach hang   : " << setw(100) << left << CODEKH << setw(15) << right << "|\n";
                cout << "| Thanh Toan      : " << setw(100) << left << payments << setw(15) << right << "|\n";
                cout << "| Ngay/Thang/Nam  : " << setw(100) << left << DATE << setw(15) << right << "|\n";
                cout << "|                                                                                                                                    |\n";
                cout << "|                  __________________________________________________________________________________________________________        |\n";
                cout << "|                 |  STT |    Ten Hang Hoa   |     So Hieu       |  So Luong         |     Don Gia       |   Thanh Tien      |       |\n";
                cout << "|                 |______|___________________|___________________|___________________|___________________|___________________|       |\n";

                for (int i = 1; i <= donhang; i++)
                {

                    STT++;

                    cout << fixed << setprecision(3);
                    cout << "|                 |" << setw(3) << STT << setw(4) << "|" << left << setw(17) << tenhanghoa << setw(3) << right << "|" << setw(12) << left << soHieu
                         << setw(8) << right << "|" << setw(12) << left << soLuong << setw(8) << right << "|" << setw(12) << DonGia << left << setw(8) << right << "|" << setw(12) << left << thanhtien << setw(8) << right << "|" << setw(9) << right
                         << "|\n";
                    cout << "|                 |______|___________________|___________________|___________________|___________________|___________________|       |\n";
                }
                cout << "|                 |                                               CONG TIEN HANG                         |" << setw(17) << left << tongtien << setw(3) << right << "|" << setw(9) << "|\n";
                cout << "|                 |______________________________________________________________________________________|___________________|       |\n";
                cout << "|                 |        THUE SUAT GTGT    |         TAX(%)     TIEN THUE                              |" << setw(17) << left << tienthue << setw(3) << right << "|" << setw(9) << "|\n";
                cout << "|                 |__________________________|___________________________________________________________|___________________|       |\n";
                cout << "|                 |                                               TONG CONG TIEN THANH TOAN              |" << setw(17) << left << tongthanhtoan << setw(3) << right << "|" << setw(9) << "|\n";
                cout << "|                 |______________________________________________________________________________________|___________________|       |\n";
                cout << "|                                                                                                                                    |\n";
                cout << "|               PAYMENT METHOD :                                                                                                     |\n";
                cout << "|               Bank Name      : ANHH PHAPP                                                                                          |\n";
                cout << "|               BANK           : BIDV                                                                                                |\n";
                cout << "|               ACCOUNT        : 0339573127                                                                                          |\n";
                cout << "|                                                                                                                                    |\n";
                cout << "|               THANK YOU FOR PURCHASE ^^                                                                                            |\n";
                cout << "|____________________________________________________________________________________________________________________________________|\n";
            }
        }
    }
    int countMayInLaser()
    {
        int n = 0;
        for (MayIn *mayIn : danhSachMayIn)
        {
            if (typeid(*mayIn) == typeid(MayInLaser))
            {
                MayInLaser *derivedPtr = dynamic_cast<MayInLaser *>(mayIn);
                n += derivedPtr->getSoLuong();
            }
        }
        return n;
    }
    int countMayInThuong()
    {
        int n = 0;
        for (MayIn *mayIn : danhSachMayIn)
        {
            if (typeid(*mayIn) == typeid(MayInThuong))
            {
                MayInThuong *derivedPtr = dynamic_cast<MayInThuong *>(mayIn);
                if (derivedPtr)
                    n += derivedPtr->getSoLuong();
            }
        }
        return n;
    }
    int countMayInMau()
    {
        int n = 0;
        for (MayIn *mayIn : danhSachMayIn)
        {
            if (typeid(*mayIn) == typeid(MayInMau))
            {
                MayInMau *derivedPtr = dynamic_cast<MayInMau *>(mayIn);
                if (derivedPtr)
                    n += derivedPtr->getSoLuong();
            }
        }
        return n;
    }
    void ThongKe()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 3);
        int tongSoMayIn = 0;
        int soMayInConItTrongKho = 0;
        for (MayIn *mayIn : danhSachMayIn)
        {
            tongSoMayIn += mayIn->getSoLuong();
            if (mayIn->getSoLuong() < mayIn->getSoLuong())
            {
                soMayInConItTrongKho++;
            }
        }
        cout << endl;
        cout << "================== BANG THONG KE MAY IN ===========================" << endl;
        cout << "    ________________________________________________________\n";
        cout << "   |                      THONG KE                          |\n";
        cout << "   |________________________________________________________|\n";
        cout << "   |  Tong so may in cua may in thuong la: " << setw(4) << right << countMayInThuong() << setw(15) << "|\n";
        cout << "   |________________________________________________________|\n";
        cout << "   |  Tong so may in cua may in Laser la: " << setw(4) << left << countMayInLaser() << setw(16) << right << "|\n";
        cout << "   |________________________________________________________|\n";
        cout << "   |  Tong so may in cua may in Mau la: " << setw(4) << left << countMayInMau() << setw(18) << right << "|\n";
        cout << "   |________________________________________________________|\n";
        cout << "   |  Tong so may in trong kho: " << setw(4) << left << tongSoMayIn << setw(26) << right << "|\n";
        cout << "   |________________________________________________________|\n";
        cout << "   |  Tong so may in da nhap kho: " << setw(4) << left << get_soluongnhap() << setw(24) << right << "|\n";
        cout << "   |________________________________________________________|\n";
        cout << "   |  Tong so may in da xuat kho: " << setw(4) << left << get_soluongxuat() << setw(24) << right << "|\n";
        cout << "   |________________________________________________________|\n";
        cout << "   |  So loai may in con it trong kho can duoc              |\n";
        cout << "   |  nhap them: " << setw(4) << left << soMayInConItTrongKho << setw(41) << right << "|\n";
        cout << "   |________________________________________________________|\n";
        cout << endl;

        ofstream outputFile("output.txt");

        if (outputFile.is_open())
        {
            outputFile << endl;

            outputFile << "================== BANG THONG KE MAY IN ===========================" << endl;
            outputFile << "    ________________________________________________________\n";
            outputFile << "   |                      THONG KE                          |\n";
            outputFile << "   |________________________________________________________|\n";
            outputFile << "   |  Tong so may in cua may in thuong la: " << setw(4) << right << countMayInThuong() << setw(15) << "|\n";
            outputFile << "   |________________________________________________________|\n";
            outputFile << "   |  Tong so may in cua may in Laser la: " << setw(4) << left << countMayInLaser() << setw(16) << right << "|\n";
            outputFile << "   |________________________________________________________|\n";
            outputFile << "   |  Tong so may in cua may in Mau la: " << setw(4) << left << countMayInMau() << setw(18) << right << "|\n";
            outputFile << "   |________________________________________________________|\n";
            outputFile << "   |  Tong so may in trong kho: " << setw(4) << left << tongSoMayIn << setw(26) << right << "|\n";
            outputFile << "   |________________________________________________________|\n";
            outputFile << "   |  Tong so may in da nhap kho: " << setw(4) << left << get_soluongnhap() << setw(24) << right << "|\n";
            outputFile << "   |________________________________________________________|\n";
            outputFile << "   |  Tong so may in da xuat kho: " << setw(4) << left << get_soluongxuat() << setw(24) << right << "|\n";
            outputFile << "   |________________________________________________________|\n";
            outputFile << "   |  So loai may in con it trong kho can duoc              |\n";
            outputFile << "   |  nhap them: " << setw(4) << left << soMayInConItTrongKho << setw(41) << right << "|\n";
            outputFile << "   |________________________________________________________|\n";
            outputFile << endl;
            outputFile.close();
        }
        else
        {
            cout << "Khong the mo file!" << endl;
        }
    }

    void TimKiem()
    {
        int choice;
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 2);
        cout << "    _________________________________\n";
        cout << "   |  STT  |       CONTENT           |\n";
        cout << "   |_______|_________________________|\n";
        cout << "   |   1   |  Tim kiem theo so hieu  |\n";
        cout << "   |_______|_________________________|\n";
        cout << "   |   2   |  Tim kiem theo mau sac  |\n";
        cout << "   |_______|_________________________|\n";
        cout << endl;
        cout << "Vui Long Chon Theo So Thu Tu: ";
        cin >> choice;
        cin.ignore();
        string value;
        cout << "Nhap tieu chi tim kiem: ";
        getline(cin, value);
        bool found = false;
        for (MayIn *mayIn : danhSachMayIn)
        {
            if (choice == 1 && mayIn->getSoHieuMayIn() == value)
            {
                mayIn->xuatbangtimkiem();
                found = true;
            }
            else if (choice == 2 && mayIn->getMausac() == value)
            {
                mayIn->xuatbangtimkiem();
                found = true;
            }
        }

        if (!found)
        {
            cout << "Khong tim thay may in theo tieu chi tim kiem." << endl;
        }
    }
    void xoaTrangFile()
    {
        std::ofstream outputFile("output.txt", std::ios::trunc);

        if (outputFile.is_open())
        {

            outputFile.close();
        }
        else
        {
            std::cout << "Khong the mo file!" << std::endl;
        }
    }
};
void start()
{
    QuanLyMayIn quanLyMayIn;
    quanLyMayIn.xoaTrangFile();
    int choice;

    do
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << endl;
        SetConsoleTextAttribute(hConsole, 12);
        cout << "===== CHUONG TRINH QUAN LY MAY IN =======\n";
        SetConsoleTextAttribute(hConsole, 12);
        cout << "   _________________________________\n";
        cout << "  |  STT  |       CONTENT           |\n";
        cout << "  |_______|_________________________|\n";
        cout << "  |   1   |  Nhap Du Lieu           |\n";
        cout << "  |_______|_________________________|\n";
        cout << "  |   2   |  Xuat Du Lieu           |\n";
        cout << "  |_______|_________________________|\n";
        cout << "  |   3   |  Xuat Kho               |\n";
        cout << "  |_______|_________________________|\n";
        cout << "  |   4   |  Nhap Kho               |\n";
        cout << "  |_______|_________________________|\n";
        cout << "  |   5   |  In Hoa Don Xuat Kho    |\n";
        cout << "  |_______|_________________________|\n";
        cout << "  |   6   |  In Hoa Don Nhap Kho    |\n";
        cout << "  |_______|_________________________|\n";
        cout << "  |   7   |  Thong Ke               |\n";
        cout << "  |_______|_________________________|\n";
        cout << "  |   8   |  Tim Kiem               |\n";
        cout << "  |_______|_________________________|\n";
        cout << "  |   0   |  Ket thuc nhap kho      |\n";
        cout << "  |_______|_________________________|\n";
        cout << "" << endl;
        cout << "Nhap lua chon: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            quanLyMayIn.NhapDuLieu();
            break;
        case 2:
            quanLyMayIn.XuatDuLieu();
            break;
        case 3:
            quanLyMayIn.XuatKho();
            break;
        case 4:
            quanLyMayIn.NhapKho();
            break;
        case 5:
            quanLyMayIn.Hoadonxuat();
            break;
        case 6:
            quanLyMayIn.Hoadonnhap();
            break;
        case 7:
            quanLyMayIn.ThongKe();
            break;
        case 8:
            quanLyMayIn.TimKiem();
            break;
        case 0:
            cout << "Cam on ban da su dung chuong trinh!";
            break;
        default:
            cout << "Lua chon khong hop le. Vui long chon lai.\n";
            break;
        }
        SetConsoleTextAttribute(hConsole, 7);
    } while (choice != 0);
}

int main()
{
    start();

    return 0;
}