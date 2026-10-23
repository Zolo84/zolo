// FUN_00512a20 @ 512a20 size=209

undefined4 FUN_00512a20(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_2 + 0x37a0 + *(int *)(param_1 + 0x248)) == '\0') {
    return 0;
  }
  iVar1 = DAT_00ab27b4 + param_3 * 0x4b2;
  switch(param_2) {
  case 2:
    if (*(int *)(iVar1 + 0x3d8) == 0) {
      return 0;
    }
    cVar2 = FUN_005216c0(iVar1);
    if ((cVar2 == '\0') ||
       (cVar2 = FUN_0044b280(*(undefined4 *)(*(int *)(param_1 + 0x248) + 6)), cVar2 != '\0')) {
      return 0;
    }
    break;
  case 4:
  case 5:
  case 8:
    if (param_3 == *(int *)(param_1 + 0xc)) {
      return 0;
    }
    break;
  case 6:
  case 7:
    if (param_3 != *(int *)(param_1 + 0xc)) {
      return 0;
    }
    break;
  case 0xc:
    if ((*(int *)(iVar1 + 0x3d8) == *(int *)(param_1 + 0x248)) || (*(int *)(iVar1 + 0x3d8) == 0)) {
      return 0;
    }
  }
  uVar3 = FUN_00512b20(param_1,param_2,param_3);
  return uVar3;
}


