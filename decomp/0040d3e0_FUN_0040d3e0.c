// FUN_0040d3e0 @ 40d3e0 size=127

void __fastcall FUN_0040d3e0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 8))();
  if (cVar2 == '\0') {
    FUN_00796cd8(**(undefined4 **)(param_1 + 0x10));
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 != 0) {
      if (*(char *)(param_1 + 0x1c) == '\0') {
        iVar1 = *(int *)(iVar3 + 8);
        *(int *)(param_1 + 0x10) = iVar1;
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x14) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 4) = 0;
        }
        FUN_00796cd8(iVar3);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      }
      else {
        *(undefined1 *)(iVar3 + 0xc) = 1;
      }
    }
    iVar3 = *(int *)(param_1 + 0x26) + -0xc;
    *(int *)(param_1 + 0x26) = iVar3;
    *(int *)(param_1 + 0x32) = *(int *)(param_1 + 0x32) + 1;
    if (iVar3 < 1) {
      *(undefined4 *)(param_1 + 0x26) = 1;
    }
    FUN_0040d4a0();
  }
  return;
}


