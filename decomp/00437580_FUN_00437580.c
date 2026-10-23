// FUN_00437580 @ 437580 size=240

void __thiscall FUN_00437580(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  
  *(int *)(param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  if (*(char *)(param_1 + 0x34) != '\0') {
    iVar1 = **(int **)(param_1 + 0x24);
    iVar2 = FUN_00415bd0(param_3);
    iVar3 = FUN_00415bd0();
    (**(code **)(iVar1 + 0x18))((param_2 - iVar2) + iVar3);
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))(param_2,unaff_retaddr);
    (**(code **)(**(int **)(param_1 + 0x28) + 0x18))(0xfffffc18,0xfffffc18);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x18))(0xfffffc18,0xfffffc18);
    (**(code **)(**(int **)(param_1 + 0xc) + 0x34))(0xfffffc18,0xfffffc18);
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x24) + 0x18))(0xfffffc18,0xfffffc18);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))(0xfffffc18,0xfffffc18);
  iVar1 = **(int **)(param_1 + 0x28);
  iVar2 = FUN_00415bd0(param_3);
  iVar3 = FUN_00415bd0();
  (**(code **)(iVar1 + 0x18))((param_2 - iVar2) + iVar3);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x18))(param_2,unaff_EDI);
  (**(code **)(**(int **)(param_1 + 0xc) + 0x34))(param_2 + 4,unaff_EDI + 0x17);
  return;
}


