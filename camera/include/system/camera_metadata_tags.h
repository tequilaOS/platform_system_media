/*
 * Copyright (C) 2012 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * !! Do not include this file directly !!
 *
 * Include camera_metadata.h instead.
 */

/**
 * ! Do not edit this file directly !
 *
 * Generated automatically from camera_metadata_tags.mako
 */

/** TODO: Nearly every enum in this file needs a description */

/**
 * Top level hierarchy definitions for camera metadata. *_INFO sections are for
 * the static metadata that can be retrived without opening the camera device.
 * New sections must be added right before ANDROID_SECTION_COUNT to maintain
 * existing enumerations.
 */
typedef enum camera_metadata_section {
    ANDROID_COLOR_CORRECTION,
    ANDROID_CONTROL,
    ANDROID_DEMOSAIC,
    ANDROID_EDGE,
    ANDROID_FLASH,
    ANDROID_FLASH_INFO,
    ANDROID_GEOMETRIC,
    ANDROID_HOT_PIXEL,
    ANDROID_HOT_PIXEL_INFO,
    ANDROID_JPEG,
    ANDROID_LENS,
    ANDROID_LENS_INFO,
    ANDROID_NOISE_REDUCTION,
    ANDROID_QUIRKS,
    ANDROID_REQUEST,
    ANDROID_SCALER,
    ANDROID_SENSOR,
    ANDROID_SENSOR_INFO,
    ANDROID_SHADING,
    ANDROID_STATISTICS,
    ANDROID_STATISTICS_INFO,
    ANDROID_TONEMAP,
    ANDROID_LED,
    ANDROID_SECTION_COUNT,

    VENDOR_SECTION = 0x8000
} camera_metadata_section_t;

/**
 * Hierarchy positions in enum space. All vendor extension tags must be
 * defined with tag >= VENDOR_SECTION_START
 */
typedef enum camera_metadata_section_start {
    ANDROID_COLOR_CORRECTION_START = ANDROID_COLOR_CORRECTION  << 16,
    ANDROID_CONTROL_START          = ANDROID_CONTROL           << 16,
    ANDROID_DEMOSAIC_START         = ANDROID_DEMOSAIC          << 16,
    ANDROID_EDGE_START             = ANDROID_EDGE              << 16,
    ANDROID_FLASH_START            = ANDROID_FLASH             << 16,
    ANDROID_FLASH_INFO_START       = ANDROID_FLASH_INFO        << 16,
    ANDROID_GEOMETRIC_START        = ANDROID_GEOMETRIC         << 16,
    ANDROID_HOT_PIXEL_START        = ANDROID_HOT_PIXEL         << 16,
    ANDROID_HOT_PIXEL_INFO_START   = ANDROID_HOT_PIXEL_INFO    << 16,
    ANDROID_JPEG_START             = ANDROID_JPEG              << 16,
    ANDROID_LENS_START             = ANDROID_LENS              << 16,
    ANDROID_LENS_INFO_START        = ANDROID_LENS_INFO         << 16,
    ANDROID_NOISE_REDUCTION_START  = ANDROID_NOISE_REDUCTION   << 16,
    ANDROID_QUIRKS_START           = ANDROID_QUIRKS            << 16,
    ANDROID_REQUEST_START          = ANDROID_REQUEST           << 16,
    ANDROID_SCALER_START           = ANDROID_SCALER            << 16,
    ANDROID_SENSOR_START           = ANDROID_SENSOR            << 16,
    ANDROID_SENSOR_INFO_START      = ANDROID_SENSOR_INFO       << 16,
    ANDROID_SHADING_START          = ANDROID_SHADING           << 16,
    ANDROID_STATISTICS_START       = ANDROID_STATISTICS        << 16,
    ANDROID_STATISTICS_INFO_START  = ANDROID_STATISTICS_INFO   << 16,
    ANDROID_TONEMAP_START          = ANDROID_TONEMAP           << 16,
    ANDROID_LED_START              = ANDROID_LED               << 16,
    VENDOR_SECTION_START           = VENDOR_SECTION            << 16
} camera_metadata_section_start_t;

/**
 * Main enum for defining camera metadata tags.  New entries must always go
 * before the section _END tag to preserve existing enumeration values.  In
 * addition, the name and type of the tag needs to be added to
 * system/media/camera/src/camera_metadata_tag_info.c
 */
