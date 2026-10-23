// FUN_006ca0a0 @ 6ca0a0 size=182

undefined4 * __fastcall FUN_006ca0a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if (*(int *)(*piVar1 + 4) == 0xa4) {
      return (undefined4 *)*piVar1;
    }
  }
  puVar4 = operator_new(0x42);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_007f725c;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    *(undefined1 *)(puVar4 + 0x10) = 0;
  }
  puVar4[1] = 0xa4;
  iVar2 = *(int *)(param_1 + 0xc);
  puVar5 = operator_new(0xe);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = puVar4;
    puVar5[1] = iVar2;
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 3) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  *(undefined4 **)(param_1 + 0xc) = puVar5;
  *(int *)(param_1 + 0x10) = iVar3 + 1;
  if (iVar3 == 0) {
    *(undefined4 **)(param_1 + 8) = puVar5;
    return puVar4;
  }
  *(undefined4 **)(iVar2 + 8) = puVar5;
  return puVar4;
}


