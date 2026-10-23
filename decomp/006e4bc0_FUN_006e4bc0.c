// FUN_006e4bc0 @ 6e4bc0 size=267

int __thiscall FUN_006e4bc0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x58))(param_2);
  if (iVar2 != 0) {
    FUN_006e4fe0();
    return 3;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 100) + 4))(param_2);
  if (*(char *)(*(int *)(param_1 + 100) + 0x96) != '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0xb) = *(undefined1 *)(*(int *)(param_1 + 0x7c) + 9);
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 10) = *(undefined1 *)(*(int *)(param_1 + 0x7c) + 8);
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0xf) =
         *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0xe);
    iVar1 = *(int *)(param_1 + 0x7c);
    if (*(char *)(iVar1 + 0xf) == '\0') {
      if (*(char *)(iVar1 + 0xb) == '\0') {
        uVar3 = 1;
      }
      else if (*(char *)(iVar1 + 10) == '\0') {
        uVar3 = 2;
      }
      else {
        uVar3 = 3;
      }
    }
    else {
      uVar3 = 4;
    }
    FUN_0043fcc0(uVar3);
  }
  if (iVar2 == 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x5c) + 4))(param_2);
  }
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x96) != '\0') {
    return 1;
  }
  if (iVar2 == 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x60) + 4))(param_2);
  }
  if (*(char *)(*(int *)(param_1 + 0x60) + 0x96) != '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0xb) =
         *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0xd);
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 10) = *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0xc)
    ;
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0xf) =
         *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0x10);
    return 1;
  }
  if (iVar2 == 0) {
    iVar2 = FUN_00442310(param_2);
    return iVar2;
  }
  return iVar2;
}


