// FUN_006a2e90 @ 6a2e90 size=70

void __thiscall FUN_006a2e90(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x244))();
  (**(code **)(*piVar1 + 0x18))(param_2);
  if (((*(char *)((int)param_1 + 0xe) != '\0') && ((char)param_1[4] == '\0')) &&
     (*(char *)((int)param_1 + 0xf) == '\0')) {
    (**(code **)(*param_1 + 0x214))();
    (**(code **)(*param_1 + 0x240))();
  }
  return;
}


