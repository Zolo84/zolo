// FUN_006a4bf0 @ 6a4bf0 size=251

void __fastcall FUN_006a4bf0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)((int)param_1 + 0xe) != '\0') {
    (**(code **)(*param_1 + 0x214))();
    FUN_006a3220();
    cVar1 = (**(code **)(*param_1 + 0x22c))();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 200))();
      (**(code **)(*param_1 + 0x118))();
      return;
    }
    if ((char)param_1[0x24] == '\0') {
      (**(code **)(*param_1 + 0x21c))();
      (**(code **)(*param_1 + 0x214))();
      (**(code **)(*param_1 + 0x240))();
      cVar1 = (**(code **)(*param_1 + 0x224))();
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x238))();
      }
      uVar3 = 0;
      iVar2 = FUN_006ac310(3,5);
    }
    else {
      (**(code **)(*param_1 + 0x21c))();
      (**(code **)(*param_1 + 0x214))();
      (**(code **)(*param_1 + 0x240))();
      cVar1 = (**(code **)(*param_1 + 0x224))();
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x238))();
      }
      uVar3 = 0;
      iVar2 = _rand();
      iVar2 = iVar2 % 5 + 2;
    }
    FUN_006adfb0(iVar2,uVar3);
    (**(code **)(*param_1 + 0x118))();
  }
  return;
}


