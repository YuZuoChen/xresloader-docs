// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pb_header_v3.proto

#include "pb_header_v3.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_pb_5fheader_5fv3_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_xresloader_header_pb_5fheader_5fv3_2eproto;
namespace org {
namespace xresloader {
namespace pb {
class xresloader_headerDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<xresloader_header> _instance;
} _xresloader_header_default_instance_;
class xresloader_datablocksDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<xresloader_datablocks> _instance;
} _xresloader_datablocks_default_instance_;
}  // namespace pb
}  // namespace xresloader
}  // namespace org
static void InitDefaultsscc_info_xresloader_datablocks_pb_5fheader_5fv3_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::org::xresloader::pb::_xresloader_datablocks_default_instance_;
    new (ptr) ::org::xresloader::pb::xresloader_datablocks();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::org::xresloader::pb::xresloader_datablocks::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_xresloader_datablocks_pb_5fheader_5fv3_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_xresloader_datablocks_pb_5fheader_5fv3_2eproto}, {
      &scc_info_xresloader_header_pb_5fheader_5fv3_2eproto.base,}};

static void InitDefaultsscc_info_xresloader_header_pb_5fheader_5fv3_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::org::xresloader::pb::_xresloader_header_default_instance_;
    new (ptr) ::org::xresloader::pb::xresloader_header();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::org::xresloader::pb::xresloader_header::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_xresloader_header_pb_5fheader_5fv3_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_xresloader_header_pb_5fheader_5fv3_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_pb_5fheader_5fv3_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_pb_5fheader_5fv3_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_pb_5fheader_5fv3_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_pb_5fheader_5fv3_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::org::xresloader::pb::xresloader_header, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::org::xresloader::pb::xresloader_header, xres_ver_),
  PROTOBUF_FIELD_OFFSET(::org::xresloader::pb::xresloader_header, data_ver_),
  PROTOBUF_FIELD_OFFSET(::org::xresloader::pb::xresloader_header, count_),
  PROTOBUF_FIELD_OFFSET(::org::xresloader::pb::xresloader_header, hash_code_),
  PROTOBUF_FIELD_OFFSET(::org::xresloader::pb::xresloader_header, description_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::org::xresloader::pb::xresloader_datablocks, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::org::xresloader::pb::xresloader_datablocks, header_),
  PROTOBUF_FIELD_OFFSET(::org::xresloader::pb::xresloader_datablocks, data_block_),
  PROTOBUF_FIELD_OFFSET(::org::xresloader::pb::xresloader_datablocks, data_message_type_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::org::xresloader::pb::xresloader_header)},
  { 10, -1, sizeof(::org::xresloader::pb::xresloader_datablocks)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::org::xresloader::pb::_xresloader_header_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::org::xresloader::pb::_xresloader_datablocks_default_instance_),
};

const char descriptor_table_protodef_pb_5fheader_5fv3_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022pb_header_v3.proto\022\021org.xresloader.pb\""
  "n\n\021xresloader_header\022\020\n\010xres_ver\030\001 \001(\t\022\020"
  "\n\010data_ver\030\002 \001(\t\022\r\n\005count\030\003 \001(\r\022\021\n\thash_"
  "code\030\004 \001(\t\022\023\n\013description\030\005 \001(\t\"|\n\025xresl"
  "oader_datablocks\0224\n\006header\030\001 \001(\0132$.org.x"
  "resloader.pb.xresloader_header\022\022\n\ndata_b"
  "lock\030\002 \003(\014\022\031\n\021data_message_type\030\003 \001(\tb\006p"
  "roto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_pb_5fheader_5fv3_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_pb_5fheader_5fv3_2eproto_sccs[2] = {
  &scc_info_xresloader_datablocks_pb_5fheader_5fv3_2eproto.base,
  &scc_info_xresloader_header_pb_5fheader_5fv3_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_pb_5fheader_5fv3_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_pb_5fheader_5fv3_2eproto = {
  false, false, descriptor_table_protodef_pb_5fheader_5fv3_2eproto, "pb_header_v3.proto", 285,
  &descriptor_table_pb_5fheader_5fv3_2eproto_once, descriptor_table_pb_5fheader_5fv3_2eproto_sccs, descriptor_table_pb_5fheader_5fv3_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_pb_5fheader_5fv3_2eproto::offsets,
  file_level_metadata_pb_5fheader_5fv3_2eproto, 2, file_level_enum_descriptors_pb_5fheader_5fv3_2eproto, file_level_service_descriptors_pb_5fheader_5fv3_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_pb_5fheader_5fv3_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_pb_5fheader_5fv3_2eproto)), true);
