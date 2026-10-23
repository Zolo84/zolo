// FUN_00666ee0 @ 666ee0 size=381

void __thiscall FUN_00666ee0(int *param_1,float param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int aiStack_18 [2];
  undefined4 local_10;
  undefined2 local_c;
  undefined4 uStack_8;
  undefined2 uStack_4;
  
  iVar5 = (int)param_2;
  uVar3 = *(undefined4 *)((int)param_2 + 0xc);
  local_10 = *(undefined4 *)(DAT_00893530 + 0x14);
  local_c = *(undefined2 *)(DAT_00893530 + 0x18);
  cVar1 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))();
  if (cVar1 == '\0') {
    puVar2 = (undefined4 *)FUN_0051c0f0(aiStack_18);
    local_10 = *puVar2;
    local_c = *(undefined2 *)(puVar2 + 1);
    uVar3 = FUN_0051c0c0();
  }
  uStack_8 = local_10;
  uStack_4 = local_c;
  FUN_0042dc20(0xfffffffe);
  FUN_0042dc20(10);
  cVar1 = FUN_0042ddd0(DAT_00893530 + 0x14);
  if (cVar1 == '\0') {
    uStack_8 = *(undefined4 *)(DAT_00893530 + 0x14);
    uStack_4 = *(undefined2 *)(DAT_00893530 + 0x18);
  }
  param_2 = 1.0;
  iVar4 = FUN_004e9370(uVar3);
  if (*(char *)(iVar4 + 0x471) != '\0') {
    param_2 = 10.0;
  }
  (**(code **)(*param_1 + 0xe0))();
  aiStack_18[0] = (**(code **)(*(int *)(iVar5 + 0x22) + 4))();
  aiStack_18[0] = aiStack_18[0] * 500000;
  FUN_0066ead0(uVar3,&uStack_8,&local_10,0x3f800000,(float)aiStack_18[0] * param_2);
  (**(code **)(*param_1 + 0xe0))();
  iVar5 = (**(code **)(*(int *)(iVar5 + 0x22) + 4))();
  FUN_0066eba0(uVar3,&uStack_8,&local_10,0x3f800000,(float)(iVar5 * 900000));
  return;
}


