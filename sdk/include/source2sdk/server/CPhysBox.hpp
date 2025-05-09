#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBreakable.hpp"
#include "source2sdk/server/HoverPoseFlags_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBasePlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9c0
    // Has VTable
    #pragma pack(push, 1)
    class CPhysBox : public server::CBreakable
    {
    public:
        int32_t m_damageType; // 0x8a8        
        int32_t m_damageToEnableMotion; // 0x8ac        
        float m_flForceToEnableMotion; // 0x8b0        
        Vector m_vHoverPosePosition; // 0x8b4        
        QAngle m_angHoverPoseAngles; // 0x8c0        
        bool m_bNotSolidToWorld; // 0x8cc        
        bool m_bEnableUseOutput; // 0x8cd        
        server::HoverPoseFlags_t m_nHoverPoseFlags; // 0x8ce        
        [[maybe_unused]] std::uint8_t pad_0x8cf[0x1]; // 0x8cf
        float m_flTouchOutputPerEntityDelay; // 0x8d0        
        [[maybe_unused]] std::uint8_t pad_0x8d4[0x4]; // 0x8d4
        entity2::CEntityIOOutput m_OnDamaged; // 0x8d8        
        entity2::CEntityIOOutput m_OnAwakened; // 0x900        
        entity2::CEntityIOOutput m_OnMotionEnabled; // 0x928        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0x950        
        entity2::CEntityIOOutput m_OnStartTouch; // 0x978        
        // m_hCarryingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hCarryingPlayer;
        char m_hCarryingPlayer[0x4]; // 0x9a0        
        [[maybe_unused]] std::uint8_t pad_0x9a4[0x1c];
        
        // Datamap fields:
        // QAngle preferredcarryangles; // 0x7fffffff
        // void InputWake; // 0x0
        // void InputSleep; // 0x0
        // void InputEnableMotion; // 0x0
        // void InputDisableMotion; // 0x0
        // void InputForceDrop; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysBox because it is not a standard-layout class
    static_assert(sizeof(CPhysBox) == 0x9c0);
};
