// FUN_00737b30 @ 737b30 size=694

undefined4 __thiscall FUN_00737b30(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_2[0x103] == 0x524) {
    uVar2 = FUN_007a7b3c(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0x12) = uVar2;
    return 0;
  }
LAB_00737b7d:
  while (iVar3 = FUN_00535490(), iVar3 != 1) {
    if (iVar3 == 2) {
      return 2;
    }
    piVar4 = (int *)FUN_00534391();
    if (*piVar4 == 4) {
      FUN_005343dc();
      return 0;
    }
  }
  iVar3 = param_2[1];
  if (iVar3 < 0x346) {
    if (iVar3 == 0x345) {
      if (param_2[0x103] == 0x524) {
        iVar3 = FUN_007a7b3c(param_2 + 0x104);
        if (iVar3 == 0) {
          *(undefined1 *)(param_1 + 0x1a) = 1;
          goto LAB_00737b7d;
        }
        if (iVar3 == 1) {
          *(undefined1 *)(param_1 + 0x1a) = 0;
          goto LAB_00737b7d;
        }
      }
    }
    else {
      if (iVar3 == 0xec) {
        piVar4 = param_2 + 0x104;
        uVar2 = FUN_004af6b0(piVar4);
        *(undefined4 *)(param_1 + 0x1e) = uVar2;
        if (((DAT_00dc4b5e != '\0') && (iVar3 = FUN_004af6b0(piVar4), iVar3 == 0)) &&
           (param_2[0x103] != 0x524)) {
          FUN_00429a00(s_ERROR___Invalid_country_TAG___s__00872ad8,piVar4,param_2 + 2,
                       *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        goto LAB_00737b7d;
      }
      if (iVar3 != 0x141) {
        if (iVar3 != 0x23c) goto LAB_00737ce5;
        if (param_2[0x103] != 0x524) goto LAB_00737d7c;
        uVar2 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x12) = uVar2;
        goto LAB_00737b7d;
      }
      if (param_2[0x103] == 0x524) {
        iVar3 = FUN_007a7b3c(param_2 + 0x104);
        if (iVar3 == 0) {
          *(undefined4 *)(param_1 + 0x16) = 0;
          goto LAB_00737b7d;
        }
        if (iVar3 == 1) {
          *(undefined4 *)(param_1 + 0x16) = 1;
          goto LAB_00737b7d;
        }
      }
    }
  }
  else {
    if (iVar3 == 0x346) {
      if (param_2[0x103] != 0x524) {
LAB_00737d7c:
        iVar3 = *param_2;
        iVar1 = *(int *)(iVar3 + 0x212);
        goto LAB_00737d97;
      }
      iVar3 = FUN_007a7b3c(param_2 + 0x104);
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 0x1b) = 1;
      }
      else {
        if (iVar3 != 1) goto LAB_00737d7c;
        *(undefined1 *)(param_1 + 0x1b) = 0;
      }
      goto LAB_00737b7d;
    }
    if (iVar3 != 0x3e4) {
LAB_00737ce5:
      FUN_00429a00(s_ERROR___Invalid_trigger_entry____00872b28,param_2 + 2,*param_2 + 0x216,
                   *(int *)(*param_2 + 0x212) + 1);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
      goto LAB_00737b7d;
    }
    if (param_2[0x103] != 0x524) goto LAB_00737c0e;
    iVar3 = FUN_007a7b3c(param_2 + 0x104);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0x1c) = 0;
      goto LAB_00737b7d;
    }
    if (iVar3 == 1) {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      goto LAB_00737b7d;
    }
  }
LAB_00737c0e:
  iVar3 = *param_2;
  iVar1 = *(int *)(iVar3 + 0x212);
LAB_00737d97:
  FUN_00429a00(s_ERROR___Invalid_value___s__for_t_008730f0,param_2 + 0x104,param_2 + 2,iVar3 + 0x216
               ,iVar1 + 1);
  DAT_00dc4b60 = DAT_00dc4b60 + 1;
  goto LAB_00737b7d;
}


