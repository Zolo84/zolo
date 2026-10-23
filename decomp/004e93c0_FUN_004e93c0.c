// FUN_004e93c0 @ 4e93c0 size=121

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004e93c0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  
  piVar3 = param_1;
  cVar4 = (**(code **)(*param_1 + 0x28))();
  if ((cVar4 != '\0') && (bVar6 = param_1 != (int *)0x0, param_1 = (int *)0x0, bVar6)) {
    iVar5 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
    if (iVar5 != 0) {
      puVar2 = *(undefined4 **)((int)piVar3 + 0x26);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar2[2];
        fVar7 = (float10)FUN_004e9530(*puVar2);
        param_1 = (int *)(float)(fVar7 + (float10)(float)param_1);
        puVar2 = puVar1;
      }
      iVar5 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
      return (float10)(float)param_1 / (float10)iVar5;
    }
  }
  return (float10)_DAT_007e3380;
}


