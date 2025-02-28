#pragma once
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/Blend2DMode.hpp"
#include "source2sdk/animgraphlib/BlendItem_t.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/CParamSpanUpdater.hpp"
#include "source2sdk/animgraphlib/TagSpan_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CBlend2DUpdateNode : public animgraphlib::CAnimUpdateNodeBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x58[0x8]; // 0x58
        // m_items has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::BlendItem_t> m_items;
        char m_items[0x18]; // 0x60        
        // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::TagSpan_t> m_tags;
        char m_tags[0x18]; // 0x78        
        animgraphlib::CParamSpanUpdater m_paramSpans; // 0x90        
        // m_nodeItemIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_nodeItemIndices;
        char m_nodeItemIndices[0x18]; // 0xa8        
        animgraphlib::CAnimInputDamping m_damping; // 0xc0        
        animgraphlib::AnimValueSource m_blendSourceX; // 0xd8        
        animgraphlib::CAnimParamHandle m_paramX; // 0xdc        
        [[maybe_unused]] std::uint8_t pad_0xde[0x2]; // 0xde
        animgraphlib::AnimValueSource m_blendSourceY; // 0xe0        
        animgraphlib::CAnimParamHandle m_paramY; // 0xe4        
        [[maybe_unused]] std::uint8_t pad_0xe6[0x2]; // 0xe6
        animgraphlib::Blend2DMode m_eBlendMode; // 0xe8        
        float m_playbackSpeed; // 0xec        
        bool m_bLoop; // 0xf0        
        bool m_bLockBlendOnReset; // 0xf1        
        bool m_bLockWhenWaning; // 0xf2        
        bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xf3        
        [[maybe_unused]] std::uint8_t pad_0xf4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBlend2DUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CBlend2DUpdateNode) == 0xf8);
};
