// FUN_004bc510 @ 4bc510 size=231

undefined4 FUN_004bc510(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  do {
    while (iVar2 = FUN_00535490(), iVar2 != 1) {
      piVar4 = (int *)FUN_00534391();
      if (*piVar4 == 4) {
        FUN_005343dc();
        return 0;
      }
    }
    iVar2 = FUN_004af6b0(param_1 + 8);
    if (iVar2 == 0) {
      FUN_005349b0(s_illegal_tag_0083f21c);
      return 0xfffffffe;
    }
    iVar3 = FUN_007a7b3c(param_1 + 0x410);
    puVar1 = *(undefined4 **)(param_3 + 4);
    while (puVar1 != (undefined4 *)0x0) {
      piVar4 = (int *)*puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      if (*piVar4 == iVar2) goto LAB_004bc59d;
    }
    piVar4 = operator_new(300);
    *piVar4 = iVar2;
    piVar5 = piVar4;
    for (iVar2 = 0x25; piVar5 = piVar5 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = 0;
    }
    piVar5 = piVar4 + 0x26;
    for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    FUN_004c1120(piVar4);
LAB_004bc59d:
    if (iVar3 < 0) {
      piVar4[param_2 + 0x26] = -iVar3;
    }
    else {
      piVar4[param_2 + 1] = iVar3;
    }
  } while( true );
}


