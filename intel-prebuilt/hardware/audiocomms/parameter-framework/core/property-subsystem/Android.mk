# autogenerated Android.mk
ifeq ($(TARGET_ARCH),x86)
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_IS_HOST_MODULE:=
LOCAL_MODULE_CLASS:=SHARED_LIBRARIES
LOCAL_MODULE_TAGS:=optional
OVERRIDE_BUILT_MODULE_PATH:=$(PRODUCT_OUT)/obj/lib
LOCAL_UNINSTALLABLE_MODULE:=
LOCAL_SRC_FILES:=target/libproperty-subsystem.so
LOCAL_BUILT_MODULE_STEM:=libproperty-subsystem.so
LOCAL_STRIP_MODULE:=
LOCAL_MODULE:=libproperty-subsystem
LOCAL_MODULE_STEM:=libproperty-subsystem.so
LOCAL_CERTIFICATE:=
LOCAL_MODULE_PATH:=$(PRODUCT_OUT)/system/lib/parameter-framework-plugins/System
LOCAL_REQUIRED_MODULES:=
LOCAL_SHARED_LIBRARIES:=libstlport libparameter libproperty libbinder libutils libc libstdc++ libm
include $(BUILD_PREBUILT)
endif