// FUN_0051a6d0 @ 51a6d0 size=181

void __thiscall FUN_0051a6d0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_2 == 0) ||
     (((iVar2 = *(int *)(param_2 + 0x74), iVar2 != 4 && (iVar2 != 5)) && (iVar2 != 6)))) {
    cVar1 = (**(code **)(*param_1 + 0x28))();
    if (cVar1 == '\0') {
      iVar2 = param_1[0x92];
      (**(code **)(**(int **)(param_2 + 0x80) + 0xc))(iVar2);
      cVar1 = FUN_00527dc0(iVar2);
      if (cVar1 == '\x01') {
        uVar3 = 1;
      }
      else {
        uVar3 = 5;
      }
    }
    else {
      iVar2 = (**(code **)(param_1[0x47] + 4))();
      if ((iVar2 < 2) || (*(int *)(param_1[4] + 0x10) != 0)) {
        (**(code **)(*param_1 + 0xa0))();
        goto LAB_0051a76c;
      }
      uVar3 = 10;
    }
  }
  else {
    if (*(char *)((int)param_1 + 0x17a) != '\x01') goto LAB_0051a76c;
    if (*(int *)(param_1[4] + 0x10) == 0x1b) {
      uVar3 = 10;
    }
    else {
      uVar3 = 1;
    }
  }
  FUN_00418210(uVar3);
LAB_0051a76c:
  FUN_00418140(2);
  (**(code **)(*param_1 + 0x94))();
  return;
}


