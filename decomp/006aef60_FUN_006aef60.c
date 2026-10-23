// FUN_006aef60 @ 6aef60 size=293

undefined4 __thiscall FUN_006aef60(int *param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  (**(code **)(*param_1 + 8))();
  do {
    while (iVar2 = FUN_00535490(), iVar2 != 1) {
      if (iVar2 == 2) {
        return 0;
      }
      piVar4 = (int *)FUN_00534391();
      if (*piVar4 == 4) {
        FUN_005343dc();
        (**(code **)(*param_1 + 0xc))();
        return 0;
      }
    }
    puVar3 = operator_new(0x102);
    if (param_2[0x103] == 0x111) {
      *(undefined2 *)(puVar3 + 0x40) = 1;
    }
    else if (param_2[0x103] == 0x112) {
      *(undefined2 *)(puVar3 + 0x40) = 0;
    }
    else {
      uVar1 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined2 *)(puVar3 + 0x40) = uVar1;
    }
    uVar5 = 0xffffffff;
    piVar4 = param_2 + 2;
    do {
      piVar8 = piVar4;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      piVar8 = (int *)((int)piVar4 + 1);
      iVar2 = *piVar4;
      piVar4 = piVar8;
    } while ((char)iVar2 != '\0');
    uVar5 = ~uVar5;
    puVar7 = (undefined4 *)((int)piVar8 - uVar5);
    puVar9 = puVar3;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    if (DAT_00dc4b5e != '\0') {
      (**(code **)(*param_1 + 0xc))();
      iVar2 = (**(code **)(*param_1 + 4))(puVar3);
      if (iVar2 != 0) {
        FUN_00429a00(s_ERROR___Flag___s__already_presen_0086969c,param_2 + 2,*param_2 + 0x216,
                     *(int *)(*param_2 + 0x212) + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      (**(code **)(*param_1 + 8))();
    }
    (**(code **)(*param_1 + 0x18))(puVar3,puVar3);
  } while( true );
}


