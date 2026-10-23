// FUN_00691ac0 @ 691ac0 size=109

void __thiscall FUN_00691ac0(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*(char *)(param_1 + 0xe) != '\0') &&
     ((param_2 == *(int *)(param_1 + 10) || (param_3 == *(int *)(param_1 + 10))))) {
    cVar1 = FUN_0044beb0();
    if (cVar1 == '\0') {
      FUN_00693ee0();
      FUN_00468690(param_1 + 0x3c);
      uVar2 = FUN_00527b40();
      *(undefined4 *)(param_1 + 0x54) = uVar2;
      iVar3 = FUN_00527630(1);
      *(int *)(param_1 + 0x50) = iVar3 + *(int *)(param_1 + 0x54);
      FUN_00695a00();
      FUN_00691b30();
    }
  }
  return;
}


