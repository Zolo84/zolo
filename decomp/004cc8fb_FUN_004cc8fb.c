// FUN_004cc8fb @ 4cc8fb size=271

void __thiscall FUN_004cc8fb(undefined4 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *local_8;
  
  *(undefined4 *)(param_2 + 0x6c) = param_1;
  piVar2 = (int *)FUN_004c9f81(param_1);
  (**(code **)(*piVar2 + 0xb8))();
  FUN_0045a130(param_2);
  for (local_8 = *(undefined4 **)(param_2 + 0x3e); local_8 != (undefined4 *)0x0;
      local_8 = (undefined4 *)local_8[2]) {
    if ((*(undefined4 **)*local_8)[0x13] == 0) {
      iVar3 = (**(code **)**(undefined4 **)*local_8)();
      if (*(int *)(iVar3 + 0x6c) == 0) {
        iVar4 = FUN_004c9f81();
        uVar5 = *(undefined4 *)(iVar4 + 6);
        FUN_004c9f81(uVar5);
        cVar1 = FUN_0044a690(uVar5);
        if (cVar1 != '\0') {
          FUN_004cc8fb(iVar3);
        }
      }
    }
  }
  return;
}


