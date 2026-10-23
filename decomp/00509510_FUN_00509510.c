// FUN_00509510 @ 509510 size=138

void __fastcall FUN_00509510(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0051d5c0();
  if (((cVar1 == '\0') && (*(int *)(param_1 + 0x2ae) == 0)) && (*(char *)(param_1 + 0x17b) == '\0'))
  {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x11c) + 4))();
    if (iVar2 == 0) {
      cVar1 = FUN_0044beb0();
      if (cVar1 != '\0') {
        iVar2 = FUN_00522770();
        *(float *)(param_1 + 0x29e) = *(float *)(iVar2 + 0x3826) + *(float *)(param_1 + 0x29e);
        iVar2 = FUN_00522770();
        if (*(float *)(iVar2 + 0x3822) < *(float *)(param_1 + 0x29e)) {
          iVar2 = FUN_00522770();
          *(undefined4 *)(param_1 + 0x29e) = *(undefined4 *)(iVar2 + 0x3822);
        }
      }
    }
  }
  return;
}