namespace org {
namespace xresloader {
namespace pb {

// ===================================================================

void xresloader_header::InitAsDefaultInstance() {
}
class xresloader_header::_Internal {
 public:
};

xresloader_header::xresloader_header(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:org.xresloader.pb.xresloader_header)
}
xresloader_header::xresloader_header(const xresloader_header& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  xres_ver_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_xres_ver().empty()) {
    xres_ver_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_xres_ver(),
      GetArena());
  }
  data_ver_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_data_ver().empty()) {
    data_ver_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_data_ver(),
      GetArena());
  }
  hash_code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_hash_code().empty()) {
    hash_code_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_hash_code(),
      GetArena());
  }
  description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_description().empty()) {
    description_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_description(),
      GetArena());
  }
  count_ = from.count_;
  // @@protoc_insertion_point(copy_constructor:org.xresloader.pb.xresloader_header)
}

void xresloader_header::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_xresloader_header_pb_5fheader_5fv3_2eproto.base);
  xres_ver_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_ver_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  hash_code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  count_ = 0u;
}

xresloader_header::~xresloader_header() {
  // @@protoc_insertion_point(destructor:org.xresloader.pb.xresloader_header)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void xresloader_header::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  xres_ver_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_ver_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  hash_code_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  description_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void xresloader_header::ArenaDtor(void* object) {
  xresloader_header* _this = reinterpret_cast< xresloader_header* >(object);
  (void)_this;
}
void xresloader_header::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void xresloader_header::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const xresloader_header& xresloader_header::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_xresloader_header_pb_5fheader_5fv3_2eproto.base);
  return *internal_default_instance();
}


void xresloader_header::Clear() {
// @@protoc_insertion_point(message_clear_start:org.xresloader.pb.xresloader_header)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  xres_ver_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  data_ver_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  hash_code_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  description_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  count_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* xresloader_header::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string xres_ver = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_xres_ver();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "org.xresloader.pb.xresloader_header.xres_ver"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string data_ver = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_data_ver();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "org.xresloader.pb.xresloader_header.data_ver"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 count = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          count_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string hash_code = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_hash_code();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "org.xresloader.pb.xresloader_header.hash_code"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string description = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_description();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "org.xresloader.pb.xresloader_header.description"));
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

::PROTOBUF_NAMESPACE_ID::uint8* xresloader_header::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:org.xresloader.pb.xresloader_header)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string xres_ver = 1;
  if (this->xres_ver().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_xres_ver().data(), static_cast<int>(this->_internal_xres_ver().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "org.xresloader.pb.xresloader_header.xres_ver");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_xres_ver(), target);
  }

  // string data_ver = 2;
  if (this->data_ver().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_data_ver().data(), static_cast<int>(this->_internal_data_ver().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "org.xresloader.pb.xresloader_header.data_ver");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_data_ver(), target);
  }

  // uint32 count = 3;
  if (this->count() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_count(), target);
  }

  // string hash_code = 4;
  if (this->hash_code().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_hash_code().data(), static_cast<int>(this->_internal_hash_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "org.xresloader.pb.xresloader_header.hash_code");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_hash_code(), target);
  }

  // string description = 5;
  if (this->description().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_description().data(), static_cast<int>(this->_internal_description().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "org.xresloader.pb.xresloader_header.description");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_description(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:org.xresloader.pb.xresloader_header)
  return target;
}

