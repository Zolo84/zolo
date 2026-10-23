// FUN_004a5b20 @ 4a5b20 size=45

undefined4 FUN_004a5b20(int *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
    if (DAT_00dc1614 <= iVar2) {
      return 0;
    }
  }
  return 1;
}


