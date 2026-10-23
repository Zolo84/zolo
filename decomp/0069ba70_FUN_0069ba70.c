// FUN_0069ba70 @ 69ba70 size=113

uint __thiscall FUN_0069ba70(int param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint in_EAX;
  int *piVar4;
  undefined3 uVar5;
  undefined3 extraout_var;
  
  puVar3 = *(undefined4 **)(param_1 + 0x1a);
  do {
    if (puVar3 == (undefined4 *)0x0) {
      return in_EAX & 0xffffff00;
    }
    puVar1 = (undefined4 *)puVar3[2];
    piVar4 = (int *)(**(code **)(*(int *)*puVar3 + 0xec))();
    piVar4 = (int *)(**(code **)(*piVar4 + 0x1f0))();
    in_EAX = (**(code **)(*piVar4 + 0x1e8))();
    puVar3 = puVar1;
  } while ((in_EAX != param_2) ||
          (uVar2 = *(uint *)(param_3 + 0x12), in_EAX = FUN_006a6370(), in_EAX != uVar2));
  uVar5 = (undefined3)(in_EAX >> 8);
  if (*(char *)((int)piVar4 + 0xe) != '\0') {
    (**(code **)(*piVar4 + 0xcc))();
    uVar5 = extraout_var;
  }
  return CONCAT31(uVar5,1);
}


