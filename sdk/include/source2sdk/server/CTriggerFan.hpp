#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
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
    class CInfoFan;
};

namespace source2sdk::server
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xa40
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vFanOrigin"
    // static metadata: MNetworkVarNames "Vector m_vFanOriginOffset"
    // static metadata: MNetworkVarNames "Vector m_vFanEnd"
    // static metadata: MNetworkVarNames "Vector m_vNoiseDirectionTarget"
    // static metadata: MNetworkVarNames "Vector m_vDirection"
    // static metadata: MNetworkVarNames "bool m_bPushTowardsInfoTarget"
    // static metadata: MNetworkVarNames "bool m_bPushAwayFromInfoTarget"
    // static metadata: MNetworkVarNames "Quaternion m_qNoiseDelta"
    // static metadata: MNetworkVarNames "CHandle< CInfoFan> m_hInfoFan"
    // static metadata: MNetworkVarNames "float m_flForce"
    // static metadata: MNetworkVarNames "bool m_bFalloff"
    // static metadata: MNetworkVarNames "CountdownTimer m_RampTimer"
    #pragma pack(push, 1)
    class CTriggerFan : public server::CBaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vFanOrigin; // 0x990        
        // metadata: MNetworkEnable
        Vector m_vFanOriginOffset; // 0x99c        
        // metadata: MNetworkEnable
        Vector m_vFanEnd; // 0x9a8        
        // metadata: MNetworkEnable
        Vector m_vNoiseDirectionTarget; // 0x9b4        
        // metadata: MNetworkEnable
        Vector m_vDirection; // 0x9c0        
        // metadata: MNetworkEnable
        bool m_bPushTowardsInfoTarget; // 0x9cc        
        // metadata: MNetworkEnable
        bool m_bPushAwayFromInfoTarget; // 0x9cd        
        [[maybe_unused]] std::uint8_t pad_0x9ce[0x2]; // 0x9ce
        // metadata: MNetworkEnable
        Quaternion m_qNoiseDelta; // 0x9d0        
        // metadata: MNetworkEnable
        // m_hInfoFan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CInfoFan> m_hInfoFan;
        char m_hInfoFan[0x4]; // 0x9e0        
        // metadata: MNetworkEnable
        float m_flForce; // 0x9e4        
        // metadata: MNetworkEnable
        bool m_bFalloff; // 0x9e8        
        [[maybe_unused]] std::uint8_t pad_0x9e9[0x7]; // 0x9e9
        // metadata: MNetworkEnable
        server::CountdownTimer m_RampTimer; // 0x9f0        
        CUtlSymbolLarge m_iszInfoFan; // 0xa08        
        float m_flRopeForceScale; // 0xa10        
        float m_flParticleForceScale; // 0xa14        
        float m_flPlayerForce; // 0xa18        
        bool m_bPlayerWindblock; // 0xa1c        
        [[maybe_unused]] std::uint8_t pad_0xa1d[0x3]; // 0xa1d
        float m_flNPCForce; // 0xa20        
        float m_flRampTime; // 0xa24        
        float m_fNoiseDegrees; // 0xa28        
        float m_fNoiseSpeed; // 0xa2c        
        bool m_bPushPlayer; // 0xa30        
        bool m_bRampDown; // 0xa31        
        [[maybe_unused]] std::uint8_t pad_0xa32[0x2]; // 0xa32
        int32_t m_nManagerFanIdx; // 0xa34        
        [[maybe_unused]] std::uint8_t pad_0xa38[0x8];
        
        // Datamap fields:
        // void CTriggerFanPushThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerFan because it is not a standard-layout class
    static_assert(sizeof(CTriggerFan) == 0xa40);
};