typedef enum camera_metadata_tag {
    ANDROID_COLOR_CORRECTION_MODE  = ANDROID_COLOR_CORRECTION_START,
    ANDROID_COLOR_CORRECTION_TRANSFORM,
    ANDROID_COLOR_CORRECTION_END,

    ANDROID_CONTROL_AE_ANTIBANDING_MODE
                                   = ANDROID_CONTROL_START,
    ANDROID_CONTROL_AE_EXPOSURE_COMPENSATION,
    ANDROID_CONTROL_AE_LOCK,
    ANDROID_CONTROL_AE_MODE,
    ANDROID_CONTROL_AE_REGIONS,
    ANDROID_CONTROL_AE_TARGET_FPS_RANGE,
    ANDROID_CONTROL_AE_PRECAPTURE_TRIGGER,
    ANDROID_CONTROL_AF_MODE,
    ANDROID_CONTROL_AF_REGIONS,
    ANDROID_CONTROL_AF_TRIGGER,
    ANDROID_CONTROL_AWB_LOCK,
    ANDROID_CONTROL_AWB_MODE,
    ANDROID_CONTROL_AWB_REGIONS,
    ANDROID_CONTROL_CAPTURE_INTENT,
    ANDROID_CONTROL_EFFECT_MODE,
    ANDROID_CONTROL_MODE,
    ANDROID_CONTROL_SCENE_MODE,
    ANDROID_CONTROL_VIDEO_STABILIZATION_MODE,
    ANDROID_CONTROL_AE_AVAILABLE_ANTIBANDING_MODES,
    ANDROID_CONTROL_AE_AVAILABLE_MODES,
    ANDROID_CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES,
    ANDROID_CONTROL_AE_COMPENSATION_RANGE,
    ANDROID_CONTROL_AE_COMPENSATION_STEP,
    ANDROID_CONTROL_AF_AVAILABLE_MODES,
    ANDROID_CONTROL_AVAILABLE_EFFECTS,
    ANDROID_CONTROL_AVAILABLE_SCENE_MODES,
    ANDROID_CONTROL_AVAILABLE_VIDEO_STABILIZATION_MODES,
    ANDROID_CONTROL_AWB_AVAILABLE_MODES,
    ANDROID_CONTROL_MAX_REGIONS,
    ANDROID_CONTROL_SCENE_MODE_OVERRIDES,
    ANDROID_CONTROL_AE_PRECAPTURE_ID,
    ANDROID_CONTROL_AE_STATE,
    ANDROID_CONTROL_AF_STATE,
    ANDROID_CONTROL_AF_TRIGGER_ID,
    ANDROID_CONTROL_AWB_STATE,
    ANDROID_CONTROL_END,

    ANDROID_DEMOSAIC_MODE          = ANDROID_DEMOSAIC_START,
    ANDROID_DEMOSAIC_END,

    ANDROID_EDGE_MODE              = ANDROID_EDGE_START,
    ANDROID_EDGE_STRENGTH,
    ANDROID_EDGE_END,

    ANDROID_FLASH_FIRING_POWER     = ANDROID_FLASH_START,
    ANDROID_FLASH_FIRING_TIME,
    ANDROID_FLASH_MODE,
    ANDROID_FLASH_COLOR_TEMPERATURE,
    ANDROID_FLASH_MAX_ENERGY,
    ANDROID_FLASH_STATE,
    ANDROID_FLASH_END,

    ANDROID_FLASH_INFO_AVAILABLE   = ANDROID_FLASH_INFO_START,
    ANDROID_FLASH_INFO_CHARGE_DURATION,
    ANDROID_FLASH_INFO_END,

    ANDROID_GEOMETRIC_MODE         = ANDROID_GEOMETRIC_START,
    ANDROID_GEOMETRIC_STRENGTH,
    ANDROID_GEOMETRIC_END,

    ANDROID_HOT_PIXEL_MODE         = ANDROID_HOT_PIXEL_START,
    ANDROID_HOT_PIXEL_END,

    ANDROID_HOT_PIXEL_INFO_MAP     = ANDROID_HOT_PIXEL_INFO_START,
    ANDROID_HOT_PIXEL_INFO_END,

    ANDROID_JPEG_GPS_COORDINATES   = ANDROID_JPEG_START,
    ANDROID_JPEG_GPS_PROCESSING_METHOD,
    ANDROID_JPEG_GPS_TIMESTAMP,
    ANDROID_JPEG_ORIENTATION,
    ANDROID_JPEG_QUALITY,
    ANDROID_JPEG_THUMBNAIL_QUALITY,
    ANDROID_JPEG_THUMBNAIL_SIZE,
    ANDROID_JPEG_AVAILABLE_THUMBNAIL_SIZES,
    ANDROID_JPEG_MAX_SIZE,
    ANDROID_JPEG_SIZE,
    ANDROID_JPEG_END,

    ANDROID_LENS_APERTURE          = ANDROID_LENS_START,
    ANDROID_LENS_FILTER_DENSITY,
    ANDROID_LENS_FOCAL_LENGTH,
    ANDROID_LENS_FOCUS_DISTANCE,
    ANDROID_LENS_OPTICAL_STABILIZATION_MODE,
    ANDROID_LENS_FACING,
    ANDROID_LENS_OPTICAL_AXIS_ANGLE,
    ANDROID_LENS_POSITION,
    ANDROID_LENS_FOCUS_RANGE,
    ANDROID_LENS_STATE,
    ANDROID_LENS_END,

    ANDROID_LENS_INFO_AVAILABLE_APERTURES
                                   = ANDROID_LENS_INFO_START,
    ANDROID_LENS_INFO_AVAILABLE_FILTER_DENSITIES,
    ANDROID_LENS_INFO_AVAILABLE_FOCAL_LENGTHS,
    ANDROID_LENS_INFO_AVAILABLE_OPTICAL_STABILIZATION,
    ANDROID_LENS_INFO_GEOMETRIC_CORRECTION_MAP,
    ANDROID_LENS_INFO_GEOMETRIC_CORRECTION_MAP_SIZE,
    ANDROID_LENS_INFO_HYPERFOCAL_DISTANCE,
    ANDROID_LENS_INFO_MINIMUM_FOCUS_DISTANCE,
    ANDROID_LENS_INFO_SHADING_MAP,
    ANDROID_LENS_INFO_SHADING_MAP_SIZE,
    ANDROID_LENS_INFO_END,

    ANDROID_NOISE_REDUCTION_MODE   = ANDROID_NOISE_REDUCTION_START,
    ANDROID_NOISE_REDUCTION_STRENGTH,
    ANDROID_NOISE_REDUCTION_END,

    ANDROID_QUIRKS_METERING_CROP_REGION
                                   = ANDROID_QUIRKS_START,
    ANDROID_QUIRKS_TRIGGER_AF_WITH_AUTO,
    ANDROID_QUIRKS_USE_ZSL_FORMAT,
    ANDROID_QUIRKS_END,

    ANDROID_REQUEST_FRAME_COUNT    = ANDROID_REQUEST_START,
    ANDROID_REQUEST_ID,
    ANDROID_REQUEST_INPUT_STREAMS,
    ANDROID_REQUEST_METADATA_MODE,
    ANDROID_REQUEST_OUTPUT_STREAMS,
    ANDROID_REQUEST_TYPE,
    ANDROID_REQUEST_MAX_NUM_OUTPUT_STREAMS,
    ANDROID_REQUEST_MAX_NUM_REPROCESS_STREAMS,
    ANDROID_REQUEST_END,

    ANDROID_SCALER_CROP_REGION     = ANDROID_SCALER_START,
    ANDROID_SCALER_AVAILABLE_FORMATS,
    ANDROID_SCALER_AVAILABLE_JPEG_MIN_DURATIONS,
    ANDROID_SCALER_AVAILABLE_JPEG_SIZES,
    ANDROID_SCALER_AVAILABLE_MAX_DIGITAL_ZOOM,
    ANDROID_SCALER_AVAILABLE_PROCESSED_MIN_DURATIONS,
    ANDROID_SCALER_AVAILABLE_PROCESSED_SIZES,
    ANDROID_SCALER_AVAILABLE_RAW_MIN_DURATIONS,
    ANDROID_SCALER_AVAILABLE_RAW_SIZES,
    ANDROID_SCALER_MAX_DIGITAL_ZOOM,
    ANDROID_SCALER_END,

    ANDROID_SENSOR_EXPOSURE_TIME   = ANDROID_SENSOR_START,
    ANDROID_SENSOR_FRAME_DURATION,
    ANDROID_SENSOR_SENSITIVITY,
    ANDROID_SENSOR_BASE_GAIN_FACTOR,
    ANDROID_SENSOR_BLACK_LEVEL_PATTERN,
    ANDROID_SENSOR_CALIBRATION_TRANSFORM1,
    ANDROID_SENSOR_CALIBRATION_TRANSFORM2,
    ANDROID_SENSOR_COLOR_TRANSFORM1,
    ANDROID_SENSOR_COLOR_TRANSFORM2,
    ANDROID_SENSOR_FORWARD_MATRIX1,
    ANDROID_SENSOR_FORWARD_MATRIX2,
    ANDROID_SENSOR_MAX_ANALOG_SENSITIVITY,
    ANDROID_SENSOR_NOISE_MODEL_COEFFICIENTS,
    ANDROID_SENSOR_ORIENTATION,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT2,
    ANDROID_SENSOR_TIMESTAMP,
    ANDROID_SENSOR_END,

    ANDROID_SENSOR_INFO_ACTIVE_ARRAY_SIZE
                                   = ANDROID_SENSOR_INFO_START,
    ANDROID_SENSOR_INFO_AVAILABLE_SENSITIVITIES,
    ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT,
    ANDROID_SENSOR_INFO_EXPOSURE_TIME_RANGE,
    ANDROID_SENSOR_INFO_MAX_FRAME_DURATION,
    ANDROID_SENSOR_INFO_PHYSICAL_SIZE,
    ANDROID_SENSOR_INFO_PIXEL_ARRAY_SIZE,
    ANDROID_SENSOR_INFO_WHITE_LEVEL,
    ANDROID_SENSOR_INFO_END,

    ANDROID_SHADING_MODE           = ANDROID_SHADING_START,
    ANDROID_SHADING_STRENGTH,
    ANDROID_SHADING_END,

    ANDROID_STATISTICS_FACE_DETECT_MODE
                                   = ANDROID_STATISTICS_START,
    ANDROID_STATISTICS_HISTOGRAM_MODE,
    ANDROID_STATISTICS_SHARPNESS_MAP_MODE,
    ANDROID_STATISTICS_FACE_IDS,
    ANDROID_STATISTICS_FACE_LANDMARKS,
    ANDROID_STATISTICS_FACE_RECTANGLES,
    ANDROID_STATISTICS_FACE_SCORES,
    ANDROID_STATISTICS_HISTOGRAM,
    ANDROID_STATISTICS_SHARPNESS_MAP,
    ANDROID_STATISTICS_END,

    ANDROID_STATISTICS_INFO_AVAILABLE_FACE_DETECT_MODES
                                   = ANDROID_STATISTICS_INFO_START,
    ANDROID_STATISTICS_INFO_HISTOGRAM_BUCKET_COUNT,
    ANDROID_STATISTICS_INFO_MAX_FACE_COUNT,
    ANDROID_STATISTICS_INFO_MAX_HISTOGRAM_COUNT,
    ANDROID_STATISTICS_INFO_MAX_SHARPNESS_MAP_VALUE,
    ANDROID_STATISTICS_INFO_SHARPNESS_MAP_SIZE,
    ANDROID_STATISTICS_INFO_END,

    ANDROID_TONEMAP_CURVE_BLUE     = ANDROID_TONEMAP_START,
    ANDROID_TONEMAP_CURVE_GREEN,
    ANDROID_TONEMAP_CURVE_RED,
    ANDROID_TONEMAP_MODE,
    ANDROID_TONEMAP_MAX_CURVE_POINTS,
    ANDROID_TONEMAP_END,

    ANDROID_LED_TRANSMIT           = ANDROID_LED_START,
    ANDROID_LED_AVAILABLE_LEDS,
    ANDROID_LED_END,

} camera_metadata_tag_t;

