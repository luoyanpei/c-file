#include <iostream>
using namespace std;
class Client
{
public:
    Client(int money_1, int init_money_1, int xinyong_1,int num_1,int xinyong_num_1) {
        init_money = init_money_1;
        gongzi = money_1;
        xinyong = xinyong_1;
        xinyong_num = xinyong_num_1;
        num = num_1;
    }   // 这是构造函数声明
    ~Client(void) {
        cout << "you are pochan!";
    }
    void shopping() {
        cout << "input your shopping goods numbers:";
        cin >> num;
        if (init_money >num*9)
        {
            switch (num)
            {
            case 1:init_money = init_money - num * 90; break;
            case 2:init_money = init_money - num * 90; break;
            case 3:init_money = init_money - num * 90; break;
            case 4:init_money = init_money - num * 90; break;
            case 5:init_money = init_money - num * 90; break;
            case 6:init_money = init_money - num * 90; break;
            case 7:init_money = init_money - num * 90; break;
            case 8:init_money = init_money - num * 90; break;
            case 9:init_money = init_money - num * 90; break;
            case 10:init_money = init_money - num * 90; break;
            }
        }
        else
        {
            cout << "you dont have enough money!" << endl;
        }
        
    
    }
    void money_last() {
        cout << "your have:" << init_money << "dollars!" << endl;
    }
    void xinyong_find() {
        cout << "your xinyong is:" << xinyong << endl;
    }
    void xinyong_lend() {
        cout << "how many moneys you want to lend? your xinyong is:" << xinyong << endl;
        cin >> xinyong_num;
        xinyong = xinyong - xinyong_num;
        init_money = init_money + xinyong_num;
        cout << "now your personal money is:" << init_money << endl;
    
    }
    void xinyong_give_3() {
        for (int i = 0; i < 3; i++)
        {
            gongzi_accept();
            init_money = init_money - 0.03 * num * 30;
        }

    }
    void xinyong_give_all() {
        init_money = init_money - xinyong_num;
        xinyong = xinyong + xinyong_num;
        cout << "return lend_money is done!" << endl;
    }
    void gongzi_accept() {
        init_money = init_money + gongzi;
        cout << "you accept gongzi!" << endl;
    }
    void recieve_goods() {
        cout << "you accept the goods!" << ends;
    }
    void return_goods() {
        cout << "which goods you want to return?" << endl;
        cin >> num;
        cout << "the good had returned!" << endl;
        init_money = init_money * 10;
    }
    int pochan() {
        if (init_money+gongzi< xinyong_num)
        {
            return 1;
        }
    }

private:
    int init_money;
    int xinyong;
    int gongzi;
    int num;
    int xinyong_num;
};

int main(void)
{
    int num,a;
    Client client(2000, 200, 2000, 0, 0);
    while (client.pochan()!=1)
    {
        cout << "input your operation(1~9):" << endl;
        cin >> num;
        switch (num)
        {
        case 1:client.shopping(); break;//shopping
        case 2:client.money_last(); break;//Check Price
        case 3:client.xinyong_find(); break;//Credit Inquiry
        case 4:client.xinyong_lend(); break;//Loans
        case 5:client.xinyong_give_3(); break;//Installment repayment
        case 6:client.xinyong_give_all(); break;//Full Payment
        case 7:client.gongzi_accept(); break;//Wages
        case 8:client.recieve_goods(); break;//Receiving goods
        case 9:client.return_goods(); break;//
        default:cout << "error!" << endl;
        }
    }
}