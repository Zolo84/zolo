// FUN_006a4d10 @ 6a4d10 size=74

bool __fastcall FUN_006a4d10(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x8c) + 0x3d8) == 0) {
    return true;
  }
  uVar2 = FUN_006a9d50();
  cVar1 = FUN_0044b280(uVar2);
  if (cVar1 == '\0') {
    return true;
  }
  cVar1 = FUN_004a3020(*(undefined4 *)(param_1 + 0x8c),0);
  return cVar1 == '\0';
}


