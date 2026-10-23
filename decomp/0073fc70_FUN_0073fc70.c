// FUN_0073fc70 @ 73fc70 size=404

undefined4 __thiscall FUN_0073fc70(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = param_2;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_2[0x103] == 0x524) {
    uVar3 = FUN_007a7b3c(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0x22) = uVar3;
    return 0;
  }
  param_2 = (int *)0x0;
  do {
    while( true ) {
      while (iVar4 = FUN_00535490(), iVar4 != 1) {
        if (iVar4 == 2) {
          return 0;
        }
        piVar5 = (int *)FUN_00534391();
        if (*piVar5 == 4) {
          FUN_005343dc();
          return 0;
        }
      }
      iVar4 = piVar2[1];
      if (iVar4 == 0xec) break;
      if (iVar4 == 0xf8) {
        uVar3 = FUN_007a7b3c(piVar2 + 0x104);
        *(undefined4 *)(param_1 + 0x22) = uVar3;
      }
      else if (iVar4 == 0x346) {
        uVar3 = FUN_007a7b3c(piVar2 + 0x104);
        *(undefined4 *)(param_1 + 0x1e) = uVar3;
      }
      else {
        FUN_00429a00(s_ERROR___Invalid_trigger_entry____00872b28,piVar2 + 2,*piVar2 + 0x216,
                     *(int *)(*piVar2 + 0x212) + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
    }
    piVar5 = piVar2 + 0x104;
    if (param_2 == (int *)0x0) {
      iVar4 = FUN_004af6b0(piVar5);
      *(int *)(param_1 + 0x12) = iVar4;
      *(int *)(param_1 + 0x1a) = iVar4;
      if (((DAT_00dc4b5e != '\0') && (iVar4 == 0)) && (piVar2[0x103] != 0x524)) {
        iVar4 = *piVar2;
        iVar1 = *(int *)(iVar4 + 0x212);
        goto LAB_0073fdbd;
      }
    }
    else {
      iVar4 = FUN_004af6b0(piVar5);
      *(int *)(param_1 + 0x16) = iVar4;
      if (((DAT_00dc4b5e != '\0') && (iVar4 == 0)) && (piVar2[0x103] != 0x524)) {
        iVar4 = *piVar2;
        iVar1 = *(int *)(iVar4 + 0x212);
LAB_0073fdbd:
        FUN_00429a00(s_ERROR___Invalid_country_TAG___s__00872ad8,piVar5,piVar2 + 2,iVar4 + 0x216,
                     iVar1 + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
    }
    param_2 = (int *)((int)param_2 + 1);
  } while( true );
}