/**
 * Enumeration definitions for the various entries that need them
 */

// ANDROID_COLOR_CORRECTION_MODE
typedef enum camera_metadata_enum_android_color_correction_mode {
    ANDROID_COLOR_CORRECTION_MODE_TRANSFORM_MATRIX,
    ANDROID_COLOR_CORRECTION_MODE_FAST,
    ANDROID_COLOR_CORRECTION_MODE_HIGH_QUALITY,
} camera_metadata_enum_android_color_correction_mode_t;


// ANDROID_CONTROL_AE_ANTIBANDING_MODE
typedef enum camera_metadata_enum_android_control_ae_antibanding_mode {
    ANDROID_CONTROL_AE_ANTIBANDING_MODE_OFF,
    ANDROID_CONTROL_AE_ANTIBANDING_MODE_50HZ,
    ANDROID_CONTROL_AE_ANTIBANDING_MODE_60HZ,
    ANDROID_CONTROL_AE_ANTIBANDING_MODE_AUTO,
} camera_metadata_enum_android_control_ae_antibanding_mode_t;

// ANDROID_CONTROL_AE_LOCK
typedef enum camera_metadata_enum_android_control_ae_lock {
    ANDROID_CONTROL_AE_LOCK_OFF,
    ANDROID_CONTROL_AE_LOCK_ON,
} camera_metadata_enum_android_control_ae_lock_t;

