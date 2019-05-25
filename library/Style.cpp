/*
    Borealis, a Nintendo Switch UI Library
    Copyright (C) 2019  natinusala

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <Style.hpp>

static Style styleAccurate = {
    .SettingsFrame = {
        .headerHeight      = 88,
        .footerHeight      = 73,

        .separatorSpacing  = 30,

        .titleSize         = 30,
        .titleStart        = 130
    },

    .Highlight = {
        .strokeWidth    = 5,
        .cornerRadius   = 0.5f,

        .shadowWidth    = 2,
        .shadowOffset   = 10,
        .shadowFeather  = 10,
        .shadowOpacity  = 128
    },

    .Background = {
        .sidebarBorderHeight = 16
    }
};

static Style *currentStyle = &styleAccurate;

void setStyle(StyleEnum style)
{
    switch (style)
    {
        case STYLE_ACCURATE:
            currentStyle = &styleAccurate;
    }
}

Style *getStyle()
{
    return currentStyle;
}