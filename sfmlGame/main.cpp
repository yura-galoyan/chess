#include "Factories/ChessPrototypeFactory.hpp"
#include "RegularBoardModel.hpp"
#include "RegularBoardView.hpp"
#include "Game.hpp"


int main(){

    Game game;

    
    auto model = game.createBoard( std::make_unique<ChessPrototypeFactory>( 
        std::make_unique<Pawn>(),std::make_unique<Queen>(), std::make_unique<Rook>(),
        std::make_unique<Knight>(), std::make_unique<Bishop>(),std::make_unique<King>(),
        std::make_unique<RegularBoardModel>() ));

    std::unique_ptr<RegularBoardView> view;
    view->setModel(model.get());


    game.setView(view.get());


}