#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_Intrinsic_BaseVData.hpp"
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
    // Size: 0x680
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_CrushingFistsWatcher_VData : public server::CCitadel_Modifier_Intrinsic_BaseVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_StackingDebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_StackingDebuffModifier;
        char m_StackingDebuffModifier[0x10]; // 0x660        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strStackSound; // 0x670        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_CrushingFistsWatcher_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_CrushingFistsWatcher_VData) == 0x680);
};
