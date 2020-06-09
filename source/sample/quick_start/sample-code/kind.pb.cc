// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kind.proto

#include "kind.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class role_upgrade_cfgDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<role_upgrade_cfg> _instance;
} _role_upgrade_cfg_default_instance_;
static void InitDefaultsscc_info_role_upgrade_cfg_kind_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_role_upgrade_cfg_default_instance_;
    new (ptr) ::role_upgrade_cfg();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::role_upgrade_cfg::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_role_upgrade_cfg_kind_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_role_upgrade_cfg_kind_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_kind_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_kind_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_kind_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_kind_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::role_upgrade_cfg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::role_upgrade_cfg, id_),
  PROTOBUF_FIELD_OFFSET(::role_upgrade_cfg, level_),
  PROTOBUF_FIELD_OFFSET(::role_upgrade_cfg, costtype_),
  PROTOBUF_FIELD_OFFSET(::role_upgrade_cfg, costvalue_),
  PROTOBUF_FIELD_OFFSET(::role_upgrade_cfg, scoreadd_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::role_upgrade_cfg)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_role_upgrade_cfg_default_instance_),
};

const char descriptor_table_protodef_kind_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nkind.proto\032\020xresloader.proto\"\207\001\n\020role_"
  "upgrade_cfg\022\n\n\002Id\030\001 \001(\r\022\r\n\005Level\030\002 \001(\r\0223"
  "\n\010CostType\030\003 \001(\rB!\312>\tcost_type\232\?\022Refer t"
  "o cost_type\022\021\n\tCostValue\030\004 \001(\005\022\020\n\010ScoreA"
  "dd\030\005 \001(\005*Z\n\tcost_type\022\021\n\rEN_CT_UNKNOWN\020\000"
  "\022\033\n\013EN_CT_MONEY\020\221N\032\t\322>\006\351\207\221\345\270\201\022\035\n\rEN_CT_D"
  "IAMOND\020\365N\032\t\322>\006\351\222\273\347\237\263b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_kind_2eproto_deps[1] = {
  &::descriptor_table_xresloader_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_kind_2eproto_sccs[1] = {
  &scc_info_role_upgrade_cfg_kind_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_kind_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_kind_2eproto = {
  false, false, descriptor_table_protodef_kind_2eproto, "kind.proto", 268,
  &descriptor_table_kind_2eproto_once, descriptor_table_kind_2eproto_sccs, descriptor_table_kind_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_kind_2eproto::offsets,
  file_level_metadata_kind_2eproto, 1, file_level_enum_descriptors_kind_2eproto, file_level_service_descriptors_kind_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_kind_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_kind_2eproto)), true);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* cost_type_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_kind_2eproto);
  return file_level_enum_descriptors_kind_2eproto[0];
}
bool cost_type_IsValid(int value) {
  switch (value) {
    case 0:
    case 10001:
    case 10101:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void role_upgrade_cfg::InitAsDefaultInstance() {
}
class role_upgrade_cfg::_Internal {
 public:
};

role_upgrade_cfg::role_upgrade_cfg(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:role_upgrade_cfg)
}
role_upgrade_cfg::role_upgrade_cfg(const role_upgrade_cfg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&scoreadd_) -
    reinterpret_cast<char*>(&id_)) + sizeof(scoreadd_));
  // @@protoc_insertion_point(copy_constructor:role_upgrade_cfg)
}

void role_upgrade_cfg::SharedCtor() {
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&scoreadd_) -
      reinterpret_cast<char*>(&id_)) + sizeof(scoreadd_));
}

role_upgrade_cfg::~role_upgrade_cfg() {
  // @@protoc_insertion_point(destructor:role_upgrade_cfg)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void role_upgrade_cfg::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void role_upgrade_cfg::ArenaDtor(void* object) {
  role_upgrade_cfg* _this = reinterpret_cast< role_upgrade_cfg* >(object);
  (void)_this;
}
void role_upgrade_cfg::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void role_upgrade_cfg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const role_upgrade_cfg& role_upgrade_cfg::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_role_upgrade_cfg_kind_2eproto.base);
  return *internal_default_instance();
}


void role_upgrade_cfg::Clear() {
// @@protoc_insertion_point(message_clear_start:role_upgrade_cfg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&scoreadd_) -
      reinterpret_cast<char*>(&id_)) + sizeof(scoreadd_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* role_upgrade_cfg::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint32 Id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 Level = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          level_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 CostType = 3 [(.org.xresloader.verifier) = "cost_type", (.org.xresloader.field_description) = "Refer to cost_type"];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          costtype_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 CostValue = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          costvalue_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 ScoreAdd = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          scoreadd_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* role_upgrade_cfg::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:role_upgrade_cfg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 Id = 1;
  if (this->id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_id(), target);
  }

  // uint32 Level = 2;
  if (this->level() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_level(), target);
  }

  // uint32 CostType = 3 [(.org.xresloader.verifier) = "cost_type", (.org.xresloader.field_description) = "Refer to cost_type"];
  if (this->costtype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_costtype(), target);
  }

  // int32 CostValue = 4;
  if (this->costvalue() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_costvalue(), target);
  }

  // int32 ScoreAdd = 5;
  if (this->scoreadd() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_scoreadd(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:role_upgrade_cfg)
  return target;
}

size_t role_upgrade_cfg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:role_upgrade_cfg)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 Id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_id());
  }

  // uint32 Level = 2;
  if (this->level() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_level());
  }

  // uint32 CostType = 3 [(.org.xresloader.verifier) = "cost_type", (.org.xresloader.field_description) = "Refer to cost_type"];
  if (this->costtype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_costtype());
  }

  // int32 CostValue = 4;
  if (this->costvalue() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_costvalue());
  }

  // int32 ScoreAdd = 5;
  if (this->scoreadd() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_scoreadd());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void role_upgrade_cfg::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:role_upgrade_cfg)
  GOOGLE_DCHECK_NE(&from, this);
  const role_upgrade_cfg* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<role_upgrade_cfg>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:role_upgrade_cfg)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:role_upgrade_cfg)
    MergeFrom(*source);
  }
}

void role_upgrade_cfg::MergeFrom(const role_upgrade_cfg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:role_upgrade_cfg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.id() != 0) {
    _internal_set_id(from._internal_id());
  }
  if (from.level() != 0) {
    _internal_set_level(from._internal_level());
  }
  if (from.costtype() != 0) {
    _internal_set_costtype(from._internal_costtype());
  }
  if (from.costvalue() != 0) {
    _internal_set_costvalue(from._internal_costvalue());
  }
  if (from.scoreadd() != 0) {
    _internal_set_scoreadd(from._internal_scoreadd());
  }
}

void role_upgrade_cfg::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:role_upgrade_cfg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void role_upgrade_cfg::CopyFrom(const role_upgrade_cfg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:role_upgrade_cfg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool role_upgrade_cfg::IsInitialized() const {
  return true;
}

void role_upgrade_cfg::InternalSwap(role_upgrade_cfg* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(role_upgrade_cfg, scoreadd_)
      + sizeof(role_upgrade_cfg::scoreadd_)
      - PROTOBUF_FIELD_OFFSET(role_upgrade_cfg, id_)>(
          reinterpret_cast<char*>(&id_),
          reinterpret_cast<char*>(&other->id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata role_upgrade_cfg::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::role_upgrade_cfg* Arena::CreateMaybeMessage< ::role_upgrade_cfg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::role_upgrade_cfg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
