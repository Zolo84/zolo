// FUN_00415a60 @ 415a60 size=69

undefined4 __thiscall FUN_00415a60(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_2 + 8))();
  if ((((iVar2 == 0x1c) && (cVar1 = (**(code **)(*param_1 + 0x44))(), cVar1 != '\0')) &&
      ((**(code **)(*param_1 + 0x40))(*(undefined4 *)(param_2[1] + 0xe)),
      *(char *)((int)param_1 + 0x66) == '\x01')) && (*(char *)((int)param_1 + 0x67) == '\x01')) {
    return 1;
  }
  return 0;
}


