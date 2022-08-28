#include <SFML/Graphics.hpp> 
#include"Application.h"
#include"Unity.h"

#include<list>
#include<stack>
using namespace std;

int main()
{
	std::list<int> stack;

	Application app;
	app.Run();


	//khoi tao anh va Animation cho charactor 
	////Character character; 
	//sf::Texture tAni_current;
	//tAni_current.loadFromFile("../Texture/ninja_stand.png");
	//sf::Texture tAni_runRight;
	//tAni_runRight.loadFromFile("../Texture/ninja_right.png");
	//sf::Texture tAni_runLeft;
	//tAni_runLeft.loadFromFile("../Texture/ninja_left.png");
	//sf::Texture tAni_runDown;
	//tAni_runDown.loadFromFile("../Texture/ninja_down.png");


	//sf::Texture tBoss_moveRight;
	//tBoss_moveRight.loadFromFile("../Texture/boss_moveRight.png");
	//sf::Texture tBoss_moveLeft;
	//tBoss_moveLeft.loadFromFile("../Texture/boss_moveLeft.png");

	////Animation ani;
	////ani.Init(tAni_current, sf::Vector2i(6, 1), 0.1f);

	////Animation boss;
	////boss.Init(tBoss_moveRight, sf::Vector2i(6, 1), 0.1f);
	//int x_Boss = screenWidth - 200;
	////boss.setTexture(tBoss_moveRight);
	//boss.setScale(1.5f, 1.5f);
	//boss.setPosition(x_Boss, MAX_Y_NINJA - 200);
	//boss.getScale();
	//int derection = 1;

	////	ani_Cur.Init(tAni_current, sf::Vector2i(4, 1), 0.1f);
	///*ani.setTexture(tAni_current);
	//int x_C = WINDOW_WIDTH / 2;
	//int y_C = MAX_Y_NINJA - 100;*/
	//ani.setScale(0.7f, 0.7f);
	//ani.setPosition(x_C, y_C);
	//ani.getScale();

	////character run 

	////lay thoi gian 
	//sf::Clock clock;
	//float deltaTime = 0.f;
	////khoi tao tuong 
	////Wall wall;
	////int xW = wall.GetX();
	////int yW = wall.GetY();
	////int x = 0;

	////khoi tao anh tuong va background 
	////sf::Texture tBackGround, tWall;
	////tBackGround.loadFromFile("../Texture/Background.png");
	////tWall.loadFromFile("../Texture/wall.png");



	////khoi tao noi chua 
	//sf::Sprite spriteBg;
	//sf::Sprite spriteWall;

	//chay chuong trinh 

	return 0;
}