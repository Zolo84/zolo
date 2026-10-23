// FUN_005125f0 @ 5125f0 size=99

void FUN_005125f0(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x212) != *(int *)(param_1 + 0xc)) {
    cVar1 = (**(code **)(*(int *)(param_1 + 0x22e) + 8))();
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*(int *)(param_1 + 0x11c) + 4))();
      if (((iVar2 == 0) && (*(char *)(param_1 + 0x17b) == '\0')) && (*(int *)(param_1 + 0x176) == 0)
         ) {
        FUN_00512660(param_1,*(undefined4 *)(param_1 + 0x212));
      }
    }
  }
  return;
}


