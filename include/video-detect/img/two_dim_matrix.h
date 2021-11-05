/**
 * MIT License Copyright (c) 2021 CppEngineer
 */

#ifndef VIDEO_DETECT_INCLUDE_VIDEO_DETECT_IMG_VECTOR_2D_H_
#define VIDEO_DETECT_INCLUDE_VIDEO_DETECT_IMG_VECTOR_2D_H_

#include <initializer_list>
#include <vector>

namespace video_detect {
namespace img {

/**
 * The Vector2D aliases a 2D vector
 */
template <typename T> using Vector2D = std::vector<std::vector<T>>;

} // namespace img
} // namespace video_detect

#endif // VIDEO_DETECT_INCLUDE_VIDEO_DETECT_IMG_VECTOR_2D_H_