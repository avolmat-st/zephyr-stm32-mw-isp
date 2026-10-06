/*
 * IMX335 sensor parameters used by the generic ISP wrapper.
 */
#ifndef ISP_WRAPPER_IMX335_H
#define ISP_WRAPPER_IMX335_H

#define SENSOR_BAYER_PATTERN      ISP_DEMOS_TYPE_RGGB
#define SENSOR_COLOR_DEPTH        10
#define SENSOR_WIDTH              2592
#define SENSOR_HEIGHT             1944
#define SENSOR_GAIN_MIN           (0 * 1000)
#define SENSOR_GAIN_MAX           (72 * 1000)
#define SENSOR_AGAIN_MAX          (30 * 1000)
#define SENSOR_EXPOSURE_MIN       8
#define SENSOR_EXPOSURE_MAX       33266
#define SENSOR_1H_PERIOD_USEC     (1000000.0F / 4500 / 30)

#define SENSOR_IQ_PARAM           (&ISP_IQParamCacheInit_IMX335)

#endif /* ISP_WRAPPER_IMX335_H */
