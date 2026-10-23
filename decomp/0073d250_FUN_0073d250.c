// FUN_0073d250 @ 73d250 size=395

undefined4 __thiscall FUN_0073d250(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  float10 fVar6;
  
  piVar2 = param_2;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 1;
  if (param_2[0x103] == 0x524) {
    fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
    *(float *)(param_1 + 0x1a) = (float)fVar6;
    return 0;
  }
  param_2 = (int *)0x0;
  do {
    while( true ) {
      while (iVar3 = FUN_00535490(), iVar3 != 1) {
        if (iVar3 == 2) {
          return 0;
        }
        piVar5 = (int *)FUN_00534391();
        if (*piVar5 == 4) {
          FUN_005343dc();
          return 0;
        }
      }
      iVar3 = piVar2[1];
      if (iVar3 == 0xec) break;
      if (iVar3 == 0xf8) {
        uVar4 = FUN_007a7b3c(piVar2 + 0x104);
        *(undefined4 *)(param_1 + 0x1e) = uVar4;
      }
      else if (iVar3 == 0x14e) {
        fVar6 = (float10)FUN_00429d80(piVar2 + 0x104);
        *(float *)(param_1 + 0x1a) = (float)fVar6;
      }
      else {
        FUN_00429a00(s_ERROR___Invalid_trigger_entry____00872b28,piVar2 + 2,*piVar2 + 0x216,
                     *(int *)(*piVar2 + 0x212) + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
    }
    piVar5 = piVar2 + 0x104;
    if (param_2 == (int *)0x0) {
      iVar3 = FUN_004af6b0(piVar5);
      *(int *)(param_1 + 0x12) = iVar3;
      if (((DAT_00dc4b5e != '\0') && (iVar3 == 0)) && (piVar2[0x103] != 0x524)) {
        iVar3 = *piVar2;
        iVar1 = *(int *)(iVar3 + 0x212);
        goto LAB_0073d394;
      }
    }
    else {
      iVar3 = FUN_004af6b0(piVar5);
      *(int *)(param_1 + 0x16) = iVar3;
      if (((DAT_00dc4b5e != '\0') && (iVar3 == 0)) && (piVar2[0x103] != 0x524)) {
        iVar3 = *piVar2;
        iVar1 = *(int *)(iVar3 + 0x212);
LAB_0073d394:
        FUN_00429a00(s_ERROR___Invalid_country_TAG___s__00872ad8,piVar5,piVar2 + 2,iVar3 + 0x216,
                     iVar1 + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
    }
    param_2 = (int *)((int)param_2 + 1);
  } while( true );
}


