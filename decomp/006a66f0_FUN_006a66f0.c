// FUN_006a66f0 @ 6a66f0 size=236

void __fastcall FUN_006a66f0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar4 = (int *)(**(code **)(*param_1 + 0x1c4))();
  iVar5 = (**(code **)(*piVar4 + 4))();
  if (iVar5 < 1) {
    (**(code **)(*param_1 + 0xcc))();
    return;
  }
  if (*(int *)(param_1[0x23] + 0x46a) != 0) {
    uVar6 = FUN_006a9d50();
    cVar3 = FUN_0044b280(uVar6);
    if (cVar3 == '\0') goto LAB_006a677a;
  }
  iVar5 = (**(code **)(*param_1 + 0x1c4))();
  puVar2 = *(undefined4 **)(iVar5 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    uVar6 = *puVar2;
    (**(code **)(*param_1 + 0xe0))();
    cVar3 = FUN_00664680(uVar6);
    puVar2 = puVar1;
    if (cVar3 != '\0') {
      (**(code **)(*param_1 + 0xcc))();
      return;
    }
  }
LAB_006a677a:
  cVar3 = FUN_0044beb0();
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + 0xcc))();
    return;
  }
  (**(code **)(*param_1 + 0xe0))();
  FUN_00664b30(param_1);
  uVar6 = 0;
  iVar5 = _rand();
  FUN_006ae0d0(iVar5 % 0x24 + 0x18,uVar6);
  return;
}


