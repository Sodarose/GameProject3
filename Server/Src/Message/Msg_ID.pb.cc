// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg_ID.proto

#include "Msg_ID.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
namespace protobuf_Msg_5fID_2eproto {
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Msg_ID.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014Msg_ID.proto*\310$\n\tMessageID\022\r\n\tMSG_BEGI"
      "N\020\000\022\034\n\026MSG_NORMAL_MSGID_BEGIN\020\240\215\006\022\033\n\025MSG"
      "_CHECK_VERSION_REQ\020\241\215\006\022\033\n\025MSG_CHECK_VERS"
      "ION_ACK\020\242\215\006\022\031\n\023MSG_ACCOUNT_REG_REQ\020\243\215\006\022\031"
      "\n\023MSG_ACCOUNT_REG_ACK\020\244\215\006\022\033\n\025MSG_ACCOUNT"
      "_LOGIN_REQ\020\245\215\006\022\033\n\025MSG_ACCOUNT_LOGIN_ACK\020"
      "\246\215\006\022\030\n\022MSG_DB_EXE_SQL_REQ\020\247\215\006\022\030\n\022MSG_DB_"
      "EXE_SQL_ACK\020\250\215\006\022\031\n\023MSG_SERVER_LIST_REQ\020\251"
      "\215\006\022\031\n\023MSG_SERVER_LIST_ACK\020\252\215\006\022\033\n\025MSG_SEL"
      "ECT_SERVER_REQ\020\253\215\006\022\033\n\025MSG_SELECT_SERVER_"
      "ACK\020\254\215\006\022\037\n\031MSG_LOGIC_REGTO_LOGIN_REQ\020\255\215\006"
      "\022\037\n\031MSG_LOGIC_REGTO_LOGIN_ACK\020\256\215\006\022\032\n\024MSG"
      "_LOGIC_UPDATE_REQ\020\257\215\006\022\032\n\024MSG_LOGIC_UPDAT"
      "E_ACK\020\260\215\006\022\036\n\030MSG_GAME_REGTO_LOGIC_REQ\020\261\215"
      "\006\022\036\n\030MSG_GAME_REGTO_LOGIC_ACK\020\262\215\006\022 \n\032MSG"
      "_LOGIC_REGTO_CENTER_REQ\020\263\215\006\022 \n\032MSG_LOGIC"
      "_REGTO_CENTER_ACK\020\264\215\006\022\026\n\020MSG_LOG_DATA_NT"
      "F\020\265\215\006\022\034\n\026MSG_PHP_GM_COMMAND_REQ\020\266\215\006\022\034\n\026M"
      "SG_PHP_GM_COMMAND_ACK\020\267\215\006\022\036\n\030MSG_WATCH_H"
      "EART_BEAT_REQ\020\270\215\006\022\036\n\030MSG_WATCH_HEART_BEA"
      "T_ACK\020\271\215\006\022\036\n\030MSG_WATCH_UPDATE_SVR_REQ\020\272\215"
      "\006\022\036\n\030MSG_WATCH_UPDATE_SVR_ACK\020\273\215\006\022\035\n\027MSG"
      "_WATCH_START_SVR_REQ\020\274\215\006\022\035\n\027MSG_WATCH_ST"
      "ART_SVR_ACK\020\275\215\006\022\034\n\026MSG_WATCH_STOP_SVR_RE"
      "Q\020\276\215\006\022\034\n\026MSG_WATCH_STOP_SVR_ACK\020\277\215\006\022\030\n\022M"
      "SG_DISCONNECT_NTY\020\300\215\006\022\036\n\030MSG_ROLE_DATA_C"
      "HANGE_NTY\020\301\215\006\022\035\n\027MSG_SET_LAST_SERVER_NTY"
      "\020\302\215\006\022\034\n\026MSG_GM_STOP_SERVER_REQ\020\303\215\006\022\034\n\026MS"
      "G_GM_STOP_SERVER_ACK\020\304\215\006\022\031\n\023MSG_UDP_CONN"
      "ECT_REQ\020\305\215\006\022\031\n\023MSG_UDP_CONNECT_ACK\020\306\215\006\022\032"
      "\n\024MSG_SEAL_ACCOUNT_REQ\020\307\215\006\022\032\n\024MSG_SEAL_A"
      "CCOUNT_ACK\020\310\215\006\022\032\n\024MSG_NORMAL_MSGID_END\020\277"
      "\232\014\022\036\n\030MSG_LOGICSVR_MSGID_BEGIN\020\300\232\014\022\027\n\021MS"
      "G_ROLE_LIST_REQ\020\301\232\014\022\027\n\021MSG_ROLE_LIST_ACK"
      "\020\302\232\014\022\031\n\023MSG_ROLE_CREATE_REQ\020\303\232\014\022\031\n\023MSG_R"
      "OLE_CREATE_ACK\020\304\232\014\022\031\n\023MSG_ROLE_DELETE_RE"
      "Q\020\305\232\014\022\031\n\023MSG_ROLE_DELETE_ACK\020\306\232\014\022\030\n\022MSG_"
      "ROLE_LOGIN_REQ\020\307\232\014\022\030\n\022MSG_ROLE_LOGIN_ACK"
      "\020\310\232\014\022\031\n\023MSG_ROLE_LOGOUT_REQ\020\311\232\014\022\031\n\023MSG_R"
      "OLE_LOGOUT_ACK\020\312\232\014\022\025\n\017MSG_DATA_UPDATE\020\313\232"
      "\014\022\033\n\025MSG_NOTIFY_INTO_SCENE\020\316\232\014\022\035\n\027MSG_CO"
      "PYINFO_REPORT_REQ\020\320\232\014\022\027\n\021MSG_MAIN_COPY_R"
      "EQ\020\321\232\014\022\027\n\021MSG_MAIN_COPY_ACK\020\322\232\014\022\031\n\023MSG_A"
      "BORT_SCENE_NTF\020\323\232\014\022\031\n\023MSG_XXX_XXXX_XXXX_"
      "1\020\324\232\014\022\032\n\024MSG_BACK_TO_CITY_REQ\020\325\232\014\022\032\n\024MSG"
      "_BACK_TO_CITY_ACK\020\326\232\014\022\033\n\025MSG_BATTLE_RESU"
      "LT_NTY\020\327\232\014\022\035\n\027MSG_MAINCOPY_RESULT_NTY\020\330\232"
      "\014\022\030\n\022MSG_ROLE_CHANG_NTY\020\331\232\014\022\030\n\022MSG_BAG_C"
      "HANGE_NTY\020\332\232\014\022\030\n\022MSG_PET_CHANGE_NTY\020\333\232\014\022"
      "\032\n\024MSG_EQUIP_CHANGE_NTY\020\334\232\014\022\034\n\026MSG_PARTN"
      "ER_CHANGE_NTY\020\335\232\014\022\032\n\024MSG_MOUNT_CHANGE_NT"
      "Y\020\336\232\014\022\036\n\030MSG_ROLE_OTHER_LOGIN_NTY\020\337\232\014\022\032\n"
      "\024MSG_CHAT_MESSAGE_REQ\020\340\232\014\022\032\n\024MSG_CHAT_ME"
      "SSAGE_ACK\020\341\232\014\022\032\n\024MSG_CHAT_MESSAGE_NTY\020\342\232"
      "\014\022\031\n\023MSG_SETUP_EQUIP_REQ\020\343\232\014\022\031\n\023MSG_SETU"
      "P_EQUIP_ACK\020\344\232\014\022\031\n\023MSG_UNSET_EQUIP_REQ\020\345"
      "\232\014\022\031\n\023MSG_UNSET_EQUIP_ACK\020\346\232\014\022\027\n\021MSG_SET"
      "UP_PET_REQ\020\347\232\014\022\027\n\021MSG_SETUP_PET_ACK\020\350\232\014\022"
      "\027\n\021MSG_UNSET_PET_REQ\020\351\232\014\022\027\n\021MSG_UNSET_PE"
      "T_ACK\020\352\232\014\022\033\n\025MSG_SETUP_PARTNER_REQ\020\353\232\014\022\033"
      "\n\025MSG_SETUP_PARTNER_ACK\020\354\232\014\022\033\n\025MSG_UNSET"
      "_PARTNER_REQ\020\355\232\014\022\033\n\025MSG_UNSET_PARTNER_AC"
      "K\020\356\232\014\022\031\n\023MSG_SETUP_MOUNT_REQ\020\357\232\014\022\031\n\023MSG_"
      "SETUP_MOUNT_ACK\020\360\232\014\022\031\n\023MSG_UNSET_MOUNT_R"
      "EQ\020\361\232\014\022\031\n\023MSG_UNSET_MOUNT_ACK\020\362\232\014\022\026\n\020MSG"
      "_USE_ITEM_REQ\020\363\232\014\022\026\n\020MSG_USE_ITEM_ACK\020\364\232"
      "\014\022\027\n\021MSG_SETUP_GEM_REQ\020\365\232\014\022\027\n\021MSG_SETUP_"
      "GEM_ACK\020\366\232\014\022\027\n\021MSG_UNSET_GEM_REQ\020\367\232\014\022\027\n\021"
      "MSG_UNSET_GEM_ACK\020\370\232\014\022\034\n\026MSG_ROLE_RECONN"
      "ECT_REQ\020\371\232\014\022\034\n\026MSG_ROLE_RECONNECT_ACK\020\372\232"
      "\014\022\031\n\023MSG_MAIL_CHANGE_NTY\020\373\232\014\022\031\n\023MSG_TASK"
      "_CHANGE_NTY\020\374\232\014\022\036\n\030MSG_BROAD_MESSAGE_NOT"
      "IFY\020\375\232\014\022\037\n\031MSG_GASVR_REGTO_PROXY_REQ\020\376\232\014"
      "\022\037\n\031MSG_GASVR_REGTO_PROXY_ACK\020\377\232\014\022\027\n\021MSG"
      "_STORE_BUY_REQ\020\200\233\014\022\027\n\021MSG_STORE_BUY_ACK\020"
      "\201\233\014\022\030\n\022MSG_GEM_CHANGE_NTY\020\202\233\014\022\031\n\023MSG_RAN"
      "DOM_NAME_REQ\020\203\233\014\022\031\n\023MSG_RANDOM_NAME_ACK\020"
      "\204\233\014\022\031\n\023MSG_ROLE_REBORN_REQ\020\205\233\014\022\031\n\023MSG_RO"
      "LE_REBORN_ACK\020\206\233\014\022\031\n\023MSG_CREATE_ROOM_REQ"
      "\020\207\233\014\022\031\n\023MSG_CREATE_ROOM_ACK\020\210\233\014\022\027\n\021MSG_J"
      "OIN_ROOM_REQ\020\211\233\014\022\027\n\021MSG_JOIN_ROOM_ACK\020\212\233"
      "\014\022\027\n\021MSG_KICK_ROOM_REQ\020\213\233\014\022\027\n\021MSG_KICK_R"
      "OOM_ACK\020\214\233\014\022\030\n\022MSG_LEAVE_ROOM_REQ\020\215\233\014\022\030\n"
      "\022MSG_LEAVE_ROOM_ACK\020\216\233\014\022\030\n\022MSG_START_ROO"
      "M_REQ\020\217\233\014\022\030\n\022MSG_START_ROOM_ACK\020\220\233\014\022\033\n\025M"
      "SG_BROAD_ROOM_NOTIFY\020\221\233\014\022\027\n\021MSG_TEST_ADD"
      "_ITEM\020\336\247\022\022\034\n\026MSG_LOGICSVR_MSGID_END\020\337\247\022\022"
      "\036\n\030MSG_SCENESVR_MSGID_BEGIN\020\340\247\022\022\032\n\024MSG_C"
      "REATE_SCENE_REQ\020\341\247\022\022\032\n\024MSG_CREATE_SCENE_"
      "ACK\020\342\247\022\022\032\n\024MSG_DELETE_SCENE_REQ\020\343\247\022\022\032\n\024M"
      "SG_DELETE_SCENE_ACK\020\344\247\022\022\033\n\025MSG_SCENE_DES"
      "TROY_REQ\020\345\247\022\022\033\n\025MSG_SCENE_DESTROY_ACK\020\346\247"
      "\022\022\033\n\025MSG_TRANSFER_DATA_REQ\020\347\247\022\022\033\n\025MSG_TR"
      "ANSFER_DATA_ACK\020\350\247\022\022\037\n\031MSG_NOTIFY_ROLE_E"
      "NTER_REQ\020\351\247\022\022\037\n\031MSG_NOTIFY_ROLE_ENTER_AC"
      "K\020\352\247\022\022\031\n\023MSG_ENTER_SCENE_REQ\020\353\247\022\022\031\n\023MSG_"
      "ENTER_SCENE_ACK\020\354\247\022\022\031\n\023MSG_LEAVE_SCENE_R"
      "EQ\020\355\247\022\022\031\n\023MSG_LEAVE_SCENE_ACK\020\356\247\022\022\031\n\023MSG"
      "_ABORT_SCENE_REQ\020\357\247\022\022\031\n\023MSG_ABORT_SCENE_"
      "ACK\020\360\247\022\022\030\n\022MSG_SKILL_CAST_REQ\020\361\247\022\022\030\n\022MSG"
      "_SKILL_CAST_ACK\020\362\247\022\022\030\n\022MSG_SKILL_CAST_NT"
      "F\020\363\247\022\022\032\n\024MSG_SKILL_RESULT_NTF\020\364\247\022\022\030\n\022MSG"
      "_OBJECT_NEW_NTF\020\365\247\022\022\033\n\025MSG_OBJECT_CHANGE"
      "_NTF\020\366\247\022\022\033\n\025MSG_OBJECT_REMOVE_NTF\020\367\247\022\022\033\n"
      "\025MSG_OBJECT_ACTION_REQ\020\370\247\022\022\033\n\025MSG_OBJECT"
      "_ACTION_ACK\020\371\247\022\022\030\n\022MSG_HEART_BEAT_REQ\020\372\247"
      "\022\022\030\n\022MSG_HEART_BEAT_ACK\020\373\247\022\022\034\n\026MSG_USE_H"
      "P_BOOTTLE_REQ\020\374\247\022\022\034\n\026MSG_USE_HP_BOOTTLE_"
      "ACK\020\375\247\022\022\034\n\026MSG_USE_MP_BOOTTLE_REQ\020\376\247\022\022\034\n"
      "\026MSG_USE_MP_BOOTTLE_ACK\020\377\247\022\022\033\n\025MSG_OBJEC"
      "T_DIE_NOTIFY\020\200\250\022\022\031\n\023MSG_BATTLE_CHAT_REQ\020"
      "\201\250\022\022\031\n\023MSG_BATTLE_CHAT_ACK\020\202\250\022\022\030\n\022MSG_BU"
      "LLET_NEW_NTF\020\203\250\022\022\032\n\024MSG_SWITCH_MOUNT_REQ"
      "\020\204\250\022\022\032\n\024MSG_SWITCH_MOUNT_ACK\020\205\250\022\022\032\n\024MSG_"
      "PLAYER_CHAGE_NTF\020\206\250\022\022\035\n\027MSG_ACTOR_HITEFF"
      "ECT_NTF\020\207\250\022\022\032\n\024MSG_MOUNT_RIDING_REQ\020\210\250\022\022"
      "\032\n\024MSG_MOUNT_RIDING_ACK\020\211\250\022\022\034\n\026MSG_SCENE"
      "SVR_MSGID_END\020\377\264\030b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 4705);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Msg_ID.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Msg_5fID_2eproto
const ::google::protobuf::EnumDescriptor* MessageID_descriptor() {
  protobuf_Msg_5fID_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Msg_5fID_2eproto::file_level_enum_descriptors[0];
}
bool MessageID_IsValid(int value) {
  switch (value) {
    case 0:
    case 100000:
    case 100001:
    case 100002:
    case 100003:
    case 100004:
    case 100005:
    case 100006:
    case 100007:
    case 100008:
    case 100009:
    case 100010:
    case 100011:
    case 100012:
    case 100013:
    case 100014:
    case 100015:
    case 100016:
    case 100017:
    case 100018:
    case 100019:
    case 100020:
    case 100021:
    case 100022:
    case 100023:
    case 100024:
    case 100025:
    case 100026:
    case 100027:
    case 100028:
    case 100029:
    case 100030:
    case 100031:
    case 100032:
    case 100033:
    case 100034:
    case 100035:
    case 100036:
    case 100037:
    case 100038:
    case 100039:
    case 100040:
    case 199999:
    case 200000:
    case 200001:
    case 200002:
    case 200003:
    case 200004:
    case 200005:
    case 200006:
    case 200007:
    case 200008:
    case 200009:
    case 200010:
    case 200011:
    case 200014:
    case 200016:
    case 200017:
    case 200018:
    case 200019:
    case 200020:
    case 200021:
    case 200022:
    case 200023:
    case 200024:
    case 200025:
    case 200026:
    case 200027:
    case 200028:
    case 200029:
    case 200030:
    case 200031:
    case 200032:
    case 200033:
    case 200034:
    case 200035:
    case 200036:
    case 200037:
    case 200038:
    case 200039:
    case 200040:
    case 200041:
    case 200042:
    case 200043:
    case 200044:
    case 200045:
    case 200046:
    case 200047:
    case 200048:
    case 200049:
    case 200050:
    case 200051:
    case 200052:
    case 200053:
    case 200054:
    case 200055:
    case 200056:
    case 200057:
    case 200058:
    case 200059:
    case 200060:
    case 200061:
    case 200062:
    case 200063:
    case 200064:
    case 200065:
    case 200066:
    case 200067:
    case 200068:
    case 200069:
    case 200070:
    case 200071:
    case 200072:
    case 200073:
    case 200074:
    case 200075:
    case 200076:
    case 200077:
    case 200078:
    case 200079:
    case 200080:
    case 200081:
    case 299998:
    case 299999:
    case 300000:
    case 300001:
    case 300002:
    case 300003:
    case 300004:
    case 300005:
    case 300006:
    case 300007:
    case 300008:
    case 300009:
    case 300010:
    case 300011:
    case 300012:
    case 300013:
    case 300014:
    case 300015:
    case 300016:
    case 300017:
    case 300018:
    case 300019:
    case 300020:
    case 300021:
    case 300022:
    case 300023:
    case 300024:
    case 300025:
    case 300026:
    case 300027:
    case 300028:
    case 300029:
    case 300030:
    case 300031:
    case 300032:
    case 300033:
    case 300034:
    case 300035:
    case 300036:
    case 300037:
    case 300038:
    case 300039:
    case 300040:
    case 300041:
    case 399999:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