// ANDROID_CONTROL_AE_MODE
typedef enum camera_metadata_enum_android_control_ae_mode {
    ANDROID_CONTROL_AE_MODE_OFF,
    ANDROID_CONTROL_AE_MODE_ON,
    ANDROID_CONTROL_AE_MODE_ON_AUTO_FLASH,
    ANDROID_CONTROL_AE_MODE_ON_ALWAYS_FLASH,
    ANDROID_CONTROL_AE_MODE_ON_AUTO_FLASH_REDEYE,
} camera_metadata_enum_android_control_ae_mode_t;

// ANDROID_CONTROL_AE_PRECAPTURE_TRIGGER
typedef enum camera_metadata_enum_android_control_ae_precapture_trigger {
    ANDROID_CONTROL_AE_PRECAPTURE_TRIGGER_IDLE,
    ANDROID_CONTROL_AE_PRECAPTURE_TRIGGER_START,
} camera_metadata_enum_android_control_ae_precapture_trigger_t;

// ANDROID_CONTROL_AF_MODE
typedef enum camera_metadata_enum_android_control_af_mode {
    ANDROID_CONTROL_AF_MODE_OFF,
    ANDROID_CONTROL_AF_MODE_AUTO,
    ANDROID_CONTROL_AF_MODE_MACRO,
    ANDROID_CONTROL_AF_MODE_CONTINUOUS_VIDEO,
    ANDROID_CONTROL_AF_MODE_CONTINUOUS_PICTURE,
    ANDROID_CONTROL_AF_MODE_EDOF,
} camera_metadata_enum_android_control_af_mode_t;

