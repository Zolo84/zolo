// FUN_0075a2b0 @ 75a2b0 size=355

undefined4 __thiscall FUN_0075a2b0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined2 *puVar5;
  int *piVar6;
  int iVar7;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  bool bVar8;
  
  puVar5 = (undefined2 *)FUN_0044df10();
  piVar6 = (int *)FUN_004582e0(*puVar5,(short)((uint)*(undefined4 *)(puVar5 + 1) >> 0x10));
  cVar4 = (**(code **)(*piVar6 + 0x24))();
  if (cVar4 != '\0') {
    return 1;
  }
  puVar5 = (undefined2 *)FUN_0044df10();
  piVar6 = (int *)FUN_004582f0(*puVar5,(short)((uint)*(undefined4 *)(puVar5 + 1) >> 0x10));
  cVar4 = (**(code **)(*piVar6 + 0x24))();
  if (cVar4 != '\0') {
    return 2;
  }
  iVar7 = *(int *)(param_1 + 0x30);
  while (iVar7 != 0) {
    iVar2 = *(int *)(iVar7 + 10);
    FUN_00446d10((short)iVar7);
    piVar6 = (int *)FUN_004582e0(unaff_DI,unaff_SI);
    cVar4 = (**(code **)(*piVar6 + 0x24))();
    iVar7 = iVar2;
    if (cVar4 == '\0') {
      return 5;
    }
  }
  iVar7 = (**(code **)(*(int *)(param_1 + 0x3e) + 4))();
  bVar8 = iVar7 == 0;
  puVar5 = *(undefined2 **)(param_1 + 0x42);
  while (puVar5 != (undefined2 *)0x0) {
    puVar3 = *(undefined2 **)(puVar5 + 5);
    piVar6 = (int *)FUN_004582e0(*puVar5,(short)((uint)*(undefined4 *)(puVar5 + 1) >> 0x10));
    cVar4 = (**(code **)(*piVar6 + 0x24))();
    puVar5 = puVar3;
    if (cVar4 != '\0') {
      bVar8 = true;
    }
  }
  if (!bVar8) {
    return 5;
  }
  if (*(int **)(param_2 + 0x3654) != (int *)0x0) {
    piVar6 = *(int **)(param_2 + 0x3654);
    do {
      piVar1 = piVar6 + 2;
      if ((*(int *)(*(int *)(*piVar6 + 0x18) + 0xe) == *(int *)(param_1 + 0xe)) &&
         (*(short *)(*(int *)(*piVar6 + 0x18) + 0xc) == *(short *)(param_1 + 0xc))) {
        return 6;
      }
      piVar6 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
  }
  return 0;
}


