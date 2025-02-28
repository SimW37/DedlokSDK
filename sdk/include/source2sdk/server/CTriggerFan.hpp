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
    // Size: 0xa30
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vFanOrigin"
    // static metadata: MNetworkVarNames "Vector m_vFanOriginOffset"
    // static metadata: MNetworkVarNames "Vector m_vFanEnd"
    // static metadata: MNetworkVarNames "Vector m_vNoiseDirectionTarget"
    // static metadata: MNetworkVarNames "Vector m_vDirection"
    // static metadata: MNetworkVarNames "bool m_bPushTowardsEntity"
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
        Vector m_vFanOrigin; // 0x978        
        // metadata: MNetworkEnable
        Vector m_vFanOriginOffset; // 0x984        
        // metadata: MNetworkEnable
        Vector m_vFanEnd; // 0x990        
        // metadata: MNetworkEnable
        Vector m_vNoiseDirectionTarget; // 0x99c        
        // metadata: MNetworkEnable
        Vector m_vDirection; // 0x9a8        
        // metadata: MNetworkEnable
        bool m_bPushTowardsEntity; // 0x9b4        
        [[maybe_unused]] std::uint8_t pad_0x9b5[0xb]; // 0x9b5
        // metadata: MNetworkEnable
        Quaternion m_qNoiseDelta; // 0x9c0        
        // metadata: MNetworkEnable
        // m_hInfoFan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CInfoFan> m_hInfoFan;
        char m_hInfoFan[0x4]; // 0x9d0        
        // metadata: MNetworkEnable
        float m_flForce; // 0x9d4        
        // metadata: MNetworkEnable
        bool m_bFalloff; // 0x9d8        
        [[maybe_unused]] std::uint8_t pad_0x9d9[0x7]; // 0x9d9
        // metadata: MNetworkEnable
        server::CountdownTimer m_RampTimer; // 0x9e0        
        CUtlSymbolLarge m_iszInfoFan; // 0x9f8        
        float m_flRopeForceScale; // 0xa00        
        float m_flParticleForceScale; // 0xa04        
        float m_flPlayerForce; // 0xa08        
        bool m_bPlayerWindblock; // 0xa0c        
        [[maybe_unused]] std::uint8_t pad_0xa0d[0x3]; // 0xa0d
        float m_flNPCForce; // 0xa10        
        float m_flRampTime; // 0xa14        
        float m_fNoiseDegrees; // 0xa18        
        float m_fNoiseSpeed; // 0xa1c        
        bool m_bPushPlayer; // 0xa20        
        bool m_bRampDown; // 0xa21        
        [[maybe_unused]] std::uint8_t pad_0xa22[0x2]; // 0xa22
        int32_t m_nManagerFanIdx; // 0xa24        
        [[maybe_unused]] std::uint8_t pad_0xa28[0x8];
        
        // Datamap fields:
        // void CTriggerFanPushThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerFan because it is not a standard-layout class
    static_assert(sizeof(CTriggerFan) == 0xa30);
};
