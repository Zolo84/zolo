// FUN_006a3580 @ 6a3580 size=217

void __thiscall FUN_006a3580(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)((int)param_1 + 0xe) != '\0') {
    FUN_006a3220();
    if (param_2 != -0x4a) {
      uVar3 = 0;
      uVar2 = FUN_006ac310(3,6);
      FUN_006ae0d0(uVar2,uVar3);
    }
    cVar1 = (**(code **)(*param_1 + 0x118))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x22c))();
      if (cVar1 == '\0') {
        if ((char)param_1[0x24] == '\0') {
          (**(code **)(*param_1 + 0x21c))();
          (**(code **)(*param_1 + 0x214))();
          (**(code **)(*param_1 + 0x240))();
          cVar1 = (**(code **)(*param_1 + 0x224))();
          if (cVar1 != '\0') {
            (**(code **)(*param_1 + 0x238))();
            return;
          }
        }
        else {
          (**(code **)(*param_1 + 0x21c))();
          (**(code **)(*param_1 + 0x214))();
          (**(code **)(*param_1 + 0x240))();
        }
      }
      else {
        cVar1 = (**(code **)(*param_1 + 0x234))();
        if (cVar1 == '\0') {
          (**(code **)(*param_1 + 200))();
          return;
        }
      }
    }
  }
  return;
}


