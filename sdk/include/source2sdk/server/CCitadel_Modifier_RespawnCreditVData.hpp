#pragma once
#include "source2sdk/client/ERejuvenatorRespawnMechanic.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x688
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_RespawnCreditVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Respawn Settings"
        client::ERejuvenatorRespawnMechanic m_eRespawnMechanic; // 0x658        
        // metadata: MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_FixedDelay"
        // metadata: MPropertyDescription "Respawn time is set to this fixed duration after dying."
        float m_flRespawnDelay; // 0x65c        
        // metadata: MPropertyStartGroup "Buff Values"
        float m_flBonusClipSize; // 0x660        
        float m_flBonusFirerate; // 0x664        
        float m_flBonusHealth; // 0x668        
        float m_flBonusMoveSpeedMeterPerSecond; // 0x66c        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sExpireSound; // 0x670        
        // metadata: MPropertyStartGroup "UI Messages"
        int32_t m_iMaxMessages; // 0x680        
        float m_flMessageInterval; // 0x684        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_RespawnCreditVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_RespawnCreditVData) == 0x688);
};
