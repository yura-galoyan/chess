#include "Application.hpp"

#include "Factories/PiecePrototypeFactory.hpp"
// #include "Factories/SfmlSystemFactory.hpp"

#include "Controllers/LoadingScreenController.hpp"
#include "States/LoadingScreenState.hpp"
#include "States/iGameState.hpp"
#include "Views/iView.hpp"

Application::Application(){




    // std::unique_ptr<PiecePrototypeFactory> pieceFactory = std::make_unique<PiecePrototypeFactory>(
    //     std::make_unique<Pawn>(),std::make_unique<Queen>(), std::make_unique<Rook>(),
    //     std::make_unique<Knight>(), std::make_unique<Bishop>(),std::make_unique<King>()
    // );

    // std::unique_ptr<SfmlSystemFactory> systemFactory = std::make_unique<SfmlSystemFactory>(); 
    /// TODO: Maybe use factory here
    m_gameState = std::make_unique<LoadingScreenState>(this,std::make_unique<TextureHolder>(),m_window, m_eventPoller);

    // game.createBoard(std::move(pieceFactory), std::move(systemFactory));
}

int Application::exec()
{
   m_gameState->start(); 
}

void Application::setState(std::unique_ptr<iGameState> state)
{
    m_gameState = std::move(state);
}
