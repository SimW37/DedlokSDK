#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    class C_CitadelPlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x600
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_nActivateTime"
    #pragma pack(push, 1)
    struct CCitadelAbilityBeam_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        entity2::GameTime_t m_nActivateTime; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkChangeCallback "OnBeamAnglesChanged"
        QAngle m_angBeamAngles; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x84]; // 0x1c
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnBeamAimPosChanged"
        Vector m_vBeamAimPos; // 0xa0        
        [[maybe_unused]] std::uint8_t pad_0xac[0x84]; // 0xac
        bool m_bNeedsBeamReset; // 0x130        
        [[maybe_unused]] std::uint8_t pad_0x131[0x3]; // 0x131
        // m_hShooter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hShooter;
        char m_hShooter[0x4]; // 0x134        
        // m_hPlayerShooter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelPlayerPawn> m_hPlayerShooter;
        char m_hPlayerShooter[0x4]; // 0x138        
        [[maybe_unused]] std::uint8_t pad_0x13c[0x4bc]; // 0x13c
        bool m_bEnforceLOSToShootPosition; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5f9[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCitadelAbilityBeam_t, m_nActivateTime) == 0x8);
    static_assert(offsetof(CCitadelAbilityBeam_t, m_angBeamAngles) == 0x10);
    static_assert(offsetof(CCitadelAbilityBeam_t, m_vBeamAimPos) == 0xa0);
    static_assert(offsetof(CCitadelAbilityBeam_t, m_bNeedsBeamReset) == 0x130);
    static_assert(offsetof(CCitadelAbilityBeam_t, m_hShooter) == 0x134);
    static_assert(offsetof(CCitadelAbilityBeam_t, m_hPlayerShooter) == 0x138);
    static_assert(offsetof(CCitadelAbilityBeam_t, m_bEnforceLOSToShootPosition) == 0x5f8);
    
    static_assert(sizeof(CCitadelAbilityBeam_t) == 0x600);
};
