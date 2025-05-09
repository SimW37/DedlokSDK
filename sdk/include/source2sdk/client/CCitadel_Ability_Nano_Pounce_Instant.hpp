#pragma once
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x10b0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "EHANDLE m_hCurrentTarget"
    // static metadata: MNetworkVarNames "EHANDLE m_hLastCastTarget"
    // static metadata: MNetworkVarNames "Vector m_vStartPosition"
    // static metadata: MNetworkVarNames "Vector m_vDeparturePosition"
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
    // static metadata: MNetworkVarNames "bool m_bIsFirstCastCompleted"
    // static metadata: MNetworkVarNames "GameTime_t m_tDoubleCastWindow"
    #pragma pack(push, 1)
    class CCitadel_Ability_Nano_Pounce_Instant : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc0[0x280]; // 0xdc0
        // metadata: MNetworkEnable
        bool m_bActive; // 0x1040        
        [[maybe_unused]] std::uint8_t pad_0x1041[0x3]; // 0x1041
        // metadata: MNetworkEnable
        // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hCurrentTarget;
        char m_hCurrentTarget[0x4]; // 0x1044        
        // metadata: MNetworkEnable
        // m_hLastCastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastCastTarget;
        char m_hLastCastTarget[0x4]; // 0x1048        
        // metadata: MNetworkEnable
        Vector m_vStartPosition; // 0x104c        
        // metadata: MNetworkEnable
        Vector m_vDeparturePosition; // 0x1058        
        [[maybe_unused]] std::uint8_t pad_0x1064[0x4]; // 0x1064
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flDepartureTime; // 0x1068        
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flArrivalTime; // 0x1080        
        Vector m_vLastKnownSafePos; // 0x1098        
        [[maybe_unused]] std::uint8_t pad_0x10a4[0x2]; // 0x10a4
        // metadata: MNetworkEnable
        bool m_bIsFirstCastCompleted; // 0x10a6        
        [[maybe_unused]] std::uint8_t pad_0x10a7[0x1]; // 0x10a7
        // metadata: MNetworkEnable
        entity2::GameTime_t m_tDoubleCastWindow; // 0x10a8        
        [[maybe_unused]] std::uint8_t pad_0x10ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Nano_Pounce_Instant because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Nano_Pounce_Instant) == 0x10b0);
};
