// FUN_006975f0 @ 6975f0 size=178

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006975f0(int param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  undefined4 *puVar4;
  float10 fVar5;
  
  if (*(int **)(param_1 + 0x62) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x62);
    fVar5 = (float10)(**(code **)(iVar1 + 0xc))();
    (**(code **)(iVar1 + 0x1c))((float)(fVar5 + (float10)param_2));
    return;
  }
  puVar4 = operator_new(0x1a);
  if (puVar4 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x62) = 0;
    FUN_00697260(5,0,1);
    return;
  }
  bVar2 = _DAT_007e3380 <= param_2;
  puVar4[1] = 5;
  puVar4[2] = param_1;
  *puVar4 = &PTR_LAB_007f46c0;
  fVar3 = _DAT_007e3380;
  if (bVar2) {
    fVar3 = param_2;
  }
  puVar4[3] = fVar3;
  puVar4[4] = param_4;
  puVar4[5] = param_3;
  *(undefined1 *)(puVar4 + 6) = 0;
  *puVar4 = &PTR_LAB_007f46a0;
  *(undefined4 **)(param_1 + 0x62) = puVar4;
  FUN_00697260(5,puVar4,1);
  return;
}


