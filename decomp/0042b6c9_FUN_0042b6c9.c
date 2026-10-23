// FUN_0042b6c9 @ 42b6c9 size=100

char * __thiscall FUN_0042b6c9(int *param_1,undefined4 param_2)

{
  undefined1 local_408 [1024];
  char *local_8;
  
  local_8 = (char *)(**(code **)(*param_1 + 4))(param_2);
  if (local_8 == (char *)0x0) {
    FUN_007a630a(local_408,s_Unable_to_find_string_for_key____0083b014,param_2);
    FUN_00405ad0(local_408);
    local_8 = s_UNKNOWN_STRING_WANTED_0083b038;
  }
  return local_8;
}


