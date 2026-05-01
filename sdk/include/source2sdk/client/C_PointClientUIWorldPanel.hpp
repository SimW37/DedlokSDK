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
        // Size: 0xbf0
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
        // static metadata: MNetworkVarNames "bool m_bVisibleWhenParentNoDraw"
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
            uint8_t _pad09d0[0x8]; // 0x9d0
            // metadata: MNotSaved
            bool m_bForceRecreateNextUpdate; // 0x9d8            
            // metadata: MNotSaved
            bool m_bMoveViewToPlayerNextThink; // 0x9d9            
            // metadata: MNotSaved
            bool m_bCheckCSSClasses; // 0x9da            
            uint8_t _pad09db[0x5]; // 0x9db
            // metadata: MNotSaved
            CTransform m_anchorDeltaTransform; // 0x9e0            
            uint8_t _pad0a00[0x170]; // 0xa00
            // metadata: MNotSaved
            source2sdk::client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xb70            
            uint8_t _pad0b78[0x20]; // 0xb78
            // metadata: MNetworkEnable
            bool m_bIgnoreInput; // 0xb98            
            // metadata: MNetworkEnable
            bool m_bLit; // 0xb99            
            // metadata: MNetworkEnable
            bool m_bFollowPlayerAcrossTeleport; // 0xb9a            
            uint8_t _pad0b9b[0x1]; // 0xb9b
            // metadata: MNetworkEnable
            float m_flWidth; // 0xb9c            
            // metadata: MNetworkEnable
            float m_flHeight; // 0xba0            
            // metadata: MNetworkEnable
            float m_flDPI; // 0xba4            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0xba8            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0xbac            
            // metadata: MNetworkEnable
            std::uint32_t m_unOwnerContext; // 0xbb0            
            // metadata: MNetworkEnable
            std::uint32_t m_unHorizontalAlign; // 0xbb4            
            // metadata: MNetworkEnable
            std::uint32_t m_unVerticalAlign; // 0xbb8            
            // metadata: MNetworkEnable
            std::uint32_t m_unOrientation; // 0xbbc            
            // metadata: MNetworkEnable
            bool m_bAllowInteractionFromAllSceneWorlds; // 0xbc0            
            uint8_t _pad0bc1[0x7]; // 0xbc1
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0xbc8            
            // metadata: MNetworkEnable
            bool m_bOpaque; // 0xbe0            
            // metadata: MNetworkEnable
            bool m_bNoDepth; // 0xbe1            
            // metadata: MNetworkEnable
            bool m_bVisibleWhenParentNoDraw; // 0xbe2            
            // metadata: MNetworkEnable
            bool m_bRenderBackface; // 0xbe3            
            // metadata: MNetworkEnable
            bool m_bUseOffScreenIndicator; // 0xbe4            
            // metadata: MNetworkEnable
            bool m_bExcludeFromSaveGames; // 0xbe5            
            // metadata: MNetworkEnable
            bool m_bGrabbable; // 0xbe6            
            // metadata: MNetworkEnable
            bool m_bOnlyRenderToTexture; // 0xbe7            
            // metadata: MNetworkEnable
            bool m_bDisableMipGen; // 0xbe8            
            uint8_t _pad0be9[0x3]; // 0xbe9
            // metadata: MNetworkEnable
            std::int32_t m_nExplicitImageLayout; // 0xbec            
            
            // Datamap fields:
            // CUtlSymbolLarge css_class; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIWorldPanel) == 0xbf0);
    };
};
