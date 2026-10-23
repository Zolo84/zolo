// FUN_00697860 @ 697860 size=193

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00697860(int param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  undefined4 *puVar5;
  float10 fVar6;
  
  piVar1 = *(int **)(param_1 + 0x66);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    fVar6 = (float10)(**(code **)(iVar2 + 0xc))();
    (**(code **)(iVar2 + 0x1c))((float)(fVar6 + (float10)param_2));
    piVar1[6] = piVar1[6] + (int)param_2;
    return;
  }
  puVar5 = operator_new(0x1c);
  if (puVar5 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x66) = 0;
    FUN_00697260(6,0,1);
    return;
  }
  bVar3 = _DAT_007e3380 <= param_2;
  puVar5[1] = 6;
  puVar5[2] = param_1;
  *puVar5 = &PTR_LAB_007f46c0;
  fVar4 = _DAT_007e3380;
  if (bVar3) {
    fVar4 = param_2;
  }
  puVar5[3] = fVar4;
  puVar5[4] = param_5;
  puVar5[5] = param_4;
  puVar5[6] = param_3;
  *puVar5 = &PTR_FUN_007f4700;
  *(undefined4 **)(param_1 + 0x66) = puVar5;
  FUN_00697260(6,puVar5,1);
  return;
}


