// FUN_006971e0 @ 6971e0 size=46

void __fastcall FUN_006971e0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = (**(code **)(*param_1 + 0x1a4))();
  puVar2 = *(undefined4 **)(iVar3 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    uVar4 = (**(code **)(*(int *)*puVar2 + 0x10))();
    FUN_00690cd0(uVar4);
    puVar2 = puVar1;
  }
  return;
}


