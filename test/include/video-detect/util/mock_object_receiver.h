/**
 * MIT License Copyright (c) 2021 CppEngineer
 */

#ifndef VIDEO_DETECT_TEST_INCLUDE_VIDEO_DETECT_UTIL_MOCK_OBJECT_RECEIVER_H_
#define VIDEO_DETECT_TEST_INCLUDE_VIDEO_DETECT_UTIL_MOCK_OBJECT_RECEIVER_H_

#include <gmock/gmock.h>

#include "video-detect/util/object_receiver.h"

namespace video_detect {
namespace util {

/**
 * The MockObjectReceiver class is used to mock the functionality of the
 * ObjectReceiver class
 */
template <typename T, typename ReturnType = void>
class MockObjectReceiver : public ObjectReceiver<T, ReturnType> {
 public:
  MOCK_METHOD(ReturnType, Accept, (T), (override));

  virtual ~MockObjectReceiver() = default;
};

}  // namespace util
}  // namespace video_detect

#endif  // VIDEO_DETECT_TEST_INCLUDE_VIDEO_DETECT_UTIL_MOCK_OBJECT_RECEIVER_H_
