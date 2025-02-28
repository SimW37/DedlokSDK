#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x58
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RejuvinatorParams_t
    {
    public:
        float m_flRejuvinatorExpirationWarningTiming; // 0x0        
        float m_flRejuvinatorBuffDuration; // 0x4        
        float m_flRejuvinatorDropHeight; // 0x8        
        float m_flRejuvinatorDropHeight3LaneMap; // 0xc        
        float m_flRejuvinatorDropDuration; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4]; // 0x14
        // m_TrooperHealthMult has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_TrooperHealthMult;
        char m_TrooperHealthMult[0x18]; // 0x18        
        // m_PlayerRespawnMult has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_PlayerRespawnMult;
        char m_PlayerRespawnMult[0x18]; // 0x30        
        CSoundEventName m_strRejuvPickupSound; // 0x48        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RejuvinatorParams_t, m_flRejuvinatorExpirationWarningTiming) == 0x0);
    static_assert(offsetof(RejuvinatorParams_t, m_flRejuvinatorBuffDuration) == 0x4);
    static_assert(offsetof(RejuvinatorParams_t, m_flRejuvinatorDropHeight) == 0x8);
    static_assert(offsetof(RejuvinatorParams_t, m_flRejuvinatorDropHeight3LaneMap) == 0xc);
    static_assert(offsetof(RejuvinatorParams_t, m_flRejuvinatorDropDuration) == 0x10);
    static_assert(offsetof(RejuvinatorParams_t, m_TrooperHealthMult) == 0x18);
    static_assert(offsetof(RejuvinatorParams_t, m_PlayerRespawnMult) == 0x30);
    static_assert(offsetof(RejuvinatorParams_t, m_strRejuvPickupSound) == 0x48);
    
    static_assert(sizeof(RejuvinatorParams_t) == 0x58);
};
