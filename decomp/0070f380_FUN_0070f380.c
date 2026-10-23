// FUN_0070f380 @ 70f380 size=3671

/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_0070f380(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  bool bVar13;
  char *pcVar14;
  int *local_c40;
  int *local_c3c;
  int local_c38;
  undefined1 local_c2c [32];
  undefined1 local_c0c [2048];
  undefined1 local_40c [1024];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007dbcd9;
  local_c = ExceptionList;
  local_c40 = (int *)0x0;
  local_c3c = (int *)0x0;
  local_c38 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
LAB_0070f3c9:
  do {
    iVar2 = FUN_00535490();
    FUN_00429d50(param_2 + 0x104,local_c0c);
    if (iVar2 == 1) {
      if (DAT_00dc4b5e != '\0') {
        iVar2 = param_2[1];
        piVar7 = local_c40;
        piVar3 = local_c3c;
        if ((iVar2 != 0x13e) && ((iVar2 < 0x3f4 || (0x3f7 < iVar2)))) {
          for (; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
            cVar1 = (*(code *)PTR_FUN_007e3798)(*piVar7,iVar2);
            if (cVar1 != '\0') {
              if (piVar7 != (int *)0x0) {
                FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,
                             *param_2 + 0x216,*(undefined4 *)(*param_2 + 0x212));
                DAT_00dc4b60 = DAT_00dc4b60 + 1;
              }
              break;
            }
          }
          iVar2 = param_2[1];
          piVar3 = operator_new(0xe);
          if (piVar3 == (int *)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            *piVar3 = iVar2;
            piVar3[1] = (int)local_c3c;
            piVar3[2] = 0;
            *(undefined1 *)(piVar3 + 3) = 0;
          }
          iVar2 = local_c38 + 1;
          bVar13 = local_c38 != 0;
          piVar7 = piVar3;
          local_c38 = iVar2;
          if (bVar13) {
            local_c3c[2] = (int)piVar3;
            piVar7 = local_c40;
          }
        }
        local_c3c = piVar3;
        local_c40 = piVar7;
        iVar2 = param_2[1];
        if (iVar2 < 0x3fa) {
          if (iVar2 == 0x3f9) {
LAB_0070f50b:
            uVar5 = FUN_007a7b3c(param_2 + 0x104);
            FUN_007a630a(local_c2c,&DAT_008390a0,uVar5);
            iVar2 = FUN_007a8730(local_c2c,param_2 + 0x104);
            if (iVar2 != 0) {
              iVar2 = *param_2;
              uVar5 = *(undefined4 *)(iVar2 + 0x212);
              pcVar14 = s_ERROR___Incorrect_value___s__for_00872900;
LAB_0070f59e:
              FUN_00429a00(pcVar14,param_2 + 0x104,param_2 + 2,iVar2 + 0x216,uVar5);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
          else if (iVar2 < 0x1f2) {
            if (iVar2 == 0x1f1) goto LAB_0070f50b;
            if (0x16 < iVar2) {
              if (iVar2 < 0x19) goto LAB_0070f56b;
              if (iVar2 == 0x143) goto LAB_0070f50b;
            }
          }
          else if (iVar2 == 0x243) goto LAB_0070f56b;
        }
        else if (iVar2 < 0x524) {
          if (iVar2 == 0x523) goto LAB_0070f50b;
          if (iVar2 == 0x3fa) goto LAB_0070f56b;
        }
        else if ((0x573 < iVar2) && (iVar2 < 0x576)) {
LAB_0070f56b:
          if ((param_2[0x103] < 0x111) || (0x112 < param_2[0x103])) {
            iVar2 = *param_2;
            uVar5 = *(undefined4 *)(iVar2 + 0x212);
            pcVar14 = s_ERROR___Incorrect_value___s__for_00872898;
            goto LAB_0070f59e;
          }
        }
      }
      iVar2 = param_2[1];
      if (iVar2 < 0x244) {
        if (iVar2 == 0x243) {
          *(bool *)((int)param_1 + 0x23be) = param_2[0x103] == 0x111;
        }
        else {
          if (0x123 < iVar2) {
            switch(iVar2) {
            case 0x13e:
              goto switchD_0070f7ba_caseD_13e;
            default:
              goto switchD_0070f5ec_caseD_19;
            case 0x143:
              uVar5 = FUN_007a7b3c(param_2 + 0x104);
              *(undefined4 *)((int)param_1 + 0x1252) = uVar5;
              goto LAB_0070f3c9;
            case 0x198:
              pcVar14 = s_UNKNOWN_STRING_WANTED_0083c758;
              uVar5 = FUN_0042b6c9(local_c0c);
              iVar2 = FUN_007a8730(uVar5,pcVar14);
              if (iVar2 == 0) {
                uVar8 = 0xffffffff;
                piVar7 = param_2 + 0x104;
                do {
                  piVar3 = piVar7;
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  piVar3 = (int *)((int)piVar7 + 1);
                  iVar2 = *piVar7;
                  piVar7 = piVar3;
                } while ((char)iVar2 != '\0');
                uVar8 = ~uVar8;
                piVar7 = (int *)((int)piVar3 - uVar8);
                piVar3 = param_1 + 10;
                for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *piVar3 = *piVar7;
                  piVar7 = piVar7 + 1;
                  piVar3 = piVar3 + 1;
                }
                for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(char *)piVar3 = (char)*piVar7;
                  piVar7 = (int *)((int)piVar7 + 1);
                  piVar3 = (int *)((int)piVar3 + 1);
                }
                if (DAT_00dc4b5e != '\0') {
                  FUN_00429a00(s_WARNING___Invalid_String_ID__des_008727f4,param_2 + 0x104);
                }
              }
              else {
                pcVar14 = (char *)FUN_0042b6c9(local_c0c);
                uVar8 = 0xffffffff;
                do {
                  pcVar12 = pcVar14;
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  pcVar12 = pcVar14 + 1;
                  cVar1 = *pcVar14;
                  pcVar14 = pcVar12;
                } while (cVar1 != '\0');
                uVar8 = ~uVar8;
                piVar7 = (int *)(pcVar12 + -uVar8);
                piVar3 = param_1 + 10;
                for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *piVar3 = *piVar7;
                  piVar7 = piVar7 + 1;
                  piVar3 = piVar3 + 1;
                }
                for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(char *)piVar3 = (char)*piVar7;
                  piVar7 = (int *)((int)piVar7 + 1);
                  piVar3 = (int *)((int)piVar3 + 1);
                }
                if (DAT_00dc4b5f != '\0') {
                  FUN_00429a00(s_INFO___Valid_String_ID__desc___s_0087281c,local_c0c);
                }
              }
              goto LAB_0070f3c9;
            case 0x199:
              piVar7 = param_1 + 0x44a;
              goto LAB_0070fb69;
            case 0x1f1:
              iVar2 = FUN_007a7b3c(param_2 + 0x104);
              param_1[0x48b] = iVar2;
              goto LAB_0070f3c9;
            }
          }
          if (iVar2 == 0x123) {
            FUN_0054f130(param_2);
            param_1[0x493] = *(int *)((int)param_1 + 0x1246);
            *(undefined2 *)(param_1 + 0x494) = *(undefined2 *)((int)param_1 + 0x124a);
          }
          else {
            switch(iVar2) {
            case 0x17:
              *(bool *)((int)param_1 + 0x1236) = param_2[0x103] == 0x111;
              break;
            case 0x18:
              *(bool *)((int)param_1 + 0x1237) = param_2[0x103] == 0x111;
              break;
            default:
switchD_0070f5ec_caseD_19:
              FUN_005349b0(s_unknown_lhs_in_game_event_0087270c);
              local_4 = 0xffffffff;
              FUN_004174b0();
              ExceptionList = local_c;
              return 0xfffffffe;
            case 0xe9:
              iVar2 = FUN_007a8730(param_2 + 0x104,s_AI_EVENT_0087288c);
              if (iVar2 == 0) {
                *(undefined1 *)(param_1 + 0x49b) = 1;
              }
              pcVar14 = s_UNKNOWN_STRING_WANTED_0083c758;
              uVar5 = FUN_0042b6c9(local_c0c);
              iVar2 = FUN_007a8730(uVar5,pcVar14);
              if (iVar2 == 0) {
                uVar8 = 0xffffffff;
                piVar7 = param_2 + 0x104;
                do {
                  piVar3 = piVar7;
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  piVar3 = (int *)((int)piVar7 + 1);
                  iVar2 = *piVar7;
                  piVar7 = piVar3;
                } while ((char)iVar2 != '\0');
                uVar8 = ~uVar8;
                piVar7 = (int *)((int)piVar3 - uVar8);
                piVar3 = param_1 + 0x40a;
                for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *piVar3 = *piVar7;
                  piVar7 = piVar7 + 1;
                  piVar3 = piVar3 + 1;
                }
                for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(char *)piVar3 = (char)*piVar7;
                  piVar7 = (int *)((int)piVar7 + 1);
                  piVar3 = (int *)((int)piVar3 + 1);
                }
                if ((DAT_00dc4b5e != '\0') && ((char)param_1[0x49b] == '\0')) {
                  FUN_00429a00(s_WARNING___Invalid_String_ID__nam_00872840,param_2 + 0x104);
                }
              }
              else {
                pcVar14 = (char *)FUN_0042b6c9(local_c0c);
                uVar8 = 0xffffffff;
                do {
                  pcVar12 = pcVar14;
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  pcVar12 = pcVar14 + 1;
                  cVar1 = *pcVar14;
                  pcVar14 = pcVar12;
                } while (cVar1 != '\0');
                uVar8 = ~uVar8;
                piVar7 = (int *)(pcVar12 + -uVar8);
                piVar3 = param_1 + 0x40a;
                for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *piVar3 = *piVar7;
                  piVar7 = piVar7 + 1;
                  piVar3 = piVar3 + 1;
                }
                for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(char *)piVar3 = (char)*piVar7;
                  piVar7 = (int *)((int)piVar7 + 1);
                  piVar3 = (int *)((int)piVar3 + 1);
                }
                if (DAT_00dc4b5f != '\0') {
                  FUN_00429a00(s_INFO___Valid_String_ID__name___s_00872868,local_c0c);
                }
              }
              break;
            case 0xec:
              uVar5 = FUN_004af6b0(param_2 + 0x104);
              *(undefined4 *)((int)param_1 + 0x1256) = uVar5;
              break;
            case 0xfd:
              FUN_0054f130(param_2);
              *(int *)((int)param_1 + 0x123a) = param_1[0x490];
              *(short *)((int)param_1 + 0x123e) = (short)param_1[0x491];
              break;
            case 0x10a:
              (**(code **)(param_1[0x8eb] + 0x10))();
              FUN_005358c0(param_1 + 0x8eb);
            }
          }
        }
      }
      else {
        if (0x574 < iVar2) {
          switch(iVar2) {
          case 0x575:
            *(bool *)((int)param_1 + 0x1281) = param_2[0x103] == 0x111;
            break;
          default:
            goto switchD_0070f5ec_caseD_19;
          case 0x57a:
            (**(code **)(*(int *)((int)param_1 + 0x1282) + 0x40))(param_2);
            if (DAT_00dc1925 != '\0') {
              *(undefined1 *)((int)param_1 + 0x23a6) = 1;
            }
            break;
          case 0x57b:
            (**(code **)(param_1[0x4a5] + 0x40))(param_2);
            if (DAT_00dc1925 != '\0') {
              *(undefined1 *)((int)param_1 + 0x23a7) = 1;
            }
            break;
          case 0x57c:
            piVar7 = (int *)((int)param_1 + 0x22a6);
LAB_0070fb69:
            uVar8 = 0xffffffff;
            piVar3 = param_2 + 0x104;
            do {
              piVar11 = piVar3;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              piVar11 = (int *)((int)piVar3 + 1);
              iVar2 = *piVar3;
              piVar3 = piVar11;
            } while ((char)iVar2 != '\0');
            uVar8 = ~uVar8;
            piVar3 = (int *)((int)piVar11 - uVar8);
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *piVar7 = *piVar3;
              piVar3 = piVar3 + 1;
              piVar7 = piVar7 + 1;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(char *)piVar7 = (char)*piVar3;
              piVar3 = (int *)((int)piVar3 + 1);
              piVar7 = (int *)((int)piVar7 + 1);
            }
            break;
          case 0x57d:
            pcVar14 = s_UNKNOWN_STRING_WANTED_0083c758;
            uVar5 = FUN_0042b6c9(local_c0c);
            iVar2 = FUN_007a8730(uVar5,pcVar14);
            if (iVar2 == 0) {
              uVar8 = 0xffffffff;
              piVar7 = param_2 + 0x104;
              do {
                piVar3 = piVar7;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                piVar3 = (int *)((int)piVar7 + 1);
                iVar2 = *piVar7;
                piVar7 = piVar3;
              } while ((char)iVar2 != '\0');
              uVar8 = ~uVar8;
              puVar4 = (undefined4 *)((int)piVar3 - uVar8);
              puVar6 = (undefined4 *)((int)param_1 + 0x12a6);
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar6 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar6 = puVar6 + 1;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
                puVar4 = (undefined4 *)((int)puVar4 + 1);
                puVar6 = (undefined4 *)((int)puVar6 + 1);
              }
              if (DAT_00dc4b5e != '\0') {
                FUN_00429a00(s_WARNING___Invalid_String_ID__dec_00872728,param_2 + 0x104);
              }
            }
            else {
              pcVar14 = (char *)FUN_0042b6c9(local_c0c);
              uVar8 = 0xffffffff;
              do {
                pcVar12 = pcVar14;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar12 = pcVar14 + 1;
                cVar1 = *pcVar14;
                pcVar14 = pcVar12;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              pcVar14 = pcVar12 + -uVar8;
              pcVar12 = (char *)((int)param_1 + 0x12a6);
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar12 = *(undefined4 *)pcVar14;
                pcVar14 = pcVar14 + 4;
                pcVar12 = pcVar12 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar12 = *pcVar14;
                pcVar14 = pcVar14 + 1;
                pcVar12 = pcVar12 + 1;
              }
              if (DAT_00dc4b5f != '\0') {
                FUN_00429a00(s_INFO___Valid_String_ID__decision_0087275c,local_c0c);
              }
            }
          }
          goto LAB_0070f3c9;
        }
        if (iVar2 == 0x574) {
          *(bool *)(param_1 + 0x4a0) = param_2[0x103] == 0x111;
        }
        else if (iVar2 < 0x3fa) {
          if (iVar2 == 0x3f9) {
            iVar2 = FUN_007a7b3c(param_2 + 0x104);
            param_1[0x48c] = iVar2;
            if ((DAT_00dc4b5e != '\0') &&
               (((param_2[0x103] != 0x524 || (iVar2 < 0)) || (2 < iVar2)))) {
              FUN_00429a00(s_ERROR___Invalid_event_style___s__008727a0,param_2 + 0x104,
                           *param_2 + 0x216,*(undefined4 *)(*param_2 + 0x212));
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
              param_1[0x48c] = 0;
            }
          }
          else {
            if (iVar2 != 0x3dc) {
              if ((iVar2 < 0x3f4) || (0x3f7 < iVar2)) goto switchD_0070f5ec_caseD_19;
switchD_0070f7ba_caseD_13e:
              puVar4 = operator_new(0x2e);
              local_4._0_1_ = 1;
              if (puVar4 == (undefined4 *)0x0) {
                puVar4 = (undefined4 *)0x0;
              }
              else {
                puVar4[1] = 0;
                puVar4[2] = 0;
                puVar4[3] = 0;
                *(undefined1 *)(puVar4 + 4) = 0;
                *puVar4 = &PTR_LAB_007f85f0;
                FUN_007103e0();
                *puVar4 = &PTR_FUN_007f857c;
                uVar5 = FUN_007a8d6d(&DAT_0088ebf8);
                *(undefined4 *)((int)puVar4 + 0x16) = uVar5;
                *(undefined4 *)((int)puVar4 + 0x12) = 0xffffffff;
              }
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_00710400(param_2,puVar4);
              iVar2 = *(int *)((int)param_1 + 0x1276);
              puVar6 = operator_new(0xe);
              if (puVar6 == (undefined4 *)0x0) {
                puVar6 = (undefined4 *)0x0;
              }
              else {
                *puVar6 = puVar4;
                puVar6[1] = iVar2;
                puVar6[2] = 0;
                *(undefined1 *)(puVar6 + 3) = 0;
              }
              iVar10 = *(int *)((int)param_1 + 0x127a);
              *(undefined4 **)((int)param_1 + 0x1276) = puVar6;
              *(int *)((int)param_1 + 0x127a) = iVar10 + 1;
              if (iVar10 == 0) {
                *(undefined4 **)((int)param_1 + 0x1272) = puVar6;
              }
              else {
                *(undefined4 **)(iVar2 + 8) = puVar6;
              }
              goto LAB_0070f3c9;
            }
            (**(code **)(*(int *)((int)param_1 + 0x125a) + 0x40))(param_2);
          }
        }
        else if (iVar2 == 0x3fa) {
          *(bool *)(param_1 + 0x48e) = param_2[0x103] == 0x111;
        }
        else {
          if (iVar2 != 0x523) goto switchD_0070f5ec_caseD_19;
          iVar2 = *param_1;
          uVar5 = FUN_007a7b3c(param_2 + 0x104);
          (**(code **)(iVar2 + 0x10))(uVar5);
          if (DAT_00dc4b5e != '\0') {
            uVar5 = FUN_007a7b3c(param_2 + 0x104);
            FUN_00429a00(s_Loading_event___d____00872788,uVar5);
          }
        }
      }
      goto LAB_0070f3c9;
    }
    if (iVar2 == 2) {
      local_4 = 0xffffffff;
      FUN_004174b0();
      ExceptionList = local_c;
      return 0;
    }
    piVar7 = (int *)FUN_00534391();
  } while (*piVar7 != 4);
  FUN_005343dc();
  if (DAT_00dc4b5e == '\0') goto joined_r0x007101a6;
  piVar7 = param_1 + 0x44a;
  iVar2 = FUN_007a8730(piVar7,&DAT_0088ebf8);
  if (iVar2 == 0) {
    if (DAT_00dc4b5f != '\0') {
      FUN_00429a50(s_No_event_picture_defined_for_eve_008726d8,param_1 + 0x40a,
                   *(undefined4 *)((int)param_1 + 0xe),*param_2 + 0x216);
    }
    FUN_00429a00(s_ERROR___No_event_picture_defined_00872698,param_1 + 0x40a,
                 *(undefined4 *)((int)param_1 + 0xe),*param_2 + 0x216);
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
    goto LAB_0070fe19;
  }
  FUN_007a630a(local_40c,s_gfx_events_pics__s_bmp_0085e994,piVar7);
  iVar2 = FUN_007a6615(local_40c,&DAT_0082eeb4);
  if (iVar2 == 0) {
    if (DAT_00dc3a00 == '\0') goto LAB_0070fe19;
    FUN_007a630a(local_c0c,s__s__s_0083a350,&DAT_00dc3a00,local_40c);
    iVar2 = FUN_007a6615(local_c0c,&DAT_0082eeb4);
    if (iVar2 == 0) {
      if (DAT_00dc4b5f != '\0') {
        FUN_00429a50(s_Event_picture___s__for_event___s_0087265c,piVar7,param_1 + 0x40a,
                     *(undefined4 *)((int)param_1 + 0xe),*param_2 + 0x216);
      }
      FUN_00429a00(s_ERROR___Event_picture___s__for_e_00872614,piVar7,param_1 + 0x40a,
                   *(undefined4 *)((int)param_1 + 0xe),*param_2 + 0x216);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
      goto LAB_0070fe19;
    }
  }
  FUN_007a6429(iVar2);
