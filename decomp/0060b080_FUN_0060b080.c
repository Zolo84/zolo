// FUN_0060b080 @ 60b080 size=205

void FUN_0060b080(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = s_SPY_PRODINF_0085ed30;
LAB_0060b116:
    uVar1 = FUN_0042b6c9(pcVar2);
    FUN_007a630a(param_2,uVar1);
    return;
  }
  if (param_1 == 1) {
    pcVar2 = s_SPY_PRODMECH_0085ed20;
  }
  else {
    if (param_1 == 2) {
      pcVar2 = s_SPY_PRODBOMBER_0085ed10;
LAB_0060b0f3:
      uVar1 = FUN_0042b6c9(pcVar2);
      FUN_007a630a(param_2,uVar1);
      return;
    }
    if (param_1 == 3) {
      pcVar2 = s_SPY_PRODFIGHTER_0085ed00;
      goto LAB_0060b116;
    }
    if (param_1 == 4) {
      pcVar2 = s_SPY_PRODNAVY_0085ecf0;
    }
    else {
      if (param_1 == 5) {
        pcVar2 = s_SPY_PRODPROV_0085ece0;
        goto LAB_0060b0f3;
      }
      if (param_1 == 6) {
        pcVar2 = s_SPY_PRODCONVOY_0085ecd0;
        goto LAB_0060b116;
      }
      if (param_1 == 7) {
        pcVar2 = s_SPY_PRODUPGRADE_0085ecc0;
      }
      else {
        if (param_1 == 8) {
          pcVar2 = s_SPY_PRODREINFORCE_0085ecac;
          goto LAB_0060b0f3;
        }
        if (param_1 == 9) {
          pcVar2 = s_SPY_PRODSUP_0085eca0;
          goto LAB_0060b116;
        }
        pcVar2 = s_SPY_PRODCG_0085ec94;
      }
    }
  }
  uVar1 = FUN_0042b6c9(pcVar2);
  FUN_007a630a(param_2,uVar1);
  return;
}


