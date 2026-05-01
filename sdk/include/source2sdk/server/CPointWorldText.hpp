#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PointWorldTextJustifyHorizontal_t.hpp"
#include "source2sdk/client/PointWorldTextJustifyVertical_t.hpp"
#include "source2sdk/client/PointWorldTextReorientMode_t.hpp"
#include "source2sdk/server/CModelPointEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa28
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "char m_messageText"
        // static metadata: MNetworkVarNames "char m_FontName"
        // static metadata: MNetworkVarNames "char m_BackgroundMaterialName"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "bool m_bFullbright"
        // static metadata: MNetworkVarNames "float m_flWorldUnitsPerPx"
        // static metadata: MNetworkVarNames "float m_flFontSize"
        // static metadata: MNetworkVarNames "float m_flDepthOffset"
        // static metadata: MNetworkVarNames "bool m_bDrawBackground"
        // static metadata: MNetworkVarNames "float m_flBackgroundBorderWidth"
        // static metadata: MNetworkVarNames "float m_flBackgroundBorderHeight"
        // static metadata: MNetworkVarNames "float m_flBackgroundWorldToUV"
        // static metadata: MNetworkVarNames "Color m_Color"
        // static metadata: MNetworkVarNames "PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal"
        // static metadata: MNetworkVarNames "PointWorldTextJustifyVertical_t m_nJustifyVertical"
        // static metadata: MNetworkVarNames "PointWorldTextReorientMode_t m_nReorientMode"
        #pragma pack(push, 1)
        class CPointWorldText : public source2sdk::server::CModelPointEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            char m_messageText[512]; // 0x778            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            char m_FontName[64]; // 0x978            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            char m_BackgroundMaterialName[64]; // 0x9b8            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bEnabled; // 0x9f8            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bFullbright; // 0x9f9            
            uint8_t _pad09fa[0x2]; // 0x9fa
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flWorldUnitsPerPx; // 0x9fc            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flFontSize; // 0xa00            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flDepthOffset; // 0xa04            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bDrawBackground; // 0xa08            
            uint8_t _pad0a09[0x3]; // 0xa09
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flBackgroundBorderWidth; // 0xa0c            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flBackgroundBorderHeight; // 0xa10            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flBackgroundWorldToUV; // 0xa14            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            Color m_Color; // 0xa18            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xa1c            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xa20            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::PointWorldTextReorientMode_t m_nReorientMode; // 0xa24            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggle; // 0x0
            // CUtlSymbolLarge InputSetMessage; // 0x0
            // int32_t InputSetIntMessage; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointWorldText because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointWorldText) == 0xa28);
    };
};
