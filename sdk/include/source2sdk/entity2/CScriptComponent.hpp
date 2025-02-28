#pragma once
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x38
    // Has VTable
    #pragma pack(push, 1)
    class CScriptComponent : public entity2::CEntityComponent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x08[0x28]; // 0x8
        CUtlSymbolLarge m_scriptClassName; // 0x30        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CScriptComponent because it is not a standard-layout class
    static_assert(sizeof(CScriptComponent) == 0x38);
};
