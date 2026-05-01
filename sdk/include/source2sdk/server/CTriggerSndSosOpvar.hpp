#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0xc38
        // Has VTable
        #pragma pack(push, 1)
        class CTriggerSndSosOpvar : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNotSaved
            // m_hTouchingPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTouchingPlayers;
            char m_hTouchingPlayers[0x18]; // 0x8d8            
            // metadata: MNotSaved
            Vector m_flPosition; // 0x8f0            
            float m_flCenterSize; // 0x8fc            
            float m_flMinVal; // 0x900            
            float m_flMaxVal; // 0x904            
            CUtlSymbolLarge m_opvarName; // 0x908            
            CUtlSymbolLarge m_stackName; // 0x910            
            CUtlSymbolLarge m_operatorName; // 0x918            
            bool m_bVolIs2D; // 0x920            
            // metadata: MNotSaved
            char m_opvarNameChar[256]; // 0x921            
            // metadata: MNotSaved
            char m_stackNameChar[256]; // 0xa21            
            // metadata: MNotSaved
            char m_operatorNameChar[256]; // 0xb21            
            uint8_t _pad0c21[0x3]; // 0xc21
            // metadata: MNotSaved
            Vector m_VecNormPos; // 0xc24            
            // metadata: MNotSaved
            float m_flNormCenterSize; // 0xc30            
            uint8_t _pad0c34[0x4];
            
            // Datamap fields:
            // void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
            // void m_opvarNameChar; // 0x921
            // void m_stackNameChar; // 0xa21
            // void m_operatorNameChar; // 0xb21
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerSndSosOpvar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerSndSosOpvar) == 0xc38);
    };
};
