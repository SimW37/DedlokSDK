#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xda0
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_nModelIndex"
    // static metadata: MNetworkIncludeByName "m_lifeState"
    // static metadata: MNetworkVarNames "Vector m_poolOrigin"
    // static metadata: MNetworkVarNames "float32 m_waterLevel"
    // static metadata: MNetworkVarNames "float32 m_x"
    // static metadata: MNetworkVarNames "float32 m_y"
    // static metadata: MNetworkVarNames "float32 m_z"
    // static metadata: MNetworkVarNames "float32 m_angle"
    #pragma pack(push, 1)
    class C_Fish : public client::CBaseAnimGraph
    {
    public:
        Vector m_pos; // 0xcb0        
        Vector m_vel; // 0xcbc        
        QAngle m_angles; // 0xcc8        
        int32_t m_localLifeState; // 0xcd4        
        float m_deathDepth; // 0xcd8        
        float m_deathAngle; // 0xcdc        
        float m_buoyancy; // 0xce0        
        [[maybe_unused]] std::uint8_t pad_0xce4[0x4]; // 0xce4
        client::CountdownTimer m_wiggleTimer; // 0xce8        
        float m_wigglePhase; // 0xd00        
        float m_wiggleRate; // 0xd04        
        Vector m_actualPos; // 0xd08        
        QAngle m_actualAngles; // 0xd14        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_poolOrigin; // 0xd20        
        // metadata: MNetworkEnable
        float m_waterLevel; // 0xd2c        
        bool m_gotUpdate; // 0xd30        
        [[maybe_unused]] std::uint8_t pad_0xd31[0x3]; // 0xd31
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_x"
        // metadata: MNetworkChangeCallback "OnPosChanged"
        float m_x; // 0xd34        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_y"
        // metadata: MNetworkChangeCallback "OnPosChanged"
        float m_y; // 0xd38        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_z"
        // metadata: MNetworkChangeCallback "OnPosChanged"
        float m_z; // 0xd3c        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "angle_normalize_positive"
        // metadata: MNetworkBitCount "7"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "360,000000"
        // metadata: MNetworkEncodeFlags "1"
        // metadata: MNetworkChangeCallback "OnAngChanged"
        float m_angle; // 0xd40        
        float m_errorHistory[20]; // 0xd44        
        int32_t m_errorHistoryIndex; // 0xd94        
        int32_t m_errorHistoryCount; // 0xd98        
        float m_averageError; // 0xd9c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Fish because it is not a standard-layout class
    static_assert(sizeof(C_Fish) == 0xda0);
};
