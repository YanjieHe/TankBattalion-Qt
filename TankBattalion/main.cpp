#include <Game.hpp>
#include <QApplication>
int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    Game game;
    game.show();
    return app.exec();
}
