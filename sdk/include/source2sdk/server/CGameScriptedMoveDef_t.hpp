#pragma once
#include "source2sdk/client/ForcedCrouchState_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x30
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CGameScriptedMoveDef_t
    {
    public:
        Vector m_vDestOffset; // 0x0        
        // m_hDestEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hDestEntity;
        char m_hDestEntity[0x4]; // 0xc        
        QAngle m_angDest; // 0x10        
        float m_flDuration; // 0x1c        
        float m_flAngRate; // 0x20        
        float m_flMoveSpeed; // 0x24        
        bool m_bAimDisabled; // 0x28        
        bool m_bIgnoreRotation; // 0x29        
        [[maybe_unused]] std::uint8_t pad_0x2a[0x2]; // 0x2a
        client::ForcedCrouchState_t m_nForcedCrouchState; // 0x2c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CGameScriptedMoveDef_t, m_vDestOffset) == 0x0);
    static_assert(offsetof(CGameScriptedMoveDef_t, m_hDestEntity) == 0xc);
    static_assert(offsetof(CGameScriptedMoveDef_t, m_angDest) == 0x10);
    static_assert(offsetof(CGameScriptedMoveDef_t, m_flDuration) == 0x1c);
    static_assert(offsetof(CGameScriptedMoveDef_t, m_flAngRate) == 0x20);
    static_assert(offsetof(CGameScriptedMoveDef_t, m_flMoveSpeed) == 0x24);
    static_assert(offsetof(CGameScriptedMoveDef_t, m_bAimDisabled) == 0x28);
    static_assert(offsetof(CGameScriptedMoveDef_t, m_bIgnoreRotation) == 0x29);
    static_assert(offsetof(CGameScriptedMoveDef_t, m_nForcedCrouchState) == 0x2c);
    
    static_assert(sizeof(CGameScriptedMoveDef_t) == 0x30);
};
