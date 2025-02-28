#pragma once
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CFishPool;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb98
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_nModelIndex"
    // static metadata: MNetworkIncludeByName "m_lifeState"
    // static metadata: MNetworkVarNames "float32 m_x"
    // static metadata: MNetworkVarNames "float32 m_y"
    // static metadata: MNetworkVarNames "float32 m_z"
    // static metadata: MNetworkVarNames "float32 m_angle"
    // static metadata: MNetworkVarNames "Vector m_poolOrigin"
    // static metadata: MNetworkVarNames "float32 m_waterLevel"
    #pragma pack(push, 1)
    class CFish : public server::CBaseAnimGraph
    {
    public:
        // m_pool has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CFishPool> m_pool;
        char m_pool[0x4]; // 0xa90        
        uint32_t m_id; // 0xa94        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_x"
        float m_x; // 0xa98        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_y"
        float m_y; // 0xa9c        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "fish_pos_z"
        float m_z; // 0xaa0        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "angle_normalize_positive"
        // metadata: MNetworkBitCount "7"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "360,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_angle; // 0xaa4        
        float m_angleChange; // 0xaa8        
        Vector m_forward; // 0xaac        
        Vector m_perp; // 0xab8        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_poolOrigin; // 0xac4        
        // metadata: MNetworkEnable
        float m_waterLevel; // 0xad0        
        float m_speed; // 0xad4        
        float m_desiredSpeed; // 0xad8        
        float m_calmSpeed; // 0xadc        
        float m_panicSpeed; // 0xae0        
        float m_avoidRange; // 0xae4        
        server::CountdownTimer m_turnTimer; // 0xae8        
        bool m_turnClockwise; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb01[0x7]; // 0xb01
        server::CountdownTimer m_goTimer; // 0xb08        
        server::CountdownTimer m_moveTimer; // 0xb20        
        server::CountdownTimer m_panicTimer; // 0xb38        
        server::CountdownTimer m_disperseTimer; // 0xb50        
        server::CountdownTimer m_proximityTimer; // 0xb68        
        // m_visible has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CFish*> m_visible;
        char m_visible[0x18]; // 0xb80        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFish because it is not a standard-layout class
    static_assert(sizeof(CFish) == 0xb98);
};
