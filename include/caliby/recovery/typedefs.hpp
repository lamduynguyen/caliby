#pragma once

#include <cstdint>
#include <unistd.h>

namespace caliby {
namespace recovery {

// GSN: Global Sequence Number - monotonic ordering of log records across all workers
using gsn_t = uint64_t;

// Transaction ID
using txid_t = uint64_t;

// Worker ID (logical index 0..MAX_WORKERS-1)
using wid_t = uint16_t;

// Page ID (matches Caliby PID = u64)
using pageid_t = uint64_t;

// Logical / local offset within a worker's circular WAL buffer
using wal_offset_t = uint64_t;

static constexpr wid_t MAX_NUMBER_OF_WORKERS = 128;
static constexpr txid_t INVALID_TXN_ID = 0;
static constexpr gsn_t INVALID_GSN = 0;
static constexpr pageid_t INVALID_PID = UINT64_MAX;

// Short aliases for code-portability.
using u8  = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

}  // namespace recovery
}  // namespace caliby
