//
// Copyright (c) 2022-2022 the rbfx project.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#pragma once

#include "../Core/Signal.h"
#include "../Graphics/Animation.h"
#include "../SystemUI/BaseWidget.h"
#include "../SystemUI/Widgets.h"

namespace Urho3D
{

    /// SystemUI widget to preview texture.
    class URHO3D_API Texture2DWidget : public BaseWidget
    {
        URHO3D_OBJECT( Texture2DWidget, BaseWidget )
    public:
        Texture2DWidget( Context* context, Texture2D* resource );
        ~Texture2DWidget() override;

        void RenderContent() override;

        Texture2D* GetTexture2D() const
        {
            return resource_;
        }
    private:
        SharedPtr< Texture2D > resource_;
    };

}  // namespace Urho3D
