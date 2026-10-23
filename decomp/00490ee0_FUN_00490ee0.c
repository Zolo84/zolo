// FUN_00490ee0 @ 490ee0 size=109

undefined4 FUN_00490ee0(int param_1)

{
  int iVar1;
  
  FUN_004e9370(*(undefined4 *)(*(int *)(param_1 + 4) + 0x12));
  iVar1 = *(int *)(param_1 + 4);
  switch(*(undefined4 *)(iVar1 + 0xe)) {
  case 0:
    FUN_004ee0b0(*(undefined4 *)(iVar1 + 0x16));
    return 3;
  case 1:
    FUN_004ee050(*(undefined4 *)(iVar1 + 0x16));
    return 3;
  case 2:
    FUN_004edff0(*(undefined4 *)(iVar1 + 0x16));
    return 3;
  case 3:
    FUN_004ee110(*(undefined4 *)(iVar1 + 0x16));
  }
  return 3;
}


