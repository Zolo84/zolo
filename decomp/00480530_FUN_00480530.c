// FUN_00480530 @ 480530 size=167

undefined4 __thiscall FUN_00480530(int param_1,int param_2)

{
  undefined2 uVar1;
  float fVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  
  iVar5 = FUN_004e9370(*(undefined4 *)(*(int *)(param_2 + 4) + 0xe));
  if (*(int *)(iVar5 + 0x3d4) != param_1) {
    fVar2 = *(float *)(iVar5 + 0x21e);
    uVar3 = *(undefined4 *)(iVar5 + 0x3c8);
    uVar1 = *(undefined2 *)(iVar5 + 0x3cc);
    FUN_004e7190(param_1,1);
    *(undefined4 *)(iVar5 + 0x3c8) = uVar3;
    *(undefined2 *)(iVar5 + 0x3cc) = uVar1;
    cVar4 = FUN_004e8ab0(*(undefined4 *)(iVar5 + 0x3d4));
    if (cVar4 != '\0') {
      *(undefined4 *)(iVar5 + 0x21e) = 0;
      return 3;
    }
    if (DAT_0087758c < fVar2) {
      fVar2 = DAT_0087758c;
    }
    *(float *)(iVar5 + 0x21e) = fVar2;
  }
  return 3;
}


