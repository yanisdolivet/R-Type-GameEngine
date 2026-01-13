/*
** EPITECH PROJECT, 2025
** R-Type
** File description:
** DrawableComponent
*/

#pragma once

#include "EngineMath.hpp"
#include "raylib.h"

namespace Components
{
    class DrawableComponent
    {
        public:
            DrawableComponent();
            DrawableComponent(GameEngine::Math::Rectangle source_rect, bool is_visible, GameEngine::Math::Vector2 scale,
                              int layer = 0);
            ~DrawableComponent();

            GameEngine::Math::Rectangle getSourceRect() const;
            bool isVisible() const;
            GameEngine::Math::Vector2 getScale() const;
            int getLayer() const;

            void changeVisibility(bool visible);
            void setRectange(GameEngine::Math::Rectangle new_source_rect);
            void setScale(GameEngine::Math::Vector2 scale);
            void setOrigin(float x, float y);
            void setLayer(int layer);

        protected:
        private:
            GameEngine::Math::Rectangle _source_rect;
            bool _is_visible;
            GameEngine::Math::Vector2 _scale = {1.0, 1.0};
            int _layer = 0; // Lower values render first (background), higher values render last (foreground)
    };

} // namespace Components
