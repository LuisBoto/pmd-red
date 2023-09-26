#ifndef GUARD_COMMON_STRINGS_FELICITY_BANK_H
#define GUARD_COMMON_STRINGS_FELICITY_BANK_H

enum FelicityBankMode
{
    FEL_MODE_AWAKE,
    FEL_MODE_ASLEEP,
    FEL_MODE_COUNT
};
enum FelicityBankDialogue
{
    FEL_DLG_WELCOME,
    FEL_DLG_HOW_MAY_I_SERVE__NO_MONEY,
    FEL_DLG_HOW_MAY_I_SERVE__HAS_MONEY,
    FEL_DLG_VERY_WELL,
    FEL_DLG_BYE__NO_MONEY,
    FEL_DLG_BYE__HAS_MONEY,
    FEL_DLG_DEPOSIT__HOW_MUCH,
    FEL_DLG_DEPOSIT__NO_MONEY,
    FEL_DLG_DEPOSIT__BANK_FULL,
    FEL_DLG_DEPOSIT__RECEIPT,
    FEL_DLG_WITHDRAW__HOW_MUCH,
    FEL_DLG_WITHDRAW__NO_MONEY,
    FEL_DLG_WITHDRAW__WALLET_FULL,
    FEL_DLG_WITHDRAW__RECEIPT,
    FEL_DLG_HOW_IT_WORKS,
    FEL_DLG_MAX
};

#endif // GUARD_COMMON_STRINGS_FELICITY_BANK_H