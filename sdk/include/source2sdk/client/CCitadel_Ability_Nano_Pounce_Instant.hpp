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
    // Size: 0xef0
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
        [[maybe_unused]] std::uint8_t pad_0xc50[0x230]; // 0xc50
        // metadata: MNetworkEnable
        bool m_bActive; // 0xe80        
        [[maybe_unused]] std::uint8_t pad_0xe81[0x3]; // 0xe81
        // metadata: MNetworkEnable
        // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hCurrentTarget;
        char m_hCurrentTarget[0x4]; // 0xe84        
        // metadata: MNetworkEnable
        // m_hLastCastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastCastTarget;
        char m_hLastCastTarget[0x4]; // 0xe88        
        // metadata: MNetworkEnable
        Vector m_vStartPosition; // 0xe8c        
        // metadata: MNetworkEnable
        Vector m_vDeparturePosition; // 0xe98        
        [[maybe_unused]] std::uint8_t pad_0xea4[0x4]; // 0xea4
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flDepartureTime; // 0xea8        
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flArrivalTime; // 0xec0        
        Vector m_vLastKnownSafePos; // 0xed8        
        [[maybe_unused]] std::uint8_t pad_0xee4[0x2]; // 0xee4
        // metadata: MNetworkEnable
        bool m_bIsFirstCastCompleted; // 0xee6        
        [[maybe_unused]] std::uint8_t pad_0xee7[0x1]; // 0xee7
        // metadata: MNetworkEnable
        entity2::GameTime_t m_tDoubleCastWindow; // 0xee8        
        [[maybe_unused]] std::uint8_t pad_0xeec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Nano_Pounce_Instant because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Nano_Pounce_Instant) == 0xef0);
};