size_t xresloader_header::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:org.xresloader.pb.xresloader_header)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string xres_ver = 1;
  if (this->xres_ver().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_xres_ver());
  }

  // string data_ver = 2;
  if (this->data_ver().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_data_ver());
  }

  // string hash_code = 4;
  if (this->hash_code().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_hash_code());
  }

  // string description = 5;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_description());
  }

  // uint32 count = 3;
  if (this->count() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_count());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void xresloader_header::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:org.xresloader.pb.xresloader_header)
  GOOGLE_DCHECK_NE(&from, this);
  const xresloader_header* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<xresloader_header>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:org.xresloader.pb.xresloader_header)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:org.xresloader.pb.xresloader_header)
    MergeFrom(*source);
  }
}

void xresloader_header::MergeFrom(const xresloader_header& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:org.xresloader.pb.xresloader_header)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.xres_ver().size() > 0) {
    _internal_set_xres_ver(from._internal_xres_ver());
  }
  if (from.data_ver().size() > 0) {
    _internal_set_data_ver(from._internal_data_ver());
  }
  if (from.hash_code().size() > 0) {
    _internal_set_hash_code(from._internal_hash_code());
  }
  if (from.description().size() > 0) {
    _internal_set_description(from._internal_description());
  }
  if (from.count() != 0) {
    _internal_set_count(from._internal_count());
  }
}

void xresloader_header::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:org.xresloader.pb.xresloader_header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void xresloader_header::CopyFrom(const xresloader_header& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:org.xresloader.pb.xresloader_header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool xresloader_header::IsInitialized() const {
  return true;
}

void xresloader_header::InternalSwap(xresloader_header* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  xres_ver_.Swap(&other->xres_ver_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  data_ver_.Swap(&other->data_ver_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  hash_code_.Swap(&other->hash_code_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  description_.Swap(&other->description_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(count_, other->count_);
}

::PROTOBUF_NAMESPACE_ID::Metadata xresloader_header::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void xresloader_datablocks::InitAsDefaultInstance() {
  ::org::xresloader::pb::_xresloader_datablocks_default_instance_._instance.get_mutable()->header_ = const_cast< ::org::xresloader::pb::xresloader_header*>(
      ::org::xresloader::pb::xresloader_header::internal_default_instance());
}
class xresloader_datablocks::_Internal {
 public:
  static const ::org::xresloader::pb::xresloader_header& header(const xresloader_datablocks* msg);
};

const ::org::xresloader::pb::xresloader_header&
xresloader_datablocks::_Internal::header(const xresloader_datablocks* msg) {
  return *msg->header_;
}
xresloader_datablocks::xresloader_datablocks(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  data_block_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:org.xresloader.pb.xresloader_datablocks)
}
xresloader_datablocks::xresloader_datablocks(const xresloader_datablocks& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      data_block_(from.data_block_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  data_message_type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_data_message_type().empty()) {
    data_message_type_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_data_message_type(),
      GetArena());
  }
  if (from._internal_has_header()) {
    header_ = new ::org::xresloader::pb::xresloader_header(*from.header_);
  } else {
    header_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:org.xresloader.pb.xresloader_datablocks)
}

void xresloader_datablocks::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_xresloader_datablocks_pb_5fheader_5fv3_2eproto.base);
  data_message_type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  header_ = nullptr;
}

xresloader_datablocks::~xresloader_datablocks() {
  // @@protoc_insertion_point(destructor:org.xresloader.pb.xresloader_datablocks)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void xresloader_datablocks::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  data_message_type_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
}

void xresloader_datablocks::ArenaDtor(void* object) {
  xresloader_datablocks* _this = reinterpret_cast< xresloader_datablocks* >(object);
  (void)_this;
}
void xresloader_datablocks::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void xresloader_datablocks::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const xresloader_datablocks& xresloader_datablocks::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_xresloader_datablocks_pb_5fheader_5fv3_2eproto.base);
  return *internal_default_instance();
}