// ANDROID_CONTROL_AF_TRIGGER
typedef enum camera_metadata_enum_android_control_af_trigger {
    ANDROID_CONTROL_AF_TRIGGER_IDLE,
    ANDROID_CONTROL_AF_TRIGGER_START,
    ANDROID_CONTROL_AF_TRIGGER_CANCEL,
} camera_metadata_enum_android_control_af_trigger_t;

// ANDROID_CONTROL_AWB_LOCK
typedef enum camera_metadata_enum_android_control_awb_lock {
    ANDROID_CONTROL_AWB_LOCK_OFF,
    ANDROID_CONTROL_AWB_LOCK_ON,
} camera_metadata_enum_android_control_awb_lock_t;

// ANDROID_CONTROL_AWB_MODE
typedef enum camera_metadata_enum_android_control_awb_mode {
    ANDROID_CONTROL_AWB_MODE_OFF,
    ANDROID_CONTROL_AWB_MODE_AUTO,
    ANDROID_CONTROL_AWB_MODE_INCANDESCENT,
    ANDROID_CONTROL_AWB_MODE_FLUORESCENT,
    ANDROID_CONTROL_AWB_MODE_WARM_FLUORESCENT,
    ANDROID_CONTROL_AWB_MODE_DAYLIGHT,
    ANDROID_CONTROL_AWB_MODE_CLOUDY_DAYLIGHT,
    ANDROID_CONTROL_AWB_MODE_TWILIGHT,
    ANDROID_CONTROL_AWB_MODE_SHADE,
} camera_metadata_enum_android_control_awb_mode_t;

// ANDROID_CONTROL_CAPTURE_INTENT
typedef enum camera_metadata_enum_android_control_capture_intent {
    ANDROID_CONTROL_CAPTURE_INTENT_CUSTOM,
    ANDROID_CONTROL_CAPTURE_INTENT_PREVIEW,
    ANDROID_CONTROL_CAPTURE_INTENT_STILL_CAPTURE,
    ANDROID_CONTROL_CAPTURE_INTENT_VIDEO_RECORD,
    ANDROID_CONTROL_CAPTURE_INTENT_VIDEO_SNAPSHOT,
    ANDROID_CONTROL_CAPTURE_INTENT_ZERO_SHUTTER_LAG,
} camera_metadata_enum_android_control_capture_intent_t;

