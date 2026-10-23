// FUN_004af160 @ 4af160 size=1107

void FUN_004af160(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007be07b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00426120(s_db_country_csv_0083b404);
  local_4 = 0;
LAB_004af198:
  do {
    do {
      FUN_00426330(1);
      FUN_004265c0(local_10c);
      iVar1 = FUN_007a8730(local_10c,&DAT_0083eb38);
      if (iVar1 == 0) {
        local_4 = 0xffffffff;
        FUN_004262d0();
        ExceptionList = local_c;
        return;
      }
      iVar1 = 0;
      puVar5 = &DAT_008ca110;
      do {
        iVar2 = FUN_007a8730(local_10c,puVar5);
        if (iVar2 == 0) {
          iVar1 = (&DAT_008ca210)[iVar1 * 0x47];
          if (iVar1 != 0) goto LAB_004af242;
          goto LAB_004af20a;
        }
        puVar5 = puVar5 + 0x47;
        iVar1 = iVar1 + 1;
      } while ((int)puVar5 < 0x8e1eb0);
      iVar1 = 0;
LAB_004af20a:
      if (DAT_00dc4b5f != '\0') {
        FUN_00429a50(s_Error_in_db_country_csv___Invali_0083eb04,local_10c);
      }
      FUN_00429a00(s_ERROR___Invalid_country_TAG___s__0083eacc,local_10c);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
LAB_004af242:
      FUN_004265c0(local_10c);
      uVar3 = FUN_004aee40(local_10c);
      (&DAT_008ca214)[iVar1 * 0x47] = uVar3;
      FUN_004265c0(local_10c);
      iVar2 = 0;
      puVar5 = &DAT_008ca110;
      do {
        iVar4 = FUN_007a8730(local_10c,puVar5);
        if (iVar4 == 0) {
          iVar2 = (&DAT_008ca210)[iVar2 * 0x47];
          if (iVar2 != 0) goto LAB_004af2f4;
          goto LAB_004af2bc;
        }
        puVar5 = puVar5 + 0x47;
        iVar2 = iVar2 + 1;
      } while ((int)puVar5 < 0x8e1eb0);
      iVar2 = 0;
LAB_004af2bc:
      if (DAT_00dc4b5f != '\0') {
        FUN_00429a50(s_Error_in_db_country_csv___Invali_0083ea88,local_10c);
      }
      FUN_00429a00(s_ERROR___Invalid_leader_language_c_0083ea40,local_10c);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
LAB_004af2f4:
      (&DAT_008ca218)[iVar1 * 0x47] = iVar2;
      FUN_004265c0(local_10c);
      iVar2 = 0;
      puVar5 = &DAT_008ca110;
      do {
        iVar4 = FUN_007a8730(local_10c,puVar5);
        if (iVar4 == 0) {
          iVar2 = (&DAT_008ca210)[iVar2 * 0x47];
          if (iVar2 != 0) goto LAB_004af37f;
          goto LAB_004af347;
        }
        puVar5 = puVar5 + 0x47;
        iVar2 = iVar2 + 1;
      } while ((int)puVar5 < 0x8e1eb0);
      iVar2 = 0;
LAB_004af347:
      if (DAT_00dc4b5f != '\0') {
        FUN_00429a50(s_Error_in_db_country_csv___Invali_0083e9f4,local_10c);
      }
      FUN_00429a00(s_ERROR___Invalid_ArmyNationalityS_0083e9a8,local_10c);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
LAB_004af37f:
      (&DAT_008ca21c)[iVar1 * 0x47] = iVar2;
      FUN_004265c0(local_10c);
      (&DAT_008ca220)[iVar1 * 0x47] = iVar1;
      iVar2 = FUN_007a8730(local_10c,&DAT_0088ebf8);
      if (iVar2 != 0) {
        iVar2 = 0;
        puVar5 = &DAT_008ca110;
        do {
          iVar4 = FUN_007a8730(local_10c,puVar5);
          if (iVar4 == 0) {
            if ((&DAT_008ca210)[iVar2 * 0x47] != 0) {
              (&DAT_008ca220)[iVar1 * 0x47] = (&DAT_008ca210)[iVar2 * 0x47];
              goto LAB_004af42c;
            }
            break;
          }
          puVar5 = puVar5 + 0x47;
          iVar2 = iVar2 + 1;
        } while ((int)puVar5 < 0x8e1eb0);
        if (DAT_00dc4b5f != '\0') {
          FUN_00429a50(s_Error_in_db_country_csv___Invali_0083e960,local_10c);
        }
        FUN_00429a00(s_ERROR___Invalid_model_nationalit_0083e920,local_10c);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
LAB_004af42c:
      FUN_004265c0(local_10c);
      (&DAT_008ca224)[iVar1 * 0x47] = iVar1;
      iVar2 = FUN_007a8730(local_10c,&DAT_0088ebf8);
      if (iVar2 != 0) {
        iVar2 = 0;
        puVar5 = &DAT_008ca110;
        do {
          iVar4 = FUN_007a8730(local_10c,puVar5);
          if (iVar4 == 0) {
            if ((&DAT_008ca210)[iVar2 * 0x47] != 0) {
              (&DAT_008ca224)[iVar1 * 0x47] = (&DAT_008ca210)[iVar2 * 0x47];
              goto LAB_004af4d3;
            }
            break;
          }
          puVar5 = puVar5 + 0x47;
          iVar2 = iVar2 + 1;
        } while ((int)puVar5 < 0x8e1eb0);
        if (DAT_00dc4b5f != '\0') {
          FUN_00429a50(s_Error_in_db_country_csv___Invali_0083e8dc,local_10c);
        }
        FUN_00429a00(s_ERROR___Invalid_icon_model_natio_0083e898,local_10c);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
LAB_004af4d3:
      FUN_004265c0(local_10c);
      (&DAT_008ca228)[iVar1 * 0x47] = iVar1;
      iVar2 = FUN_007a8730(local_10c,&DAT_0088ebf8);
    } while (iVar2 == 0);
    iVar2 = 0;
    puVar5 = &DAT_008ca110;
    do {
      iVar4 = FUN_007a8730(local_10c,puVar5);
      if (iVar4 == 0) {
        if ((&DAT_008ca210)[iVar2 * 0x47] != 0) {
          (&DAT_008ca228)[iVar1 * 0x47] = (&DAT_008ca210)[iVar2 * 0x47];
          goto LAB_004af198;
        }
        break;
      }
      puVar5 = puVar5 + 0x47;
      iVar2 = iVar2 + 1;
    } while ((int)puVar5 < 0x8e1eb0);
    if (DAT_00dc4b5f != '\0') {
      FUN_00429a50(s_Error_in_db_country_csv___Invali_0083e858,local_10c);
    }
    FUN_00429a00(s_ERROR___Invalid_model_names_TAG___0083e81c,local_10c);
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  } while( true );
}


