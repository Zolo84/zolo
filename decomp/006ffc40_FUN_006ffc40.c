// FUN_006ffc40 @ 6ffc40 size=254

void __fastcall FUN_006ffc40(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 9999;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[1] = &PTR_LAB_007ef1f8;
  puVar1 = (undefined2 *)((int)param_1 + 0x16);
  do {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = param_1 + 0x3a9c;
  iVar3 = 9999;
  do {
    *(undefined2 *)puVar2 = 0;
    *(undefined4 *)((int)puVar2 + 2) = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 6);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)param_1 + 0x1d4d6) = 0;
  *(undefined4 *)((int)param_1 + 0x1d4da) = 0;
  *(undefined4 *)((int)param_1 + 0x1d4de) = 0;
  *(undefined1 *)((int)param_1 + 0x1d4e2) = 0;
  *(undefined ***)((int)param_1 + 0x1d4d2) = &PTR_LAB_007e3b70;
  param_1[0x753a] = 0;
  param_1[0x753b] = 0;
  param_1[0x753c] = 0;
  *(undefined1 *)(param_1 + 0x753d) = 0;
  param_1[0x7539] = &PTR_LAB_007e4a74;
  *(undefined4 *)((int)param_1 + 0x1d4fa) = 0;
  *(undefined4 *)((int)param_1 + 0x1d4fe) = 0;
  *(undefined4 *)((int)param_1 + 0x1d502) = 0;
  *(undefined1 *)((int)param_1 + 0x1d506) = 0;
  *(undefined ***)((int)param_1 + 0x1d4f6) = &PTR_LAB_007e4a74;
  param_1[0x7543] = 0;
  param_1[0x7544] = 0;
  param_1[0x7545] = 0;
  *(undefined1 *)(param_1 + 0x7546) = 0;
  param_1[0x7542] = &PTR_LAB_007f7164;
  *(undefined4 *)((int)param_1 + 0x1d51e) = 0;
  *(undefined4 *)((int)param_1 + 0x1d522) = 0;
  *(undefined4 *)((int)param_1 + 0x1d526) = 0;
  *(undefined1 *)((int)param_1 + 0x1d52a) = 0;
  *(undefined ***)((int)param_1 + 0x1d51a) = &PTR_LAB_007ef1f8;
  *param_1 = &PTR_FUN_007f8534;
  *(undefined4 *)((int)param_1 + 0x1d4ca) = 0;
  *(undefined4 *)((int)param_1 + 0x1d4ce) = 0;
  return;
}


