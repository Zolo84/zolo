// FUN_0042a492 @ 42a492 size=668

undefined4 __thiscall FUN_0042a492(int *param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  (**(code **)(*param_1 + 0x1c))();
  (**(code **)(*param_1 + 8))();
  if (DAT_00dc4b5e != '\0') {
    DAT_0089352c = 0;
    FUN_00429a00(s__Strings_format_check_for_all_la_0083a850);
  }
  FUN_0042a72e(s_config_darkest_hour_csv_0083a87c,param_2);
  FUN_0042a72e(s_config_modtext_csv_0083a894,param_2);
  FUN_0042a72e(s_config_tutorial_csv_0083a8a8,param_2);
  FUN_0042a72e(s_config_doomsdaytext_csv_0083a8bc,param_2);
  FUN_0042a72e(s_config_Boostertext_csv_0083a8d4,param_2);
  FUN_0042a72e(s_config_extra_text_csv_0083a8ec,param_2);
  FUN_0042a72e(s_config_new_text_csv_0083a904,param_2);
  FUN_0042a72e(s_config_scenario_text_csv_0083a918,param_2);
  FUN_0042a72e(s_config_event_text_csv_0083a934,param_2);
  FUN_0042a72e(s_config_models_csv_0083a94c,param_2);
  FUN_0042a72e(s_config_unit_names_csv_0083a960,param_2);
  FUN_0042a72e(s_config_tech_names_csv_0083a978,param_2);
  FUN_0042a72e(&DAT_00dc4120,param_2);
  FUN_0042a72e(s_config_world_names_csv_0083a990,param_2);
  FUN_0042a72e(s_config_text_csv_0083a9a8,param_2);
  FUN_0042a72e(s_config_messages_csv_0083a9b8,param_2);
  FUN_0042a72e(s_config_mods_csv_0083a9cc,param_2);
  uVar1 = FUN_007a8d6d(s_AI_EVENT_0083a9dc);
  (**(code **)(*param_1 + 0x18))(s_AI_EVENT_0083a9e8,uVar1);
  uVar1 = FUN_007a8d6d(s_AI_EVENT_0083a9f4);
  (**(code **)(*param_1 + 0x18))(s_AI_Loaded_0083aa00,uVar1);
  if (DAT_0083a6e4 == '\0') {
    (**(code **)(*param_1 + 0xc))();
  }
  FUN_0042b6c9(&DAT_0083aa0c);
  FUN_0042b6c9(s_JANUARY_0083aa10);
  if (param_2 == 0) {
    pcVar4 = &DAT_0083aa18;
    pcVar2 = (char *)FUN_0042b6c9(&DAT_0083aa1c);
    iVar3 = _strcmp(pcVar2,pcVar4);
    if (iVar3 == 0) {
      pcVar4 = s_January_0083aa20;
      pcVar2 = (char *)FUN_0042b6c9(s_JANUARY_0083aa28);
      iVar3 = _strcmp(pcVar2,pcVar4);
      if (iVar3 == 0) {
        iVar3 = FUN_0042b830();
        *(undefined1 *)(iVar3 + 0x422) = 0;
        goto LAB_0042a6d0;
      }
    }
    iVar3 = FUN_0042b830();
    *(undefined1 *)(iVar3 + 0x422) = 1;
  }
LAB_0042a6d0:
  if (DAT_00dc4b5e != '\0') {
    if (DAT_0089352c == 0) {
      FUN_00429a00(s___Done__No_possible_errors_found_0083aa30);
    }
    else if (DAT_00dc4b5f != '\0') {
      FUN_00429a00(s_____d__Possible_errors_found__0083aa54,DAT_0089352c);
      FUN_00429a50(s_There_are__d_possible_errors_det_0083aa74,DAT_0089352c);
    }
  }
  return 1;
}


