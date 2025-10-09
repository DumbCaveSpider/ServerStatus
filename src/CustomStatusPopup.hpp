#pragma once

#include <Geode/Geode.hpp>
#include <vector>
#include <Geode/ui/ScrollLayer.hpp>

using namespace geode::prelude;

class StatusNode;

class CustomStatusPopup : public Popup<>
{
protected:
    bool setup() override;
    void onAdd(CCObject *sender);
    void refreshLayout();

    ScrollLayer *m_scrollLayer = nullptr;
    CCNode *m_scrollContent = nullptr;
    std::vector<StatusNode *> m_nodes;

public:
    static CustomStatusPopup *create();
};