void xresloader_datablocks::Clear() {
// @@protoc_insertion_point(message_clear_start:org.xresloader.pb.xresloader_datablocks)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_block_.Clear();
  data_message_type_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  if (GetArena() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* xresloader_datablocks::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .org.xresloader.pb.xresloader_header header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_header(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated bytes data_block = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_data_block();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // string data_message_type = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_data_message_type();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "org.xresloader.pb.xresloader_datablocks.data_message_type"));
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

::PROTOBUF_NAMESPACE_ID::uint8* xresloader_datablocks::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:org.xresloader.pb.xresloader_datablocks)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .org.xresloader.pb.xresloader_header header = 1;
  if (this->has_header()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::header(this), target, stream);
  }

  // repeated bytes data_block = 2;
  for (int i = 0, n = this->_internal_data_block_size(); i < n; i++) {
    const auto& s = this->_internal_data_block(i);
    target = stream->WriteBytes(2, s, target);
  }

  // string data_message_type = 3;
  if (this->data_message_type().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_data_message_type().data(), static_cast<int>(this->_internal_data_message_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "org.xresloader.pb.xresloader_datablocks.data_message_type");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_data_message_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:org.xresloader.pb.xresloader_datablocks)
  return target;
}

size_t xresloader_datablocks::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:org.xresloader.pb.xresloader_datablocks)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bytes data_block = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(data_block_.size());
  for (int i = 0, n = data_block_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
      data_block_.Get(i));
  }

  // string data_message_type = 3;
  if (this->data_message_type().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_data_message_type());
  }

  // .org.xresloader.pb.xresloader_header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *header_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void xresloader_datablocks::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:org.xresloader.pb.xresloader_datablocks)
  GOOGLE_DCHECK_NE(&from, this);
  const xresloader_datablocks* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<xresloader_datablocks>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:org.xresloader.pb.xresloader_datablocks)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:org.xresloader.pb.xresloader_datablocks)
    MergeFrom(*source);
  }
}

void xresloader_datablocks::MergeFrom(const xresloader_datablocks& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:org.xresloader.pb.xresloader_datablocks)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_block_.MergeFrom(from.data_block_);
  if (from.data_message_type().size() > 0) {
    _internal_set_data_message_type(from._internal_data_message_type());
  }
  if (from.has_header()) {
    _internal_mutable_header()->::org::xresloader::pb::xresloader_header::MergeFrom(from._internal_header());
  }
}

void xresloader_datablocks::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:org.xresloader.pb.xresloader_datablocks)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void xresloader_datablocks::CopyFrom(const xresloader_datablocks& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:org.xresloader.pb.xresloader_datablocks)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool xresloader_datablocks::IsInitialized() const {
  return true;
}

void xresloader_datablocks::InternalSwap(xresloader_datablocks* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  data_block_.InternalSwap(&other->data_block_);
  data_message_type_.Swap(&other->data_message_type_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(header_, other->header_);
}

::PROTOBUF_NAMESPACE_ID::Metadata xresloader_datablocks::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace pb
}  // namespace xresloader
}  // namespace org
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::org::xresloader::pb::xresloader_header* Arena::CreateMaybeMessage< ::org::xresloader::pb::xresloader_header >(Arena* arena) {
  return Arena::CreateMessageInternal< ::org::xresloader::pb::xresloader_header >(arena);
}
template<> PROTOBUF_NOINLINE ::org::xresloader::pb::xresloader_datablocks* Arena::CreateMaybeMessage< ::org::xresloader::pb::xresloader_datablocks >(Arena* arena) {
  return Arena::CreateMessageInternal< ::org::xresloader::pb::xresloader_datablocks >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
