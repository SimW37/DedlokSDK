#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CItem.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseFilter;
};

namespace source2sdk::server
{
    class CItemGenericTriggerHelper;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcd8
    // Has VTable
    #pragma pack(push, 1)
    class CItemGeneric : public server::CItem
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb68[0x8]; // 0xb68
        bool m_bHasTriggerRadius; // 0xb70        
        bool m_bHasPickupRadius; // 0xb71        
        [[maybe_unused]] std::uint8_t pad_0xb72[0x2]; // 0xb72
        float m_flPickupRadiusSqr; // 0xb74        
        float m_flTriggerRadiusSqr; // 0xb78        
        entity2::GameTime_t m_flLastPickupCheck; // 0xb7c        
        bool m_bPlayerCounterListenerAdded; // 0xb80        
        bool m_bPlayerInTriggerRadius; // 0xb81        
        [[maybe_unused]] std::uint8_t pad_0xb82[0x6]; // 0xb82
        // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
        char m_hSpawnParticleEffect[0x8]; // 0xb88        
        CUtlSymbolLarge m_pAmbientSoundEffect; // 0xb90        
        bool m_bAutoStartAmbientSound; // 0xb98        
        [[maybe_unused]] std::uint8_t pad_0xb99[0x7]; // 0xb99
        CUtlSymbolLarge m_pSpawnScriptFunction; // 0xba0        
        // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
        char m_hPickupParticleEffect[0x8]; // 0xba8        
        CUtlSymbolLarge m_pPickupSoundEffect; // 0xbb0        
        CUtlSymbolLarge m_pPickupScriptFunction; // 0xbb8        
        // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
        char m_hTimeoutParticleEffect[0x8]; // 0xbc0        
        CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xbc8        
        CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xbd0        
        CUtlSymbolLarge m_pPickupFilterName; // 0xbd8        
        // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hPickupFilter;
        char m_hPickupFilter[0x4]; // 0xbe0        
        [[maybe_unused]] std::uint8_t pad_0xbe4[0x4]; // 0xbe4
        entity2::CEntityIOOutput m_OnPickup; // 0xbe8        
        entity2::CEntityIOOutput m_OnTimeout; // 0xc10        
        entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0xc38        
        entity2::CEntityIOOutput m_OnTriggerTouch; // 0xc60        
        entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0xc88        
        CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xcb0        
        float m_flPickupRadius; // 0xcb8        
        float m_flTriggerRadius; // 0xcbc        
        CUtlSymbolLarge m_pTriggerSoundEffect; // 0xcc0        
        bool m_bGlowWhenInTrigger; // 0xcc8        
        Color m_glowColor; // 0xcc9        
        bool m_bUseable; // 0xccd        
        [[maybe_unused]] std::uint8_t pad_0xcce[0x2]; // 0xcce
        // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CItemGenericTriggerHelper> m_hTriggerHelper;
        char m_hTriggerHelper[0x4]; // 0xcd0        
        [[maybe_unused]] std::uint8_t pad_0xcd4[0x4];
        
        // Datamap fields:
        // void CItemGenericItemGenericTouch; // 0x0
        // void InputStartAmbientSound; // 0x0
        // void InputStopAmbientSound; // 0x0
        // void InputToggleAmbientSound; // 0x0
        // void m_hAmbientSound; // 0xb68
        // float auto_remove_timeout; // 0x7fffffff
        // float drag_override; // 0x7fffffff
        // float damping_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemGeneric because it is not a standard-layout class
    static_assert(sizeof(CItemGeneric) == 0xcd8);
};
