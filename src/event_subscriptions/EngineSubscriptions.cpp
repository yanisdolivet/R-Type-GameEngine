/*
** EPITECH PROJECT, 2025
** R-Type
** File description:
** EngineSubscriptions.cpp
*/

#include "EngineSubscriptions.hpp"

void Common::initEngineSubscriptions(GameEngine::Core& engine, SceneManager& sceneManager)
{
    // Subscribe to the EventGameExit to stop the engine
    engine.getRegistry().subscribe<EventGameExit>([&engine](EventGameExit const&) {
        engine.stop();
    });

    // Subscribe to EventChangeScene to change scenes via the SceneManager
    engine.getRegistry().subscribe<EventChangeScene>([&sceneManager](EventChangeScene const& event) {
        sceneManager.changeScene(event.sceneName);
    });
}