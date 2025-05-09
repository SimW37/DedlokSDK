#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Size: 0x998
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CCitadelPortalTrigger > m_hOtherPortal"
    #pragma pack(push, 1)
    class CCitadelPortalTrigger : public server::CBaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        // m_hOtherPortal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelPortalTrigger> m_hOtherPortal;
        char m_hOtherPortal[0x4]; // 0x990        
        [[maybe_unused]] std::uint8_t pad_0x994[0x4];
        
        // Datamap fields:
        // Vector trigger_mins; // 0x7fffffff
        // Vector trigger_maxs; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPortalTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelPortalTrigger) == 0x998);
};
