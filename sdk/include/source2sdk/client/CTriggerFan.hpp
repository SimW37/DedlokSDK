#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CInfoFan;
};

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x9d0
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
    class CTriggerFan : public client::C_BaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vFanOrigin; // 0x948        
        // metadata: MNetworkEnable
        Vector m_vFanOriginOffset; // 0x954        
        // metadata: MNetworkEnable
        Vector m_vFanEnd; // 0x960        
        // metadata: MNetworkEnable
        Vector m_vNoiseDirectionTarget; // 0x96c        
        // metadata: MNetworkEnable
        Vector m_vDirection; // 0x978        
        // metadata: MNetworkEnable
        bool m_bPushTowardsEntity; // 0x984        
        [[maybe_unused]] std::uint8_t pad_0x985[0xb]; // 0x985
        // metadata: MNetworkEnable
        Quaternion m_qNoiseDelta; // 0x990        
        // metadata: MNetworkEnable
        // m_hInfoFan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CInfoFan> m_hInfoFan;
        char m_hInfoFan[0x4]; // 0x9a0        
        // metadata: MNetworkEnable
        float m_flForce; // 0x9a4        
        // metadata: MNetworkEnable
        bool m_bFalloff; // 0x9a8        
        [[maybe_unused]] std::uint8_t pad_0x9a9[0x7]; // 0x9a9
        // metadata: MNetworkEnable
        client::CountdownTimer m_RampTimer; // 0x9b0        
        [[maybe_unused]] std::uint8_t pad_0x9c8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerFan because it is not a standard-layout class
    static_assert(sizeof(CTriggerFan) == 0x9d0);
};
