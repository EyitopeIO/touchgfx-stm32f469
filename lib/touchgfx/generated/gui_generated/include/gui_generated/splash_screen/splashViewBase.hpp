/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SPLASHVIEWBASE_HPP
#define SPLASHVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/splash_screen/splashPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>

class splashViewBase : public touchgfx::View<splashPresenter>
{
public:
    splashViewBase();
    virtual ~splashViewBase() {}
    virtual void setupScreen();
    virtual void handleTickEvent();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image canva;

private:

    /*
     * Delay Variable Declarations
     */
    static const uint16_t SPLASHSCREEN_UP_DURATION = 150;
    uint16_t splashscreen_upCounter;

};

#endif // SPLASHVIEWBASE_HPP