// ANDROID_CONTROL_EFFECT_MODE
typedef enum camera_metadata_enum_android_control_effect_mode {
    ANDROID_CONTROL_EFFECT_MODE_OFF,
    ANDROID_CONTROL_EFFECT_MODE_MONO,
    ANDROID_CONTROL_EFFECT_MODE_NEGATIVE,
    ANDROID_CONTROL_EFFECT_MODE_SOLARIZE,
    ANDROID_CONTROL_EFFECT_MODE_SEPIA,
    ANDROID_CONTROL_EFFECT_MODE_POSTERIZE,
    ANDROID_CONTROL_EFFECT_MODE_WHITEBOARD,
    ANDROID_CONTROL_EFFECT_MODE_BLACKBOARD,
    ANDROID_CONTROL_EFFECT_MODE_AQUA,
} camera_metadata_enum_android_control_effect_mode_t;

// ANDROID_CONTROL_MODE
typedef enum camera_metadata_enum_android_control_mode {
    ANDROID_CONTROL_MODE_OFF,
    ANDROID_CONTROL_MODE_AUTO,
    ANDROID_CONTROL_MODE_USE_SCENE_MODE,
} camera_metadata_enum_android_control_mode_t;

// ANDROID_CONTROL_SCENE_MODE
typedef enum camera_metadata_enum_android_control_scene_mode {
    ANDROID_CONTROL_SCENE_MODE_UNSUPPORTED                      = 0,
    ANDROID_CONTROL_SCENE_MODE_FACE_PRIORITY,
    ANDROID_CONTROL_SCENE_MODE_ACTION,
    ANDROID_CONTROL_SCENE_MODE_PORTRAIT,
    ANDROID_CONTROL_SCENE_MODE_LANDSCAPE,
    ANDROID_CONTROL_SCENE_MODE_NIGHT,
    ANDROID_CONTROL_SCENE_MODE_NIGHT_PORTRAIT,
    ANDROID_CONTROL_SCENE_MODE_THEATRE,
    ANDROID_CONTROL_SCENE_MODE_BEACH,
    ANDROID_CONTROL_SCENE_MODE_SNOW,
    ANDROID_CONTROL_SCENE_MODE_SUNSET,
    ANDROID_CONTROL_SCENE_MODE_STEADYPHOTO,
    ANDROID_CONTROL_SCENE_MODE_FIREWORKS,
    ANDROID_CONTROL_SCENE_MODE_SPORTS,
    ANDROID_CONTROL_SCENE_MODE_PARTY,
    ANDROID_CONTROL_SCENE_MODE_CANDLELIGHT,
    ANDROID_CONTROL_SCENE_MODE_BARCODE,
} camera_metadata_enum_android_control_scene_mode_t;

// ANDROID_CONTROL_VIDEO_STABILIZATION_MODE
typedef enum camera_metadata_enum_android_control_video_stabilization_mode {
    ANDROID_CONTROL_VIDEO_STABILIZATION_MODE_OFF,
    ANDROID_CONTROL_VIDEO_STABILIZATION_MODE_ON,
} camera_metadata_enum_android_control_video_stabilization_mode_t;

// ANDROID_CONTROL_AE_STATE
typedef enum camera_metadata_enum_android_control_ae_state {
    ANDROID_CONTROL_AE_STATE_INACTIVE,
    ANDROID_CONTROL_AE_STATE_SEARCHING,
    ANDROID_CONTROL_AE_STATE_CONVERGED,
    ANDROID_CONTROL_AE_STATE_LOCKED,
    ANDROID_CONTROL_AE_STATE_FLASH_REQUIRED,
    ANDROID_CONTROL_AE_STATE_PRECAPTURE,
} camera_metadata_enum_android_control_ae_state_t;

// ANDROID_CONTROL_AF_STATE
typedef enum camera_metadata_enum_android_control_af_state {
    ANDROID_CONTROL_AF_STATE_INACTIVE,
    ANDROID_CONTROL_AF_STATE_PASSIVE_SCAN,
    ANDROID_CONTROL_AF_STATE_PASSIVE_FOCUSED,
    ANDROID_CONTROL_AF_STATE_ACTIVE_SCAN,
    ANDROID_CONTROL_AF_STATE_FOCUSED_LOCKED,
    ANDROID_CONTROL_AF_STATE_NOT_FOCUSED_LOCKED,
} camera_metadata_enum_android_control_af_state_t;

