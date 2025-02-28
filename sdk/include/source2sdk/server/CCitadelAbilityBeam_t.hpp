#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CCitadelPlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x4f0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_nActivateTime"
    // static metadata: MNetworkVarNames "QAngle m_angBeamAngles"
    // static metadata: MNetworkVarNames "Vector m_vBeamAimPos"
    #pragma pack(push, 1)
    struct CCitadelAbilityBeam_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        entity2::GameTime_t m_nActivateTime; // 0x8        
        // metadata: MNetworkEnable
        QAngle m_angBeamAngles; // 0xc        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkPriority "32"
        Vector m_vBeamAimPos; // 0x18        
        // m_hShooter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hShooter;
        char m_hShooter[0x4]; // 0x24        
        // m_hPlayerShooter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelPlayerPawn> m_hPlayerShooter;
        char m_hPlayerShooter[0x4]; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4bc]; // 0x2c
        bool m_bEnforceLOSToShootPosition; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4e9[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCitadelAbilityBeam_t, m_nActivateTime) == 0x8);
    static_assert(offsetof(CCitadelAbilityBeam_t, m_angBeamAngles) == 0xc);
    static_assert(offsetof(CCitadelAbilityBeam_t, m_vBeamAimPos) == 0x18);
    static_assert(offsetof(CCitadelAbilityBeam_t, m_hShooter) == 0x24);
    static_assert(offsetof(CCitadelAbilityBeam_t, m_hPlayerShooter) == 0x28);
    static_assert(offsetof(CCitadelAbilityBeam_t, m_bEnforceLOSToShootPosition) == 0x4e8);
    
    static_assert(sizeof(CCitadelAbilityBeam_t) == 0x4f0);
};
