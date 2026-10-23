// FUN_007a562e @ 7a562e size=360

int FUN_007a562e(char *param_1,undefined4 *param_2,uint param_3)

{
  LONG LVar1;
  undefined2 extraout_var;
  undefined2 uVar4;
  uint uVar2;
  char *pcVar3;
  undefined2 *puVar5;
  bool bVar6;
  int local_c;
  char acStack_7 [3];
  
  puVar5 = (undefined2 *)*param_2;
  local_c = 0;
  LVar1 = InterlockedIncrement(&DAT_00dc5c70);
  bVar6 = DAT_00dc5c6c == 0;
  uVar4 = (short)((uint)LVar1 >> 0x10);
  if (!bVar6) {
    InterlockedDecrement(&DAT_00dc5c70);
    FUN_007aae71(0x13);
    uVar4 = extraout_var;
  }
  if (param_1 == (char *)0x0) {
    uVar2 = FUN_007a5548(acStack_7 + 1,CONCAT22(uVar4,*puVar5),0,0);
    if (0 < (int)uVar2) {
      do {
        if (acStack_7[uVar2] == '\0') {
LAB_007a5762:
          if (bVar6) {
            InterlockedDecrement(&DAT_00dc5c70);
          }
          else {
            FUN_007aaed2(0x13);
          }
          return (uVar2 - 1) + local_c;
        }
        local_c = local_c + uVar2;
        puVar5 = puVar5 + 1;
        uVar2 = FUN_007a5548(acStack_7 + 1,CONCAT22((short)((uint)acStack_7 >> 0x10),*puVar5),0,0);
      } while (0 < (int)uVar2);
    }
    if (bVar6) {
      InterlockedDecrement(&DAT_00dc5c70);
    }
    else {
      FUN_007aaed2(0x13);
    }
    local_c = -1;
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - uVar2) {
      pcVar3 = acStack_7 + 1;
      if (DAT_0087cfdc <= param_3) {
        pcVar3 = param_1;
      }
      uVar2 = FUN_007a5548(pcVar3,*puVar5,0,0);
      if ((int)uVar2 < 1) {
        local_c = -1;
        break;
      }
      if (param_1 != pcVar3) {
        if (param_3 < uVar2) break;
        FUN_007a71b0(param_1,acStack_7 + 1,uVar2);
      }
      param_1 = param_1 + uVar2;
      if (param_1[-1] == '\0') {
        *param_2 = 0;
        goto LAB_007a5762;
      }
      local_c = local_c + uVar2;
      puVar5 = puVar5 + 1;
    }
    if (bVar6) {
      InterlockedDecrement(&DAT_00dc5c70);
    }
    else {
      FUN_007aaed2(0x13);
    }
    *param_2 = puVar5;
  }
  return local_c;
}