// ANDROID_CONTROL_AWB_STATE
typedef enum camera_metadata_enum_android_control_awb_state {
    ANDROID_CONTROL_AWB_STATE_INACTIVE,
    ANDROID_CONTROL_AWB_STATE_SEARCHING,
    ANDROID_CONTROL_AWB_STATE_CONVERGED,
    ANDROID_CONTROL_AWB_STATE_LOCKED,
} camera_metadata_enum_android_control_awb_state_t;


// ANDROID_DEMOSAIC_MODE
typedef enum camera_metadata_enum_android_demosaic_mode {
    ANDROID_DEMOSAIC_MODE_FAST,
    ANDROID_DEMOSAIC_MODE_HIGH_QUALITY,
} camera_metadata_enum_android_demosaic_mode_t;


// ANDROID_EDGE_MODE
typedef enum camera_metadata_enum_android_edge_mode {
    ANDROID_EDGE_MODE_OFF,
    ANDROID_EDGE_MODE_FAST,
    ANDROID_EDGE_MODE_HIGH_QUALITY,
} camera_metadata_enum_android_edge_mode_t;


// ANDROID_FLASH_MODE
typedef enum camera_metadata_enum_android_flash_mode {
    ANDROID_FLASH_MODE_OFF,
    ANDROID_FLASH_MODE_SINGLE,
    ANDROID_FLASH_MODE_TORCH,
} camera_metadata_enum_android_flash_mode_t;

// ANDROID_FLASH_STATE
typedef enum camera_metadata_enum_android_flash_state {
    ANDROID_FLASH_STATE_UNAVAILABLE,
    ANDROID_FLASH_STATE_CHARGING,
    ANDROID_FLASH_STATE_READY,
    ANDROID_FLASH_STATE_FIRED,
} camera_metadata_enum_android_flash_state_t;



// ANDROID_GEOMETRIC_MODE
typedef enum camera_metadata_enum_android_geometric_mode {
    ANDROID_GEOMETRIC_MODE_OFF,
    ANDROID_GEOMETRIC_MODE_FAST,
    ANDROID_GEOMETRIC_MODE_HIGH_QUALITY,
} camera_metadata_enum_android_geometric_mode_t;


// ANDROID_HOT_PIXEL_MODE
typedef enum camera_metadata_enum_android_hot_pixel_mode {
    ANDROID_HOT_PIXEL_MODE_OFF,
    ANDROID_HOT_PIXEL_MODE_FAST,
    ANDROID_HOT_PIXEL_MODE_HIGH_QUALITY,
} camera_metadata_enum_android_hot_pixel_mode_t;




// ANDROID_LENS_OPTICAL_STABILIZATION_MODE
typedef enum camera_metadata_enum_android_lens_optical_stabilization_mode {
    ANDROID_LENS_OPTICAL_STABILIZATION_MODE_OFF,
    ANDROID_LENS_OPTICAL_STABILIZATION_MODE_ON,
} camera_metadata_enum_android_lens_optical_stabilization_mode_t;

// ANDROID_LENS_FACING
typedef enum camera_metadata_enum_android_lens_facing {
    ANDROID_LENS_FACING_FRONT,
    ANDROID_LENS_FACING_BACK,
} camera_metadata_enum_android_lens_facing_t;

// ANDROID_LENS_STATE
typedef enum camera_metadata_enum_android_lens_state {
    ANDROID_LENS_STATE_STATIONARY,
} camera_metadata_enum_android_lens_state_t;



// ANDROID_NOISE_REDUCTION_MODE
typedef enum camera_metadata_enum_android_noise_reduction_mode {
    ANDROID_NOISE_REDUCTION_MODE_OFF,
    ANDROID_NOISE_REDUCTION_MODE_FAST,
    ANDROID_NOISE_REDUCTION_MODE_HIGH_QUALITY,
} camera_metadata_enum_android_noise_reduction_mode_t;



// ANDROID_REQUEST_METADATA_MODE
typedef enum camera_metadata_enum_android_request_metadata_mode {
    ANDROID_REQUEST_METADATA_MODE_NONE,
    ANDROID_REQUEST_METADATA_MODE_FULL,
} camera_metadata_enum_android_request_metadata_mode_t;

// ANDROID_REQUEST_TYPE
typedef enum camera_metadata_enum_android_request_type {
    ANDROID_REQUEST_TYPE_CAPTURE,
    ANDROID_REQUEST_TYPE_REPROCESS,
} camera_metadata_enum_android_request_type_t;


