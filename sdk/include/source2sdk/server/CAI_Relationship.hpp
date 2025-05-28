#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/Class_T.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x530
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Relationship : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04e0[0x10]; // 0x4e0
            CUtlSymbolLarge m_iszSubject; // 0x4f0            
            CUtlSymbolLarge m_iszSubjectClass; // 0x4f8            
            source2sdk::client::Class_T m_nSubjectClassifyAs; // 0x500            
            uint8_t _pad0504[0x4]; // 0x504
            CUtlSymbolLarge m_iszTargetClass; // 0x508            
            source2sdk::client::Class_T m_nTargetClassifyAs; // 0x510            
            std::int32_t m_iDisposition; // 0x514            
            std::int32_t m_iRank; // 0x518            
            bool m_fStartActive; // 0x51c            
            bool m_bIsActive; // 0x51d            
            uint8_t _pad051e[0x2]; // 0x51e
            std::int32_t m_iPreviousDisposition; // 0x520            
            float m_flRadius; // 0x524            
            std::int32_t m_iPreviousRank; // 0x528            
            bool m_bReciprocal; // 0x52c            
            uint8_t _pad052d[0x3];
            
            // Datamap fields:
            // void CAI_RelationshipApplyRelationshipThink; // 0x0
            // void InputApplyRelationship; // 0x0
            // void InputRevertRelationship; // 0x0
            // void InputRevertToDefaultRelationship; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_Relationship because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_Relationship) == 0x530);
    };
};
