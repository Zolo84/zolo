// FUN_006ac950 @ 6ac950 size=219

void __fastcall FUN_006ac950(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 *puVar6;
  undefined1 local_64 [4];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [4];
  undefined4 local_54;
  undefined2 local_50;
  undefined4 local_4c [17];
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined2 local_4;
  
  local_4c[0] = 0;
  local_4c[1] = 0xa4;
  local_4 = 0;
  local_6 = 0;
  local_7 = 0;
  local_8 = 0;
  FUN_005075f0();
  puVar3 = local_4c;
  puVar6 = (undefined4 *)((int)param_1 + 0x12);
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar3;
  local_54 = *(undefined4 *)(DAT_00893530 + 0x14);
  local_50 = *(undefined2 *)(DAT_00893530 + 0x18);
  FUN_0042db80(0xffffff9c);
  (**(code **)(*param_1 + 0x30))(local_64);
  while ((unaff_EBX != 0 && (cVar2 = FUN_0042ddd0(auStack_58), cVar2 == '\0'))) {
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x30))(auStack_60);
    uVar1 = *(undefined4 *)*puVar3;
    (**(code **)(*param_1 + 0x38))(&stack0xffffff98);
    FUN_00796cd8(unaff_EBP);
    FUN_00796cd8(uVar1);
    piVar4 = (int *)(**(code **)(*param_1 + 0x30))(local_64);
    unaff_EBX = *piVar4;
  }
  return;
}