// ANDROID_SCALER_AVAILABLE_FORMATS
typedef enum camera_metadata_enum_android_scaler_available_formats {
    ANDROID_SCALER_AVAILABLE_FORMATS_RAW_SENSOR                 = 0x20,
    ANDROID_SCALER_AVAILABLE_FORMATS_YV12                       = 0x32315659,
    ANDROID_SCALER_AVAILABLE_FORMATS_YCbCr_420_SP               = 0x11,
    ANDROID_SCALER_AVAILABLE_FORMATS_JPEG                       = 0x21,
} camera_metadata_enum_android_scaler_available_formats_t;


// ANDROID_SENSOR_REFERENCE_ILLUMINANT1
typedef enum camera_metadata_enum_android_sensor_reference_illuminant1 {
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT               = 1,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_FLUORESCENT            = 2,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_TUNGSTEN               = 3,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_FLASH                  = 4,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_FINE_WEATHER           = 9,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_CLOUDY_WEATHER         = 10,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_SHADE                  = 11,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT_FLUORESCENT   = 12,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_DAY_WHITE_FLUORESCENT  = 13,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_COOL_WHITE_FLUORESCENT = 14,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_WHITE_FLUORESCENT      = 15,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_STANDARD_A             = 17,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_STANDARD_B             = 18,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_STANDARD_C             = 19,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_D55                    = 20,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_D65                    = 21,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_D75                    = 22,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_D50                    = 23,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1_ISO_STUDIO_TUNGSTEN    = 24,
} camera_metadata_enum_android_sensor_reference_illuminant1_t;


// ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT
typedef enum camera_metadata_enum_android_sensor_info_color_filter_arrangement {
    ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGGB,
    ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GRBG,
    ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GBRG,
    ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_BGGR,
    ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGB,
} camera_metadata_enum_android_sensor_info_color_filter_arrangement_t;


// ANDROID_SHADING_MODE
typedef enum camera_metadata_enum_android_shading_mode {
    ANDROID_SHADING_MODE_OFF,
    ANDROID_SHADING_MODE_FAST,
    ANDROID_SHADING_MODE_HIGH_QUALITY,
} camera_metadata_enum_android_shading_mode_t;


// ANDROID_STATISTICS_FACE_DETECT_MODE
typedef enum camera_metadata_enum_android_statistics_face_detect_mode {
    ANDROID_STATISTICS_FACE_DETECT_MODE_OFF,
    ANDROID_STATISTICS_FACE_DETECT_MODE_SIMPLE,
    ANDROID_STATISTICS_FACE_DETECT_MODE_FULL,
} camera_metadata_enum_android_statistics_face_detect_mode_t;

// ANDROID_STATISTICS_HISTOGRAM_MODE
typedef enum camera_metadata_enum_android_statistics_histogram_mode {
    ANDROID_STATISTICS_HISTOGRAM_MODE_OFF,
    ANDROID_STATISTICS_HISTOGRAM_MODE_ON,
} camera_metadata_enum_android_statistics_histogram_mode_t;

// ANDROID_STATISTICS_SHARPNESS_MAP_MODE
typedef enum camera_metadata_enum_android_statistics_sharpness_map_mode {
    ANDROID_STATISTICS_SHARPNESS_MAP_MODE_OFF,
    ANDROID_STATISTICS_SHARPNESS_MAP_MODE_ON,
} camera_metadata_enum_android_statistics_sharpness_map_mode_t;



// ANDROID_TONEMAP_MODE
typedef enum camera_metadata_enum_android_tonemap_mode {
    ANDROID_TONEMAP_MODE_CONTRAST_CURVE,
    ANDROID_TONEMAP_MODE_FAST,
    ANDROID_TONEMAP_MODE_HIGH_QUALITY,
} camera_metadata_enum_android_tonemap_mode_t;


// ANDROID_LED_TRANSMIT
typedef enum camera_metadata_enum_android_led_transmit {
    ANDROID_LED_TRANSMIT_OFF,
    ANDROID_LED_TRANSMIT_ON,
} camera_metadata_enum_android_led_transmit_t;

// ANDROID_LED_AVAILABLE_LEDS
typedef enum camera_metadata_enum_android_led_available_leds {
    ANDROID_LED_AVAILABLE_LEDS_TRANSMIT,
} camera_metadata_enum_android_led_available_leds_t;


