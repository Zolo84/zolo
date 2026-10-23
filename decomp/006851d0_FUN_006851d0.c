// FUN_006851d0 @ 6851d0 size=494

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_006851d0(int param_1,int *param_2,int *param_3,int param_4,float param_5,int param_6,
            undefined4 param_7,int param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_retaddr;
  float fStack_8;
  
  cVar3 = (**(code **)(*param_3 + 0x24))(param_2);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_3 + 0x24))(param_2);
    if (cVar3 != '\0') {
      return;
    }
  }
  else {
    if (*(int *)((int)param_2 + 0x6a) <= param_8) {
      return;
    }
    (**(code **)(*param_3 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  fStack_8 = param_5;
  if (param_4 == 1) {
    fStack_8 = (float)param_2[0xc];
  }
  else {
    if (param_4 == 3) {
      fStack_8 = _DAT_007e3374 - (float)param_2[0xc] / (float)param_2;
      goto LAB_0068526a;
    }
    if (param_4 == 2) {
      fStack_8 = (float)param_2[0xd];
    }
    else {
      if (param_4 != 4) goto LAB_0068526a;
      fStack_8 = (float)param_2[5];
    }
  }
  fStack_8 = fStack_8 / (float)param_2;
LAB_0068526a:
  iVar7 = *(int *)(param_1 + 0xa4);
  iVar6 = param_2[1];
  iVar8 = 0;
  while (iVar7 != 0) {
    puVar4 = (undefined4 *)FUN_00498700(&stack0xffffffec,0);
    iVar5 = *(int *)*puVar4;
    cVar3 = (**(code **)(*(int *)(iVar5 + 0x22e) + 8))();
    if (((cVar3 != '\0') && (*(char *)(iVar5 + 0x17b) == '\0')) && (*(int *)(iVar5 + 0xc) == iVar6))
    {
      iVar5 = (**(code **)(*(int *)(iVar5 + 0x22) + 4))();
      iVar8 = iVar8 + iVar5;
    }
  }
  iVar7 = param_2[4];
  if (iVar8 <= param_2[4]) {
    iVar7 = iVar8;
  }
  if ((_DAT_007e3380 < (float)iVar7 / (float)(int)param_3 - fStack_8) &&
     (iVar7 = param_2[3], 0 < iVar7)) {
    iVar6 = __ftol();
    if ((DAT_00dc15fc * DAT_00dc15cc < iVar7) &&
       (iVar7 = iVar7 - DAT_00dc15fc * DAT_00dc15cc, iVar6 < iVar7)) {
      iVar6 = iVar7;
    }
    if (0 < iVar6) {
      *(int *)((int)param_2 + 0x6a) = param_6;
      for (piVar1 = *(int **)(param_1 + 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
        if (param_6 < *(int *)(*piVar1 + 0x6a)) {
          FUN_0068ab50(param_2,piVar1);
          goto LAB_0068536c;
        }
      }
      FUN_0068ab00(param_2);
    }
  }
LAB_0068536c:
  FUN_0068ab00(param_2);
  if ((undefined4 *)param_2[0x17] != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)param_2[0x17];
    do {
      puVar2 = (undefined4 *)puVar4[2];
      FUN_006851d0(*puVar4,param_1,unaff_retaddr,param_2,param_3,param_4,param_5,param_6 + 1);
      puVar4 = puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return;
}


