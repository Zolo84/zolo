// FUN_006ad1b0 @ 6ad1b0 size=71

void FUN_006ad1b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *unaff_EDI;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(&DAT_00d12700 + param_1 * 0x12);
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_006adcd0(*(undefined4 *)((int)&DAT_00d12704 + param_1 * 0x12));
  (**(code **)(iVar1 + 0x2c))(&param_1,uVar2,uVar3);
  if (unaff_EDI != (undefined4 *)0x0) {
    *unaff_EDI = 0;
  }
  return;
}


