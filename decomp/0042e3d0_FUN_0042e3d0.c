// FUN_0042e3d0 @ 42e3d0 size=1021

void FUN_0042e3d0(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char local_108;
  char local_107;
  char local_106;
  char local_105;
  undefined1 local_104;
  undefined1 local_100 [256];
  
  DAT_00893640 = 0xebf5;
  DAT_00893644 = 0;
  iVar2 = FUN_0042e2c0(s_db_building_costs_txt_0083b414);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(&DAT_00dc4a5c);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_country_csv_0083b404);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_difficulty_csv_0083b3f0);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_revolt_txt_0083b3e0);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_misc_txt_0083b3d4);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_events_txt_0083b3c4);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_diplo_costs_txt_0083b3b0);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_spy_costs_txt_0083b39c);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_convoy_costs_txt_0083b388);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_resource_values_csv_0083b370);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_ideology_matrix_csv_0083b358);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_tech_air_doctrines_tech_txt_0083b338);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_tech_aircraft_tech_txt_0083b31c);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_tech_armor_tech_txt_0083b304);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_tech_industry_tech_txt_0083b2e8);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_tech_infantry_tech_txt_0083b2cc);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_tech_land_doctrines_tech_txt_0083b2ac);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_tech_naval_doctrines_tech_txt_0083b288);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_tech_naval_tech_txt_0083b270);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_tech_secret_weapons_tech_txt_0083b250);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_units_modifiers_csv_0083b238);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = 0;
  do {
    uVar3 = FUN_004fe7e0(iVar2);
    uVar3 = FUN_005341fe(uVar3);
    FUN_007a630a(local_100,s_db_units_divisions__s_txt_0083b21c,uVar3);
    iVar4 = FUN_0042e2c0(local_100);
    DAT_00893644 = DAT_00893644 + iVar4;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x8c);
  iVar2 = FUN_0042e2c0(s_db_units_division_types_txt_0083b200);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = 0;
  do {
    uVar3 = FUN_004fed70(iVar2);
    uVar3 = FUN_005341fe(uVar3);
    FUN_007a630a(local_100,s_db_units_brigades__s_txt_0083b1e4,uVar3);
    iVar4 = FUN_0042e2c0(local_100);
    DAT_00893644 = DAT_00893644 + iVar4;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x8c);
  iVar2 = FUN_0042e2c0(s_db_units_brigade_types_txt_0083b1c8);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_units_brigade_modifiers_csv_0083b1a8);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(&DAT_00dc3500);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(&DAT_00dc3b04);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_policy_effects_csv_0083b190);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_ministers_minister_personalit_0083b168);
  DAT_00893644 = DAT_00893644 + iVar2;
  iVar2 = FUN_0042e2c0(s_db_mission_eff_csv_0083b154);
  DAT_00893644 = DAT_00893644 + iVar2;
  local_104 = 0;
  bVar1 = (byte)(DAT_00893644 % 0x1a >> 0x1f);
  local_108 = (((byte)(DAT_00893644 % 0x1a) ^ bVar1) - bVar1) + 'A';
  iVar2 = (DAT_00893644 >> 4) % 0x1a;
  bVar1 = (byte)(iVar2 >> 0x1f);
  local_107 = (((byte)iVar2 ^ bVar1) - bVar1) + 'A';
  iVar2 = (DAT_00893644 >> 8) % 0x1a;
  bVar1 = (byte)(iVar2 >> 0x1f);
  local_106 = (((byte)iVar2 ^ bVar1) - bVar1) + 'A';
  iVar2 = (DAT_00893644 >> 0xc) % 0x1a;
  bVar1 = (byte)(iVar2 >> 0x1f);
  local_105 = (((byte)iVar2 ^ bVar1) - bVar1) + 'A';
  FUN_007a630a(&DAT_00893648,s_Darkest_Hour_v_1_05_2___s__0083b138,&local_108);
  return;
}


