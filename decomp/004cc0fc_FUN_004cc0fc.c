// FUN_004cc0fc @ 4cc0fc size=354

float10 __fastcall FUN_004cc0fc(int param_1)

{
  bool bVar1;
  int iVar2;
  int *local_14;
  int *local_c;
  
  if ((((*(char *)(param_1 + 0x67) == *(char *)(DAT_00893530 + 0x15)) &&
       (*(char *)(param_1 + 0x68) == *(char *)(DAT_00893530 + 0x16))) &&
      (*(short *)(param_1 + 0x6a) == *(short *)(DAT_00893530 + 0x18))) &&
     (*(char *)(param_1 + 0x66) == *(char *)(DAT_00893530 + 0x14))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x62) = 0;
    for (local_c = *(int **)(param_1 + 0x2c); iVar2 = DAT_00893530, local_c != (int *)0x0;
        local_c = (int *)local_c[2]) {
      for (local_14 = *(int **)(*(int *)(*local_c + 0x1c2) + 4); local_14 != (int *)0x0;
          local_14 = (int *)local_14[2]) {
        iVar2 = (**(code **)(*(int *)(*local_14 + 0x22) + 4))();
        *(float *)(param_1 + 0x62) = (float)iVar2 + *(float *)(param_1 + 0x62);
      }
    }
    *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)(DAT_00893530 + 0x14);
    *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)(iVar2 + 0x18);
  }
  return (float10)*(float *)(param_1 + 0x62);
}


