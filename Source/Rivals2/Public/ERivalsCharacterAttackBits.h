#pragma once
#include "CoreMinimal.h"
#include "ERivalsCharacterAttackBits.generated.h"

UENUM()
enum class ERivalsCharacterAttackBits {
    None,
    Jab,
    DAttack,
    Ftilt = 4,
    Utilt = 8,
    Dtilt = 16,
    Tilts = 28,
    Fstrong = 32,
    Ustrong = 64,
    Dstrong = 128,
    Strongs = 224,
    Nair = 256,
    Fair = 512,
    Bair = 1024,
    Uair = 2048,
    Dair = 4096,
    Aerials = 7936,
    Nspecial = 8192,
    Fspecial = 16384,
    Uspecial = 32768,
    Dspecial = 65536,
    Specials = 122880,
    Grab = 131072,
    Fthrow = 262144,
    Bthrow = 524288,
    Uthrow = 1048576,
    Dthrow = 2097152,
    Throws = 3932160,
    Pummel = 4194304,
    GetupAttack = 8388608,
    LedgeAttack = 16777216,
    Taunt = 33554432,
    All = -1,
};

