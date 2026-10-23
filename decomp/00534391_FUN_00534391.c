// FUN_00534391 @ 534391 size=75

int __fastcall FUN_00534391(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x210) == '\0') {
    uVar1 = FUN_005343dc();
    *(undefined4 *)(param_1 + 4) = uVar1;
    if (*(int *)(param_1 + 4) == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0x531;
    }
    *(undefined1 *)(param_1 + 0x210) = 1;
  }
  return param_1 + 0xc;
}


