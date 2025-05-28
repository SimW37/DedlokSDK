#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xe8
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBotDifficultyDefinition
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertyDescription "Bots get free gold over time"
            float free_gold_per_minute; // 0x8            
            // metadata: MPropertyDescription "GPM that scales with game time"
            float free_gold_per_minute_scaled; // 0xc            
            // metadata: MPropertyDescription "How much time until a takeover bot till spend gold/ap"
            float takeover_spend_currency_time; // 0x10            
            // metadata: MPropertyDescription "Are bots allowed to buy items from anywhere"
            bool allow_purchasing_anywhere; // 0x14            
            // metadata: MPropertyDescription "Forces  bots to avoid human allies"
            bool avoid_human_ally; // 0x15            
            uint8_t _pad0016[0x2]; // 0x16
            // metadata: MPropertyDescription "Forces  bots to prioritize getting last hits on enemies below this health"
            std::int32_t engage_last_hit_threshold; // 0x18            
            // metadata: MPropertyDescription "Extra distance  bots are willing to engage enemies at to get last hits"
            float engage_last_hit_distance; // 0x1c            
            // metadata: MPropertyDescription "Extra distance  bots are willing to engage heroes at"
            float engage_hero_distance; // 0x20            
            // metadata: MPropertyDescription "Distance  bots are willing to engage enemies at"
            float engage_distance; // 0x24            
            // metadata: MPropertyDescription "Distance  bots will engage to the left or right of the target"
            float engage_lane_side_dist; // 0x28            
            // metadata: MPropertyDescription "Distance  bots will engage to the left or right of the target"
            float engage_player_side_dist; // 0x2c            
            // metadata: MPropertyDescription "Bots pick on a time interval"
            float choose_lane_on_interval; // 0x30            
            // metadata: MPropertyDescription "Duration Bot prioritizes changing lanes vs fighting"
            float lane_change_duration; // 0x34            
            // metadata: MPropertyDescription "Bots try to balance lanes"
            bool choose_balanced_lanes; // 0x38            
            uint8_t _pad0039[0x3]; // 0x39
            // metadata: MPropertyDescription "Desired bot miss chance"
            float attack_miss_chance; // 0x3c            
            // metadata: MPropertyDescription "Bots choose a random angle in this range to offset their perfect aim"
            float attack_enemies_inaccuracy; // 0x40            
            // metadata: MPropertyDescription "When trying to miss "
            float attack_enemies_inaccuracy_scale; // 0x44            
            // metadata: MPropertyDescription "Distance (m) to make bots even worse accuracy"
            float attack_enemies_inaccuracy_distance; // 0x48            
            // metadata: MPropertyDescription "Scale the accuracy by this amount at distance"
            float attack_enemies_inaccuracy_distance_scale; // 0x4c            
            // metadata: MPropertyDescription "Scale inaccuracy by this amount when threatened"
            float attack_enemies_inaccuracy_threat_scale; // 0x50            
            // metadata: MPropertyDescription "Bot reloads when clip is this low"
            float reload_pct; // 0x54            
            // metadata: MPropertyDescription "Citadel bots will randomly purchase available upgrades every few seconds"
            float purchase_random_upgrades; // 0x58            
            // metadata: MPropertyDescription "Citadel bots will purchase available upgrades in order every few seconds"
            float purchase_upgrades_in_order; // 0x5c            
            // metadata: MPropertyDescription "Time between bot using ability"
            float use_ability_cooldown; // 0x60            
            // metadata: MPropertyDescription "How long to remember recent attackers"
            float max_attacker_memory; // 0x64            
            // metadata: MPropertyDescription "Forces  bots to attack nearby enemies"
            bool jump_sometimes; // 0x68            
            // metadata: MPropertyDescription "Forces  bots to attack nearby enemies"
            bool roll_after_damage; // 0x69            
            uint8_t _pad006a[0x2]; // 0x6a
            // metadata: MPropertyDescription "How often bots will roll given damage conditions"
            float roll_chance; // 0x6c            
            // metadata: MPropertyDescription "Roll chance amplification when low health"
            float roll_chance_lowhealth_scale; // 0x70            
            // metadata: MPropertyDescription "Time between roll attempts"
            float roll_frequency; // 0x74            
            // metadata: MPropertyDescription "Fight the midboss"
            bool fight_midboss; // 0x78            
            // metadata: MPropertyDescription "Fight for the idol"
            bool fight_for_idol; // 0x79            
            uint8_t _pad007a[0x2]; // 0x7a
            // metadata: MPropertyDescription "How many ticks between the bot performing sensing"
            std::int32_t sensing_tick_interval; // 0x7c            
            // metadata: MPropertyDescription "Seconds after a bot sees you before it can react"
            float visual_reaction_time; // 0x80            
            // metadata: MPropertyDescription "Seconds after a bot sees you before it can react"
            float shoot_duration; // 0x84            
            // metadata: MPropertyDescription "Factor from Projectile speed to usable range"
            float projectile_range_scale; // 0x88            
            // metadata: MPropertyDescription "Default Cast Range for abilities that don't specify"
            float ability_min_cast_range; // 0x8c            
            // metadata: MPropertyDescription "Default Enemy range to use friendly abilities"
            float ability_min_cast_range_friendly; // 0x90            
            // metadata: MPropertyDescription "Maximum life for friendly ability to be used (prevents healing when full health)"
            float ability_friendly_life_threshold; // 0x94            
            // metadata: MPropertyDescription "Pitch (aiming down) for bots when using a friendly ability"
            float ability_friendly_pitch; // 0x98            
            // metadata: MPropertyDescription "How much in range before doing an ability (ie not casting on edges)"
            float ability_window_size; // 0x9c            
            // metadata: MPropertyDescription "Interval in seconds at which to spend AP randomly"
            float spend_random_ap; // 0xa0            
            // metadata: MPropertyDescription "Bonus regen all the time"
            float bonus_regen; // 0xa4            
            // metadata: MPropertyDescription "Regen when not seen by enemy players"
            float bonus_regen_outofsight; // 0xa8            
            // metadata: MPropertyDescription "Bonus run speed"
            float bonus_run_speed; // 0xac            
            // metadata: MPropertyDescription "Radius for bots to look for better locations to path to"
            float safe_spot_target_radius; // 0xb0            
            // metadata: MPropertyDescription "Radius for bots to consider whether a position is safe"
            float safe_spot_safety_radius; // 0xb4            
            // metadata: MPropertyDescription "Distance away from target to search for an attack location"
            float enemy_hero_engage_distance; // 0xb8            
            // metadata: MPropertyDescription "Minimum number of spots to sample looking for good positioning"
            std::int32_t safe_spot_samples_min; // 0xbc            
            // metadata: MPropertyDescription "Maximum number of spots to sample looking for good positioning"
            std::int32_t safe_spot_samples_max; // 0xc0            
            // metadata: MPropertyDescription "Try to deny orbs"
            std::int32_t attempt_orb_start_time; // 0xc4            
            // metadata: MPropertyDescription "Percentage of the time to look for red orbs to shoot"
            std::int32_t attempt_deny_orb_pct; // 0xc8            
            // metadata: MPropertyDescription "Percentage of the time to look for gold orbs to shoot"
            std::int32_t attempt_secure_orb_pct; // 0xcc            
            // metadata: MPropertyDescription "Range(m) to Scan for Orbs"
            float attempt_orb_range; // 0xd0            
            // metadata: MPropertyDescription "Low Health"
            float low_health; // 0xd4            
            // metadata: MPropertyDescription "When pushed against tower"
            float low_health_pushed; // 0xd8            
            // metadata: MPropertyDescription "Guide bot talks about neutrals"
            bool guide_bot_neutral_info; // 0xdc            
            uint8_t _pad00dd[0x3]; // 0xdd
            // metadata: MPropertyDescription "Min time between messages a player bot can send"
            float message_interval; // 0xe0            
            // metadata: MPropertyDescription "How many frames between LOS check refreshes on the Bots?"
            std::int32_t los_check_interval; // 0xe4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, free_gold_per_minute) == 0x8);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, free_gold_per_minute_scaled) == 0xc);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, takeover_spend_currency_time) == 0x10);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, allow_purchasing_anywhere) == 0x14);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, avoid_human_ally) == 0x15);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, engage_last_hit_threshold) == 0x18);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, engage_last_hit_distance) == 0x1c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, engage_hero_distance) == 0x20);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, engage_distance) == 0x24);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, engage_lane_side_dist) == 0x28);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, engage_player_side_dist) == 0x2c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, choose_lane_on_interval) == 0x30);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, lane_change_duration) == 0x34);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, choose_balanced_lanes) == 0x38);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attack_miss_chance) == 0x3c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attack_enemies_inaccuracy) == 0x40);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attack_enemies_inaccuracy_scale) == 0x44);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attack_enemies_inaccuracy_distance) == 0x48);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attack_enemies_inaccuracy_distance_scale) == 0x4c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attack_enemies_inaccuracy_threat_scale) == 0x50);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, reload_pct) == 0x54);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, purchase_random_upgrades) == 0x58);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, purchase_upgrades_in_order) == 0x5c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, use_ability_cooldown) == 0x60);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, max_attacker_memory) == 0x64);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, jump_sometimes) == 0x68);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, roll_after_damage) == 0x69);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, roll_chance) == 0x6c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, roll_chance_lowhealth_scale) == 0x70);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, roll_frequency) == 0x74);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, fight_midboss) == 0x78);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, fight_for_idol) == 0x79);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, sensing_tick_interval) == 0x7c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, visual_reaction_time) == 0x80);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, shoot_duration) == 0x84);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, projectile_range_scale) == 0x88);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, ability_min_cast_range) == 0x8c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, ability_min_cast_range_friendly) == 0x90);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, ability_friendly_life_threshold) == 0x94);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, ability_friendly_pitch) == 0x98);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, ability_window_size) == 0x9c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, spend_random_ap) == 0xa0);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, bonus_regen) == 0xa4);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, bonus_regen_outofsight) == 0xa8);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, bonus_run_speed) == 0xac);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, safe_spot_target_radius) == 0xb0);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, safe_spot_safety_radius) == 0xb4);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, enemy_hero_engage_distance) == 0xb8);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, safe_spot_samples_min) == 0xbc);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, safe_spot_samples_max) == 0xc0);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attempt_orb_start_time) == 0xc4);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attempt_deny_orb_pct) == 0xc8);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attempt_secure_orb_pct) == 0xcc);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attempt_orb_range) == 0xd0);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, low_health) == 0xd4);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, low_health_pushed) == 0xd8);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, guide_bot_neutral_info) == 0xdc);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, message_interval) == 0xe0);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, los_check_interval) == 0xe4);
        
        static_assert(sizeof(source2sdk::client::CBotDifficultyDefinition) == 0xe8);
    };
};
