#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseClientUIEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CPointOffScreenIndicatorUi;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xc10
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bIgnoreInput"
        // static metadata: MNetworkVarNames "bool m_bLit"
        // static metadata: MNetworkVarNames "bool m_bFollowPlayerAcrossTeleport"
        // static metadata: MNetworkVarNames "float m_flWidth"
        // static metadata: MNetworkVarNames "float m_flHeight"
        // static metadata: MNetworkVarNames "float m_flDPI"
        // static metadata: MNetworkVarNames "float m_flInteractDistance"
        // static metadata: MNetworkVarNames "float m_flDepthOffset"
        // static metadata: MNetworkVarNames "uint32 m_unOwnerContext"
        // static metadata: MNetworkVarNames "uint32 m_unHorizontalAlign"
        // static metadata: MNetworkVarNames "uint32 m_unVerticalAlign"
        // static metadata: MNetworkVarNames "uint32 m_unOrientation"
        // static metadata: MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
        // static metadata: MNetworkVarNames "string_t m_vecCSSClasses"
        // static metadata: MNetworkVarNames "bool m_bOpaque"
        // static metadata: MNetworkVarNames "bool m_bNoDepth"
        // static metadata: MNetworkVarNames "bool m_bRenderBackface"
        // static metadata: MNetworkVarNames "bool m_bUseOffScreenIndicator"
        // static metadata: MNetworkVarNames "bool m_bExcludeFromSaveGames"
        // static metadata: MNetworkVarNames "bool m_bGrabbable"
        // static metadata: MNetworkVarNames "bool m_bOnlyRenderToTexture"
        // static metadata: MNetworkVarNames "bool m_bDisableMipGen"
        // static metadata: MNetworkVarNames "int32 m_nExplicitImageLayout"
        #pragma pack(push, 1)
        class C_PointClientUIWorldPanel : public source2sdk::client::C_BaseClientUIEntity
        {
        public:
            uint8_t _pad09d8[0x8]; // 0x9d8
            bool m_bForceRecreateNextUpdate; // 0x9e0            
            bool m_bMoveViewToPlayerNextThink; // 0x9e1            
            bool m_bCheckCSSClasses; // 0x9e2            
            uint8_t _pad09e3[0xd]; // 0x9e3
            CTransform m_anchorDeltaTransform; // 0x9f0            
            uint8_t _pad0a10[0x178]; // 0xa10
            source2sdk::client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xb88            
            uint8_t _pad0b90[0x20]; // 0xb90
            // metadata: MNetworkEnable
            bool m_bIgnoreInput; // 0xbb0            
            // metadata: MNetworkEnable
            bool m_bLit; // 0xbb1            
            // metadata: MNetworkEnable
            bool m_bFollowPlayerAcrossTeleport; // 0xbb2            
            uint8_t _pad0bb3[0x1]; // 0xbb3
            // metadata: MNetworkEnable
            float m_flWidth; // 0xbb4            
            // metadata: MNetworkEnable
            float m_flHeight; // 0xbb8            
            // metadata: MNetworkEnable
            float m_flDPI; // 0xbbc            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0xbc0            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0xbc4            
            // metadata: MNetworkEnable
            std::uint32_t m_unOwnerContext; // 0xbc8            
            // metadata: MNetworkEnable
            std::uint32_t m_unHorizontalAlign; // 0xbcc            
            // metadata: MNetworkEnable
            std::uint32_t m_unVerticalAlign; // 0xbd0            
            // metadata: MNetworkEnable
            std::uint32_t m_unOrientation; // 0xbd4            
            // metadata: MNetworkEnable
            bool m_bAllowInteractionFromAllSceneWorlds; // 0xbd8            
            uint8_t _pad0bd9[0x7]; // 0xbd9
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0xbe0            
            // metadata: MNetworkEnable
            bool m_bOpaque; // 0xbf8            
            // metadata: MNetworkEnable
            bool m_bNoDepth; // 0xbf9            
            // metadata: MNetworkEnable
            bool m_bRenderBackface; // 0xbfa            
            // metadata: MNetworkEnable
            bool m_bUseOffScreenIndicator; // 0xbfb            
            // metadata: MNetworkEnable
            bool m_bExcludeFromSaveGames; // 0xbfc            
            // metadata: MNetworkEnable
            bool m_bGrabbable; // 0xbfd            
            // metadata: MNetworkEnable
            bool m_bOnlyRenderToTexture; // 0xbfe            
            // metadata: MNetworkEnable
            bool m_bDisableMipGen; // 0xbff            
            // metadata: MNetworkEnable
            std::int32_t m_nExplicitImageLayout; // 0xc00            
            uint8_t _pad0c04[0xc];
            
            // Datamap fields:
            // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0xb80
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIWorldPanel) == 0xc10);
    };
};
