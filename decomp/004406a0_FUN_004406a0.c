// FUN_004406a0 @ 4406a0 size=50

void __fastcall FUN_004406a0(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x82) != '\0') {
    piVar1 = *(int **)(param_1 + 0x8c);
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
  }
  return;
}


