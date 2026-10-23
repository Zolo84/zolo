// FUN_005225f0 @ 5225f0 size=59

void __fastcall FUN_005225f0(int param_1)

{
  char cVar1;
  int iVar2;
  
  FUN_0040d3e0();
  iVar2 = *(int *)(param_1 + 0x1f0);
  cVar1 = (**(code **)(*(int *)(iVar2 + 0xc) + 8))();
  if (cVar1 == '\0') {
    iVar2 = **(int **)(iVar2 + 0x10);
  }
  else {
    iVar2 = 0;
  }
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0xc) == '\0')) {
    *(undefined1 *)(iVar2 + 0xc) = 1;
  }
  return;
}


