# autogenerated Android.mk
ifeq ($(TARGET_ARCH),x86)
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_IS_HOST_MODULE:=true
LOCAL_MODULE_CLASS:=SHARED_LIBRARIES
LOCAL_MODULE_TAGS:=optional
OVERRIDE_BUILT_MODULE_PATH:=$(HOST_OUT)/obj/lib
LOCAL_UNINSTALLABLE_MODULE:=
LOCAL_SRC_FILES:=host/libremote-processor_host.so
LOCAL_BUILT_MODULE_STEM:=libremote-processor_host.so
LOCAL_STRIP_MODULE:=
LOCAL_MODULE:=libremote-processor_host
LOCAL_MODULE_STEM:=libremote-processor_host.so
LOCAL_CERTIFICATE:=
LOCAL_MODULE_PATH:=$(HOST_OUT)/lib
LOCAL_REQUIRED_MODULES:=
LOCAL_SHARED_LIBRARIES:=
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_IS_HOST_MODULE:=
LOCAL_MODULE_CLASS:=SHARED_LIBRARIES
LOCAL_MODULE_TAGS:=optional
OVERRIDE_BUILT_MODULE_PATH:=$(PRODUCT_OUT)/obj/lib
LOCAL_UNINSTALLABLE_MODULE:=
LOCAL_SRC_FILES:=target/libremote-processor.so
LOCAL_BUILT_MODULE_STEM:=libremote-processor.so
LOCAL_STRIP_MODULE:=
LOCAL_MODULE:=libremote-processor
LOCAL_MODULE_STEM:=libremote-processor.so
LOCAL_CERTIFICATE:=
LOCAL_MODULE_PATH:=$(PRODUCT_OUT)/system/lib
LOCAL_REQUIRED_MODULES:=
LOCAL_SHARED_LIBRARIES:=libstlport libc libstdc++ libm
include $(BUILD_PREBUILT)
endif