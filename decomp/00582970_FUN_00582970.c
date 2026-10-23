// FUN_00582970 @ 582970 size=166

void __fastcall FUN_00582970(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_8;
  int local_4;
  
  WaitForSingleObjectEx(*(HANDLE *)((int)param_1 + 0x12),0xffffffff,0);
  puVar4 = (undefined4 *)param_1[1];
  if (puVar4 == (undefined4 *)0x0) {
    ReleaseMutex(*(HANDLE *)((int)param_1 + 0x12));
    return;
  }
  FUN_004d8af0(&local_8);
  local_8 = local_8 + *(int *)(DAT_00a98460 + 4) / 2;
  local_4 = local_4 + *(int *)(DAT_00a98460 + 8) / 2;
  do {
    puVar1 = (undefined4 *)puVar4[2];
    uVar2 = *puVar4;
    iVar3 = FUN_00582800(local_8,local_4);
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0x18))(uVar2);
      FUN_00796cd8(uVar2);
    }
    puVar4 = puVar1;
  } while (puVar1 != (undefined4 *)0x0);
  ReleaseMutex(*(HANDLE *)((int)param_1 + 0x12));
  return;
}


