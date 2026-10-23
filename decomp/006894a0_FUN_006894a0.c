// FUN_006894a0 @ 6894a0 size=295

undefined4 __thiscall FUN_006894a0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  
  cVar5 = FUN_004a0b90(param_2);
  if ((cVar5 != '\0') && (DAT_0087b631 != '\0')) {
    return 1;
  }
  if (((&DAT_00dc0fd4)[param_2] != 0) ||
     (((&DAT_0089cad8)[param_2] != 0 && (cVar5 = FUN_006a8720(), cVar5 != '\0')))) {
    return 0;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x120);
  puVar4 = *(undefined4 **)(iVar6 + 0x9b4);
  do {
    if (puVar4 == (undefined4 *)0x0) goto LAB_0068951e;
    piVar1 = (int *)*puVar4;
    puVar4 = (undefined4 *)puVar4[2];
  } while (param_2 != *piVar1);
  iVar7 = _rand();
  if ((piVar1[1] <= iVar7 % 100) && (iVar7 = _rand(), piVar1[1] <= iVar7 % 100)) {
LAB_0068951e:
    piVar1 = *(int **)(iVar6 + 0x9a2);
    do {
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      piVar2 = (int *)piVar1[2];
      piVar3 = (int *)*piVar1;
      piVar1 = piVar2;
    } while (((*piVar3 != param_2) || (iVar6 = FUN_005862f0(param_2), iVar6 == 0)) ||
            (piVar3[1] <=
             (((((int)*(short *)(DAT_00893530 + 0x18) - (int)*(short *)(iVar6 + 0x1a)) * 0xc -
               (int)*(char *)(iVar6 + 0x18)) + (int)*(char *)(DAT_00893530 + 0x16)) * 0x1e -
             (int)*(char *)(iVar6 + 0x17)) + (int)*(char *)(DAT_00893530 + 0x15)));
  }
  return 1;
}