LAB_0070fe19:
  piVar7 = local_c40;
  if (*(int *)((int)param_1 + 0xe) == 0) {
    FUN_00429a00(s_ERROR___Missing_ID_for_event___s_008725dc,param_1 + 0x40a,*param_2 + 0x216,
                 *(int *)(*param_2 + 0x212) + 1);
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  for (; piVar3 = local_c40, piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
    cVar1 = (*(code *)PTR_FUN_007e3798)(*piVar7,0xfd);
    if (cVar1 != '\0') {
      if (piVar7 != (int *)0x0) goto joined_r0x0070feb2;
      break;
    }
  }
  do {
    piVar7 = local_c40;
    if (piVar3 == (int *)0x0) goto joined_r0x0071013f;
    cVar1 = (*(code *)PTR_FUN_007e3798)(*piVar3,0x123);
    if (cVar1 != '\0') {
      if (piVar3 != (int *)0x0) {
        FUN_00429a00(s_ERROR___Missing_date__but_define_00872374,param_1 + 0x40a,
                     *(undefined4 *)((int)param_1 + 0xe),*param_2 + 0x216,
                     *(int *)(*param_2 + 0x212) + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      goto joined_r0x0071013f;
    }
    piVar3 = (int *)piVar3[2];
  } while( true );
joined_r0x0070feb2:
  piVar7 = local_c40;
  if (piVar3 == (int *)0x0) goto joined_r0x0070fed8;
  cVar1 = (*(code *)PTR_FUN_007e3798)(*piVar3,0x123);
  if (cVar1 != '\0') {
    if (piVar3 != (int *)0x0) goto joined_r0x0070ff0f;
    goto joined_r0x0070fed8;
  }
  piVar3 = (int *)piVar3[2];
  goto joined_r0x0070feb2;
joined_r0x0070ff0f:
  if (piVar7 == (int *)0x0) goto LAB_0070ff35;
  cVar1 = (*(code *)PTR_FUN_007e3798)(*piVar7,0x143);
  if (cVar1 != '\0') {
    if (piVar7 != (int *)0x0) {
      if ((int)*(char *)((int)param_1 + 0x123b) +
          ((int)(char)param_1[0x48f] + *(short *)((int)param_1 + 0x123e) * 0xc) * 0x1e !=
          *(char *)((int)param_1 + 0x124d) + -1 +
          ((int)*(char *)((int)param_1 + 0x124e) + (short)param_1[0x494] * 0xc) * 0x1e)
      goto LAB_0070ffe1;
      FUN_00429a00(s_ERROR___date____deathdate___1_da_008724f4,
                   *(undefined4 *)((int)param_1 + 0x1252),param_1 + 0x40a,
                   *(undefined4 *)((int)param_1 + 0xe),*param_2 + 0x216,
                   *(int *)(*param_2 + 0x212) + 1);
      goto LAB_0070ffdb;
    }
    goto LAB_0070ff35;
  }
  piVar7 = (int *)piVar7[2];
  goto joined_r0x0070ff0f;
joined_r0x0070fed8:
  if (piVar7 == (int *)0x0) goto joined_r0x007101a6;
  cVar1 = (*(code *)PTR_FUN_007e3798)(*piVar7,0x143);
  if (cVar1 != '\0') {
    if (piVar7 != (int *)0x0) {
      uVar5 = *(undefined4 *)((int)param_1 + 0xe);
      iVar2 = *param_2 + 0x216;
      iVar10 = *(int *)(*param_2 + 0x212) + 1;
      pcVar14 = s_ERROR___Missing_deathdate__but_s_008723cc;
      goto LAB_00710185;
    }
    goto joined_r0x007101a6;
  }
  piVar7 = (int *)piVar7[2];
  goto joined_r0x0070fed8;
joined_r0x0071013f:
  if (piVar7 == (int *)0x0) goto joined_r0x007101a6;
  cVar1 = (*(code *)PTR_FUN_007e3798)(*piVar7,0x143);
  if (cVar1 != '\0') {
    if (piVar7 != (int *)0x0) {
      uVar5 = *(undefined4 *)((int)param_1 + 0xe);
      iVar2 = *param_2 + 0x216;
      iVar10 = *(int *)(*param_2 + 0x212) + 1;
      pcVar14 = s_ERROR___Missing_date__but_define_00872320;
      goto LAB_00710185;
    }
    goto joined_r0x007101a6;
  }
  piVar7 = (int *)piVar7[2];
  goto joined_r0x0071013f;
LAB_0070ff35:
  FUN_00429a00(s_ERROR___Missing_offset_for_event_0087259c,param_1 + 0x40a,
               *(undefined4 *)((int)param_1 + 0xe),*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
LAB_0070ffdb:
  DAT_00dc4b60 = DAT_00dc4b60 + 1;
LAB_0070ffe1:
  if ((int)*(char *)((int)param_1 + 0x123b) +
      ((int)(char)param_1[0x48f] + *(short *)((int)param_1 + 0x123e) * 0xc) * 0x1e ==
      (int)*(char *)((int)param_1 + 0x124d) +
      ((int)*(char *)((int)param_1 + 0x124e) + (short)param_1[0x494] * 0xc) * 0x1e) {
    FUN_00429a00(s_ERROR___date___deathdate__no_off_00872468,param_1 + 0x40a,
                 *(undefined4 *)((int)param_1 + 0xe),*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1
                );
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  if ((int)*(char *)((int)param_1 + 0x124d) +
      ((int)*(char *)((int)param_1 + 0x124e) + (short)param_1[0x494] * 0xc) * 0x1e <
      (int)*(char *)((int)param_1 + 0x123b) +
      ((int)(char)param_1[0x48f] + *(short *)((int)param_1 + 0x123e) * 0xc) * 0x1e) {
    uVar5 = *(undefined4 *)((int)param_1 + 0xe);
    iVar2 = *param_2 + 0x216;
    iVar10 = *(int *)(*param_2 + 0x212) + 1;
    pcVar14 = s_ERROR___date_>_deathdate_for_eve_00872424;
LAB_00710185:
    FUN_00429a00(pcVar14,param_1 + 0x40a,uVar5,iVar2,iVar10);
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
joined_r0x007101a6:
  while (local_c40 != (int *)0x0) {
    piVar7 = (int *)local_c40[2];
    FUN_00796cd8(local_c40);
    local_c40 = piVar7;
  }
  ExceptionList = local_c;
  return 0;
}


