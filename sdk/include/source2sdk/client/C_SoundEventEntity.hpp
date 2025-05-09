#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Standard-layout class: false
    // Size: 0x6a8
    // Has VTable
    #pragma pack(push, 1)
    class C_SoundEventEntity : public client::C_BaseEntity
    {
    public:
        bool m_bStartOnSpawn; // 0x5e0        
        bool m_bToLocalPlayer; // 0x5e1        
        bool m_bStopOnNew; // 0x5e2        
        bool m_bSaveRestore; // 0x5e3        
        bool m_bSavedIsPlaying; // 0x5e4        
        [[maybe_unused]] std::uint8_t pad_0x5e5[0x3]; // 0x5e5
        float m_flSavedElapsedTime; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4]; // 0x5ec
        CUtlSymbolLarge m_iszSourceEntityName; // 0x5f0        
        CUtlSymbolLarge m_iszAttachmentName; // 0x5f8        
        // m_onGUIDChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<uint64_t> m_onGUIDChanged;
        char m_onGUIDChanged[0x28]; // 0x600        
        entity2::CEntityIOOutput m_onSoundFinished; // 0x628        
        float m_flClientCullRadius; // 0x650        
        [[maybe_unused]] std::uint8_t pad_0x654[0x2c]; // 0x654
        CUtlSymbolLarge m_iszSoundName; // 0x680        
        [[maybe_unused]] std::uint8_t pad_0x688[0x14]; // 0x688
        CEntityHandle m_hSource; // 0x69c        
        int32_t m_nEntityIndexSelection; // 0x6a0        
        // start of bitfield block at 0x6a4
        uint8_t m_bClientSideOnly: 1;
        // end of bitfield block // 1 bits
        [[maybe_unused]] std::uint8_t pad_0x6a5[0x3];
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetSoundName; // 0x0
        // CUtlSymbolLarge InputSetSourceEntity; // 0x0
        // CUtlSymbolLarge InputStartSound; // 0x0
        // bool InputPauseSound; // 0x0
        // bool InputUnPauseSound; // 0x0
        // void InputStopSound; // 0x0
        // void m_nGUID; // 0x688
        // void C_SoundEventEntitySoundFinishedThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SoundEventEntity because it is not a standard-layout class
    static_assert(sizeof(C_SoundEventEntity) == 0x6a8);
};
