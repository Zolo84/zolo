// FUN_006aa360 @ 6aa360 size=92

void __thiscall FUN_006aa360(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(*param_2 + 0xe8))();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_2 + 0xec))();
    uVar3 = 0;
    (**(code **)(*param_1 + 0xe0))(0,uVar2);
    FUN_00697e60(uVar3,uVar2);
  }
  if (*(char *)((int)param_2 + 0xe) != '\0') {
    (**(code **)(*param_1 + 0x158))(param_3);
    (**(code **)(*param_2 + 0x154))(param_3);
  }
  return;
}


