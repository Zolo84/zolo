// FUN_0050ad60 @ 50ad60 size=244

void __thiscall FUN_0050ad60(int *param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_800 [2048];
  
  uVar4 = 1 << ((byte)param_2 & 0x1f);
  if ((uVar4 & *(uint *)((int)param_1 + 0x1e)) == 0) {
    FUN_004b2f80(param_1,param_2);
    if (((param_3 != '\0') && (*(int *)((int)param_1 + 0x62) != 0)) &&
       (*(int *)((int)param_1 + 0x5e) != 0)) {
      cVar1 = FUN_00444290();
      if (cVar1 != '\0') {
        uVar2 = FUN_0050a460(*(undefined4 *)((int)param_1 + 0x26),
                             *(undefined4 *)((int)param_1 + 0x22));
        uVar3 = (**(code **)(*param_1 + 0xc))();
        pcVar7 = s__s__s_0083c948;
        FUN_007a630a(auStack_800,s__s__s_0083c948,uVar2,uVar3);
        uVar9 = 5;
        FUN_004c0980(5);
        uVar8 = 0x50ae02;
        uVar2 = FUN_00447250();
        FUN_00446d10(uVar2);
        uVar2 = FUN_0050aa70(param_2);
        puVar6 = auStack_800;
        puVar5 = &DAT_0088ebf8;
        FUN_0050b500(&DAT_0088ebf8,puVar6,uVar2);
        uVar3 = FUN_00458280();
        FUN_006eb830(0xb6,uVar3,puVar5,puVar6,uVar2,pcVar7,uVar8,uVar9);
      }
    }
  }
  *(uint *)((int)param_1 + 0x1e) = *(uint *)((int)param_1 + 0x1e) | uVar4;
  return;
}


