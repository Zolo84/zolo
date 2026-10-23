// FUN_00584e90 @ 584e90 size=622

undefined4 __thiscall FUN_00584e90(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 local_108;
  undefined4 local_106;
  char local_100 [256];
  
LAB_00584e9c:
  do {
    while( true ) {
      while (iVar2 = FUN_00535490(), iVar2 != 1) {
        piVar4 = (int *)FUN_00534391();
        if (*piVar4 == 4) {
          FUN_005343dc();
          if ((DAT_0088f28e == *(int *)(param_1 + 0xe)) &&
             (DAT_0088f28c == *(short *)(param_1 + 0xc))) {
            FUN_00428eb0(&local_108);
            local_108 = 0x1268;
            (**(code **)(*(int *)(param_1 + 8) + 4))(&local_108);
          }
          return 0;
        }
      }
      iVar2 = *(int *)(param_2 + 4);
      if (0x25f < iVar2) break;
      if (iVar2 == 0x25f) {
        *(bool *)(param_1 + 0x1c) = *(int *)(param_2 + 0x40c) == 0x111;
      }
      else if (iVar2 == 0xe9) {
        if (*(int *)(param_2 + 0x40c) == 0x527) {
          pcVar7 = (char *)(param_2 + 0x410);
          uVar5 = 0xffffffff;
          pcVar8 = pcVar7;
          do {
            pcVar9 = pcVar8;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar9 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar9;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar8 = pcVar9 + -uVar5;
          pcVar9 = (char *)(param_1 + 0x2a);
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar9 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          }
          FUN_007a630a(local_100,s_gfx_interface__s_ledg_bmp_00857a04,pcVar7);
          uVar5 = 0xffffffff;
          pcVar8 = local_100;
          do {
            pcVar9 = pcVar8;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar9 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar9;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar8 = pcVar9 + -uVar5;
          pcVar9 = (char *)(param_1 + 0x12a);
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar9 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          }
          FUN_007a630a(local_100,s_GAME_END__s_VICTORY_008579f0,pcVar7);
          uVar5 = 0xffffffff;
          pcVar8 = local_100;
          do {
            pcVar9 = pcVar8;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar9 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar9;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar8 = pcVar9 + -uVar5;
          pcVar9 = (char *)(param_1 + 0x22a);
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar9 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          }
          FUN_007a630a(local_100,s_GAME_END__s_TOTAL_008579dc,pcVar7);
          uVar5 = 0xffffffff;
          pcVar8 = local_100;
          do {
            pcVar9 = pcVar8;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar9 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar9;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar8 = pcVar9 + -uVar5;
          pcVar9 = (char *)(param_1 + 0x42a);
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar9 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          }
          FUN_007a630a(local_100,s_ALLIANCE__s_008579d0,pcVar7);
          uVar5 = 0xffffffff;
          pcVar8 = local_100;
          do {
            pcVar7 = pcVar8;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar7 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar7;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar8 = pcVar7 + -uVar5;
          pcVar7 = (char *)(param_1 + 0x32a);
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar7 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
      }
      else {
        if (iVar2 != 0x195) goto LAB_0058508e;
        if (*(int *)(param_2 + 0x40c) == 3) {
          FUN_00584d30(param_2);
        }
        else {
          FUN_005349b0(s_No_Left_Curly_00857a20);
        }
      }
    }
    if (iVar2 != 0x260) {
      if (iVar2 != 0x523) {
LAB_0058508e:
        FUN_005349b0(s_Illegal_thingie_008579c0);
        return 0xfffffffe;
      }
      local_108 = 0;
      local_106 = 0;
      FUN_00427ed0(param_2);
      (**(code **)(*(int *)(param_1 + 8) + 4))(&local_108);
      goto LAB_00584e9c;
    }
    uVar3 = FUN_004af6b0(param_2 + 0x410);
    *(undefined4 *)(param_1 + 0x1e) = uVar3;
  } while( true );
}


