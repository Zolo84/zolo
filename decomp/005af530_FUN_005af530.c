// FUN_005af530 @ 5af530 size=377

undefined4 FUN_005af530(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 auStack_8 [8];
  
  piVar3 = param_2;
  if (param_2[0x99] == 2) {
    return 0;
  }
  cVar4 = (**(code **)(*param_2 + 0x30))();
  if (((cVar4 != '\0') && (param_2[0x99] != 9)) && (param_2[0x99] != 0x16)) {
    return 0;
  }
  cVar4 = (**(code **)(*param_2 + 0x30))();
  if ((cVar4 != '\0') &&
     (pcVar5 = (char *)FUN_0042e060(auStack_8,param_2 + 0x4d),
     (int)*pcVar5 + ((int)pcVar5[1] + ((int)pcVar5[2] + *(short *)(pcVar5 + 4) * 0xc) * 0x1e) * 0x18
     < 2)) {
    return 0;
  }
  piVar6 = param_2 + 0x48;
  param_2 = (int *)0x0;
  if ((int *)*piVar6 != (int *)0x0) {
    piVar6 = (int *)*piVar6;
    do {
      piVar1 = piVar6 + 2;
      if (*(int *)(*(int *)(*piVar6 + 0x78) + 0x12) == *(int *)(param_1 + 0x12)) {
        param_2 = (int *)*piVar6;
      }
      piVar6 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
  }
  puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x1c2) + 4);
  if (puVar8 == (undefined4 *)0x0) {
    return 0;
  }
  while( true ) {
    puVar2 = (undefined4 *)puVar8[2];
    piVar6 = (int *)*puVar8;
    if ((param_2 == (int *)0x0) && (cVar4 = FUN_00523c90(piVar6,0), cVar4 != '\0')) break;
    puVar8 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
  }
  cVar4 = (**(code **)(*piVar3 + 0x30))();
  if (cVar4 == '\0') {
    if ((*(int *)(param_1 + 0x254) == 8) || (*(int *)(param_1 + 0x254) == 9)) {
      (**(code **)(*piVar6 + 0x14))();
      (**(code **)(*piVar3 + 0x14))();
      uVar7 = 2;
    }
    else {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 3;
  }
  FUN_00428eb0(auStack_8);
  FUN_005b0540(param_1,uVar7,auStack_8,piVar3,piVar6);
  return uVar7;
}


