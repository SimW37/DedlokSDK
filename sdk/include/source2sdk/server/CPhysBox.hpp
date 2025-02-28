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
    // Size: 0x9a8
    // Has VTable
    #pragma pack(push, 1)
    class CPhysBox : public server::CBreakable
    {
    public:
        int32_t m_damageType; // 0x890        
        int32_t m_damageToEnableMotion; // 0x894        
        float m_flForceToEnableMotion; // 0x898        
        Vector m_vHoverPosePosition; // 0x89c        
        QAngle m_angHoverPoseAngles; // 0x8a8        
        bool m_bNotSolidToWorld; // 0x8b4        
        bool m_bEnableUseOutput; // 0x8b5        
        server::HoverPoseFlags_t m_nHoverPoseFlags; // 0x8b6        
        [[maybe_unused]] std::uint8_t pad_0x8b7[0x1]; // 0x8b7
        float m_flTouchOutputPerEntityDelay; // 0x8b8        
        [[maybe_unused]] std::uint8_t pad_0x8bc[0x4]; // 0x8bc
        entity2::CEntityIOOutput m_OnDamaged; // 0x8c0        
        entity2::CEntityIOOutput m_OnAwakened; // 0x8e8        
        entity2::CEntityIOOutput m_OnMotionEnabled; // 0x910        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0x938        
        entity2::CEntityIOOutput m_OnStartTouch; // 0x960        
        // m_hCarryingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hCarryingPlayer;
        char m_hCarryingPlayer[0x4]; // 0x988        
        [[maybe_unused]] std::uint8_t pad_0x98c[0x1c];
        
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
    static_assert(sizeof(CPhysBox) == 0x9a8);
};
