// FUN_007a78e3 @ 7a78e3 size=340

void FUN_007a78e3(uint *param_1,uint *param_2,uint param_3,code *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_fc [30];
  uint local_84 [30];
  uint local_c;
  int local_8;
  
  if ((param_2 < 2) || (param_3 == 0)) {
    return;
  }
  local_8 = 0;
  iVar4 = (int)param_2 - 1;
  param_2 = local_fc;
  uVar5 = iVar4 * param_3 + (int)param_1;
  uVar3 = (uint)param_1;
  param_1 = local_84;
LAB_007a7922:
  uVar2 = (uVar5 - uVar3) / param_3 + 1;
  if (8 < uVar2) {
    FUN_007a7a85((uVar2 >> 1) * param_3 + uVar3,uVar3,param_3);
    uVar2 = param_3 + uVar5;
    local_c = uVar3;
LAB_007a7979:
    local_c = local_c + param_3;
    if (local_c <= uVar5) goto code_r0x007a7986;
    goto LAB_007a7991;
  }
  FUN_007a7a37(uVar3,uVar5,param_3,param_4);
  goto LAB_007a7941;
code_r0x007a7986:
  iVar4 = (*param_4)(local_c,uVar3);
  if (iVar4 < 1) goto LAB_007a7979;
LAB_007a7991:
  do {
    uVar2 = uVar2 - param_3;
    if (uVar2 <= uVar3) break;
    iVar4 = (*param_4)(uVar2,uVar3);
  } while (-1 < iVar4);
  if (local_c <= uVar2) {
    FUN_007a7a85(local_c,uVar2,param_3);
    goto LAB_007a7979;
  }
  FUN_007a7a85(uVar3,uVar2,param_3);
  uVar1 = local_c;
  if ((int)((uVar2 - uVar3) + -1) < (int)(uVar5 - local_c)) {
    if (local_c < uVar5) {
      local_8 = local_8 + 1;
      *param_2 = local_c;
      *param_1 = uVar5;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    if (param_3 + uVar3 < uVar2) {
      uVar5 = uVar2 - param_3;
      goto LAB_007a7922;
    }
  }
  else {
    if (uVar3 + param_3 < uVar2) {
      local_8 = local_8 + 1;
      *param_2 = uVar3;
      *param_1 = uVar2 - param_3;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    uVar3 = uVar1;
    if (uVar1 < uVar5) goto LAB_007a7922;
  }
LAB_007a7941:
  local_8 = local_8 + -1;
  param_2 = param_2 + -1;
  param_1 = param_1 + -1;
  if (local_8 < 0) {
    return;
  }
  uVar5 = *param_1;
  uVar3 = *param_2;
  goto LAB_007a7922;
}


