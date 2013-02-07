// Copyright (c) 2013 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: http://opensource.org/licenses/AFL-3.0

#ifndef AABB_H
#define AABB_H

#include <SFML/Graphics.hpp>

namespace ssvsc
{
	class AABB
	{
		private:
			sf::Vector2i position, halfSize;

		public:
			AABB(sf::Vector2i mPosition, sf::Vector2i mHalfSize);

			void move(sf::Vector2i mOffset);

			void setPosition(sf::Vector2i mPosition);
			void setHalfSize(sf::Vector2i mHalfSize);
			sf::Vector2i getPosition() const;
			int getX() const;
			int getY() const;
			int getLeft() const;
			int getRight() const;
			int getTop() const;
			int getBottom() const;
			int getHalfWidth() const;
			int getHalfHeight() const;
			int getWidth() const;
			int getHeight() const;

			bool operator==(const AABB& mOther) const;
	};
}

#endif // AABB_H
