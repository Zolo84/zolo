// FUN_00648550 @ 648550 size=141

int FUN_00648550(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = FUN_00581e60();
  uVar5 = *(undefined4 *)(iVar2 + 4);
  puVar3 = (undefined4 *)FUN_00581e60(uVar5);
  cVar1 = FUN_00442250(*puVar3,uVar5);
  if (cVar1 == '\0') {
    return 1;
  }
  iVar2 = FUN_00435680(param_1);
  if ((iVar2 == 0) && (iVar4 = (**(code **)(*param_1 + 8))(), iVar4 == 0xe)) {
    iVar4 = FUN_00581e60();
    uVar5 = *(undefined4 *)(iVar4 + 4);
    puVar3 = (undefined4 *)FUN_00581e60(uVar5);
    cVar1 = FUN_00442250(*puVar3,uVar5);
    if (cVar1 != '\0') {
      return 3;
    }
  }
  return iVar2;
}


