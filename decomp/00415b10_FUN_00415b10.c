// FUN_00415b10 @ 415b10 size=60

void __fastcall FUN_00415b10(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x22) + 1;
  *(int *)((int)param_1 + 0x22) = iVar1;
  if ((*(int *)((int)param_1 + 0x26) <= iVar1) && (*(int *)((int)param_1 + 0x26) != 0)) {
    iVar1 = (*(int *)((int)param_1 + 0x52) + 1) % *(int *)((int)param_1 + 0x4e);
    (**(code **)(*param_1 + 0x38))(iVar1);
    *(undefined4 *)((int)param_1 + 0x22) = 0;
    if (iVar1 == 0) {
      *(undefined1 *)((int)param_1 + 0x67) = 1;
    }
  }
  return;
}


