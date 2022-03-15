#include <iostream>
#include <time.h>
//#include<cstdlib>
#define n 5000
using namespace std;
class Shop1
{
public:
    //定义初始变量 ，初始金钱，初始库存，每一单进货，初始订单数，售价,退货承担运费，运费
    Shop1(int money_1 ,int goods,int in_goods,int init_order_1,int sale,int afford_pass_1,int pass_1,int goods_return_1,int order_now_1,int stock_1) {
        //定义初始货物数、库存数量
        shop_num = goods;

        //定义初始金额
        money = money_1;
        //定义买卖金额(每一单金额)
        order_money = in_goods;

        //初始订单数
        init_order = init_order_1;
        //售价
        sale_money = sale;
        //退货承担运费
        afford_pass = afford_pass_1;
        //运费
        pass = pass_1;
        goods_return = goods_return_1;
        order_now = order_now_1;
        stock = stock_1;


    }
    //货物小于等于20进行自动补货操作
    void auto_goods() {
        if (shop_num <= 20) {
            cout << "！！！！！！！！！！！！！！！！！！！！警告！！！！！！！！！！！！！！！！！！！！！！！！！！！" << endl;
            cout << "Automatic replenishment will be carried out when it detects that you have insufficient goods" << endl;
            shop_num = shop_num + 200;
            money = money - 200 * order_money;
            cout << "The number of automatic feeds is:" << shop_num << endl;
            cout << "Deducted your money:" << 200 * order_money << endl;
            cout << "！！！！！！！！！！！！！！！！！！！！警告！！！！！！！！！！！！！！！！！！！！！！！！！！！" << endl;
        }
    }
    //进货操作
    void in_goods() {//进货
        cout << "---------------------------------进货--------------------------------------------" << endl;
        cout << "Select your stocking quantity";
        cin >> stock;
        cout << endl;
        cout << "Your incoming quantity is.:" << shop_num << endl;
        cout << "Deducted your money:" << shop_num * order_money << endl;
        cout << "---------------------------------进货--------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;

    }
    //库存查询操作
    void shop_num_ask() {//库存数量查询
        cout << "---------------------------------库存数量查询--------------------------------------------" << endl;
        cout << "The quantity in stock is：" << shop_num << endl;
        cout << "---------------------------------库存数量查询--------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
    //资金查询操作
    void shop_money_ask() {//查询资金
        cout << "---------------------------------查询资金--------------------------------------------" << endl;
        cout << "The shop1 Current funding is:" << money << endl;
        cout << "---------------------------------查询资金--------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
    //接受订单（订单生成）
    void accept_order() {//接受订单
        srand((int)time(0));
        order_now = rand() % 10+1;
        init_order = init_order + order_now;
    }
    //发货
    void send_order() {//发货
        
        money = money + sale_money * init_order - pass * init_order;
       
        shop_num = shop_num - init_order;
        init_order = 0;
        
    }
    //退货
    void return_order() {//接受退货
        goods_return = init_order;
        //cout << "the goods of returns:" << goods_return;
    }
    //接受退货
    void accept_return_order() {//接收退货
        
        money = money - goods_return * order_money- goods_return * afford_pass;

        goods_return = 0;
        
    }
    //破产判定
    int none_money() {
        if (money <= 0)
        {
            cout << "你的店铺已破产，已经转让！" << endl;
            return 1;
        }
    }
    //转让操作
    Shop1(const Shop1& Shop) {
        shop_num = Shop.shop_num;
        money = Shop.money;
        init_order = Shop.init_order;
        order_money = Shop.order_money;
        goods_return = Shop.goods_return;
        order_now = Shop.order_now;
        stock = Shop.stock;
        sale_money = Shop.sale_money;
        afford_pass = Shop.afford_pass;
        pass = Shop.pass;
    }
private:
    int shop_num ;//初始货物数、库存数量
    int money;//初始金额
    int init_order ;//初始订单
    int order_money ;//买卖金额
    int goods_return;//退单数量
    int order_now;//随机订单数生成
    int stock;//进货数量
    int sale_money;//每一单售价
    int afford_pass;//退货承担运费
    int pass;//运费
};
class Shop2
{
public:
    //定义初始变量 ，初始金钱，初始库存，每一单进货，初始订单数，售价,退货承担运费，运费
    Shop2(int money_1, int goods, int in_goods, int init_order_1, int sale, int afford_pass_1, int pass_1, int goods_return_1, int order_now_1, int stock_1) {
        //定义初始货物数、库存数量
        shop_num = goods;

        //定义初始金额
        money = money_1;
        //定义买卖金额(每一单金额)
        order_money = in_goods;

        //初始订单数
        init_order = init_order_1;
        //售价
        sale_money = sale;
        //退货承担运费
        afford_pass = afford_pass_1;
        //运费
        pass = pass_1;
        goods_return = goods_return_1;
        order_now = order_now_1;
        stock = stock_1;


    }
    //货物小于等于20进行自动补货操作
    void auto_goods() {
        if (shop_num <= 20) {
            cout << "！！！！！！！！！！！！！！！！！！！！警告！！！！！！！！！！！！！！！！！！！！！！！！！！！" << endl;
            cout << "Automatic replenishment will be carried out when it detects that you have insufficient goods" << endl;
            shop_num = shop_num + 200;
            money = money - 200 * order_money;
            cout << "The number of automatic feeds is:" << shop_num << endl;
            cout << "Deducted your money:" << 200 * order_money << endl;
            cout << "！！！！！！！！！！！！！！！！！！！！警告！！！！！！！！！！！！！！！！！！！！！！！！！！！" << endl;
        }
    }
    //进货操作
    void in_goods() {//进货
        cout << "---------------------------------进货--------------------------------------------" << endl;
        cout << "Select your stocking quantity";
        cin >> stock;
        cout << endl;
        cout << "Your incoming quantity is.:" << shop_num << endl;
        cout << "Deducted your money:" << shop_num * order_money << endl;
        cout << "---------------------------------进货--------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;

    }
    //库存查询操作
    void shop_num_ask() {//库存数量查询
        cout << "---------------------------------库存数量查询--------------------------------------------" << endl;
        cout << "The quantity in stock is：" << shop_num << endl;
        cout << "---------------------------------库存数量查询--------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
    //资金查询操作
    void shop_money_ask() {//查询资金
        cout << "---------------------------------查询资金--------------------------------------------" << endl;
        cout << "The shop2 Current funding is:" << money << endl;
        cout << "---------------------------------查询资金--------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
    //接受订单（订单生成）
    void accept_order() {//接受订单
        srand((int)time(0));
        
        order_now = rand() % 10 + 1;
        
        init_order = init_order + order_now;
       

    }
    //发货
    void send_order() {//发货
        
        money = money + sale_money * init_order - pass * init_order;
        
        shop_num = shop_num - init_order;
        init_order = 0;
        
    }
    //退货
    void return_order() {//接受退货

        goods_return = init_order;
        
        

        //cout << "the goods of returns:" << goods_return;
    }
    //接受退货
    void accept_return_order() {//接收退货
       

        money = money - goods_return * order_money - goods_return * afford_pass;


        goods_return = 0;
        
    }
    //破产判定
    int none_money() {
        if (money <= 0)
        {
            cout << "你的店铺已破产，已经转让！" << endl;
            return 1;
        }
    }
    //转让操作
    Shop2(const Shop2& Shop) {
        shop_num = Shop.shop_num;
        money = Shop.money;
        init_order = Shop.init_order;
        order_money = Shop.order_money;
        goods_return = Shop.goods_return;
        order_now = Shop.order_now;
        stock = Shop.stock;
        sale_money = Shop.sale_money;
        afford_pass = Shop.afford_pass;
        pass = Shop.pass;
    }
private:
    int shop_num;//初始货物数、库存数量
    int money;//初始金额
    int init_order;//初始订单
    int order_money;//买卖金额
    int goods_return;//退单数量
    int order_now;//随机订单数生成
    int stock;//进货数量
    int sale_money;//每一单售价
    int afford_pass;//退货承担运费
    int pass;//运费
};
class Shop3
{
public:
    //定义初始变量 ，初始金钱，初始库存，每一单进货，初始订单数，售价,退货承担运费，运费
    Shop3(float money_1, float goods, float in_goods, float init_order_1, float sale, float afford_pass_1, float pass_1, float goods_return_1, float order_now_1, float stock_1) {
        //定义初始货物数、库存数量
        shop_num = goods;

        //定义初始金额
        money = money_1;
        //定义买卖金额(每一单金额)
        order_money = in_goods;

        //初始订单数
        init_order = init_order_1;
        //售价
        sale_money = sale;
        //退货承担运费
        afford_pass = afford_pass_1;
        //运费
        pass = pass_1;
        goods_return = goods_return_1;
        order_now = order_now_1;
        stock = stock_1;


    }
    //货物小于等于20进行自动补货操作
    void auto_goods() {
        if (shop_num <= 20) {
            cout << "！！！！！！！！！！！！！！！！！！！！警告！！！！！！！！！！！！！！！！！！！！！！！！！！！" << endl;
            cout << "Automatic replenishment will be carried out when it detects that you have insufficient goods" << endl;
            shop_num = shop_num + 200;
            money = money - 200 * order_money;
            cout << "The number of automatic feeds is:" << shop_num << endl;
            cout << "Deducted your money:" << 200 * order_money << endl;
            cout << "！！！！！！！！！！！！！！！！！！！！警告！！！！！！！！！！！！！！！！！！！！！！！！！！！" << endl;
        }
    }
    //进货操作
    void in_goods() {//进货
        cout << "---------------------------------进货--------------------------------------------" << endl;
        cout << "Select your stocking quantity";
        cin >> stock;
        cout << endl;
        cout << "Your incoming quantity is.:" << shop_num << endl;
        cout << "Deducted your money:" << shop_num * order_money << endl;
        cout << "---------------------------------进货--------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;

    }
    //库存查询操作
    void shop_num_ask() {//库存数量查询
        cout << "---------------------------------库存数量查询--------------------------------------------" << endl;
        cout << "The quantity in stock is：" << shop_num << endl;
        cout << "---------------------------------库存数量查询--------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
    //资金查询操作
    void shop_money_ask() {//查询资金
        cout << "---------------------------------查询资金--------------------------------------------" << endl;
        cout << "The shop3 Current funding is:" << money << endl;
        cout << "---------------------------------查询资金--------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
    //接受订单（订单生成）
    void accept_order() {//接受订单
        srand((int)time(0));
       
        order_now = rand() % 10 + 1;
       
        init_order = init_order + order_now;
        
    }
    //发货
    void send_order() {//发货
       
        money = money + sale_money * init_order - pass * init_order;

        shop_num = shop_num - init_order;
        init_order = 0;
        
    }
    //退货
    void return_order() {//接受退货
       
        goods_return = init_order;
       
       
    }
    //接受退货
    void accept_return_order() {//接收退货
       
      
        money = money - goods_return * order_money - goods_return * afford_pass;
       
        goods_return = 0;
       
    }
    //破产判定
    int none_money() {
        if (money <= 0)
        {
            cout << "你的店铺已破产，已经转让！" << endl;
            return 1;
        }
    }
    //转让操作
    Shop3(const Shop3& Shop) {
        shop_num = Shop.shop_num;
        money = Shop.money;
        init_order = Shop.init_order;
        order_money = Shop.order_money;
        goods_return = Shop.goods_return;
        order_now = Shop.order_now;
        stock = Shop.stock;
        sale_money = Shop.sale_money;
        afford_pass = Shop.afford_pass;
        pass = Shop.pass;
    }
private:
    float shop_num;//初始货物数、库存数量
    float money;//初始金额
    float init_order;//初始订单
    float order_money;//买卖金额
    float goods_return;//退单数量
    float order_now;//随机订单数生成
    float stock;//进货数量
    float sale_money;//每一单售价
    float afford_pass;//退货承担运费
    float pass;//运费
};

int main(void)

{
    srand(time(NULL));
    int rand_num_shop1;
    int rand_num_shop2;
    int rand_num_shop3;
    Shop1 shop_1(100000, 100, 6, 0, 10, 6, 3, 0, 0, 0);
    Shop2 shop_2(100000, 100, 6, 0, 9, 6, 3, 0, 0, 0);
    Shop3 shop_3(100000, 100, 6, 0, 9.5, 6, 3, 0, 0, 0);
    //店铺1
    for (int i = 0; i < n; i++)
    {
        shop_1.auto_goods();
        rand_num_shop1=rand() % 100 + 1;
        //生成订单
        shop_1.accept_order();
        if (rand_num_shop1 <=5)
        {
            //退货操作
            shop_1.return_order();
            shop_1.accept_return_order();

        }
        //发货赚钱钱
        shop_1.send_order();
    }
    //店铺2
    for (int i = 0; i < n; i++)
    {
        shop_2.auto_goods();
        rand_num_shop2 = rand() % 100 + 1;
        //生成订单
        shop_2.accept_order();
        if (rand_num_shop2 <= 2)
        {
            //退货操作
            shop_2.return_order();
            shop_2.accept_return_order();

        }
        //发货赚钱钱
        shop_2.send_order();
    }
    //店铺3
    for (int i = 0; i < n; i++)
    {
        shop_3.auto_goods();
        rand_num_shop3 = rand() % 100 + 1;
        //生成订单
        shop_3.accept_order();
        if (rand_num_shop3 <= 3)
        {
            //退货操作
            shop_3.return_order();
            shop_3.accept_return_order();

        }
        //发货赚钱钱
        shop_3.send_order();
    }
    shop_1.shop_money_ask();
    shop_2.shop_money_ask();
    shop_3.shop_money_ask();
}