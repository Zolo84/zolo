// FUN_00691910 @ 691910 size=179

void __thiscall FUN_00691910(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(int *)(param_3 + 0x3d4) == *(int *)(param_1 + 10)) {
      FUN_004ce950(param_3);
      *(int *)(param_3 + 0x486) = param_1;
      if ((*(char *)(param_1 + 0xe) != '\0') &&
         (*(int *)(param_3 + 0x3d8) == *(int *)(param_1 + 10))) {
        iVar2 = FUN_004a2f80(*(undefined4 *)(param_3 + 0x12));
        if (0 < iVar2) {
          cVar1 = (**(code **)(*(int *)(param_1 + 0x11a) + 8))();
          if (cVar1 == '\0') {
            FUN_00691d40(8);
          }
          if (*(int *)(param_3 + 0x46a) != 0) {
            cVar1 = (**(code **)(*(int *)(param_1 + 300) + 8))();
            if (cVar1 == '\0') {
              FUN_00691d40(9);
              return;
            }
          }
        }
      }
    }
    else if (param_2 == *(int *)(param_1 + 10)) {
      (**(code **)(*(int *)(param_1 + 0x244) + 0x18))(param_3);
    }
  }
  return;
}


