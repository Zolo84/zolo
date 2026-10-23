// FUN_006a38b0 @ 6a38b0 size=116

void __fastcall FUN_006a38b0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)((int)param_1 + 0xe) != '\0') {
    (**(code **)(*param_1 + 0x214))();
    FUN_006a3220();
    uVar3 = 0;
    if ((char)param_1[0x24] == '\0') {
      iVar2 = _rand();
      iVar2 = iVar2 % 7 + 3;
    }
    else {
      iVar2 = _rand();
      iVar2 = iVar2 % 5 + 1;
    }
    FUN_006ae0d0(iVar2,uVar3);
    cVar1 = (**(code **)(*param_1 + 0x224))();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x238))();
    }
    FUN_006a3580(0xffffffb6);
  }
  return;
}


