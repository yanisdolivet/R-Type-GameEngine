/*
** EPITECH PROJECT, 2025
** R-Type
** File description:
** EngineSubscriptions.hpp
*/

#pragma once

#include <iostream>

#include "Collider.hpp"
#include "Controllable.hpp"
#include "Core.hpp"
#include "GameEngineEvents.hpp"
#include "IndexedZipper.hpp"
#include "SceneManager.hpp"

namespace Common
{
    /**
     * @brief Initialize engine event subscriptions
     *
     * @param engine
     */
    void initEngineSubscriptions(GameEngine::Core& engine, SceneManager& sceneManager);

} // namespace Common