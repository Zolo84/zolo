// FUN_00712010 @ 712010 size=120

void __thiscall FUN_00712010(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  char cVar3;
  
  cVar3 = FUN_0042dd70((undefined4 *)(param_1 + 0x1240));
  if (cVar3 != '\0') {
    *param_2 = *(undefined4 *)(param_1 + 0x1246);
    *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 0x124a);
    return;
  }
  uVar1 = *(undefined2 *)(param_1 + 0x1244);
  uVar2 = *(undefined4 *)(param_1 + 0x1240);
  FUN_0042dc20(*(undefined4 *)(param_1 + 0x1252));
  *param_2 = uVar2;
  *(undefined2 *)(param_2 + 1) = uVar1;
  return;
}


