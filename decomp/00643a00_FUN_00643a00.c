// FUN_00643a00 @ 643a00 size=160

undefined4 __thiscall FUN_00643a00(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_00433990(param_2);
  iVar3 = (**(code **)(*param_2 + 8))();
  if (iVar3 == 0x1b) {
    cVar1 = FUN_00433910();
    if (cVar1 == '\x01') {
      if (*(char *)(param_1 + 0x86) != '\0') {
        FUN_00433930();
        return uVar2;
      }
      iVar3 = *(int *)(param_1 + 0x454) + 1;
      *(int *)(param_1 + 0x454) = iVar3;
      iVar3 = iVar3 / 7;
      if (0 < iVar3) {
        while( true ) {
          iVar3 = iVar3 + -1;
          if (*(undefined4 **)(param_1 + 0x1aa) == (undefined4 *)0x0) break;
          (**(code **)**(undefined4 **)(param_1 + 0x1aa))(*(undefined4 *)(param_1 + 0x92));
          if (iVar3 < 1) {
            return uVar2;
          }
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x454) = 0;
    }
  }
  return uVar2;
}


