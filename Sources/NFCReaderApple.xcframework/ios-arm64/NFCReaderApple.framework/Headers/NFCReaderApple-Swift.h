#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 6.0.2 effective-5.10 (swiftlang-6.0.2.1.2 clang-1600.0.26.4)
#ifndef NFCREADERAPPLE_SWIFT_H
#define NFCREADERAPPLE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnon-modular-include-in-framework-module"
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#pragma clang diagnostic pop
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import Vision;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NFCReaderApple",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

/// Protocol describing torch settings
/// since:
/// 1.4.0
SWIFT_PROTOCOL("_TtP14NFCReaderApple13TorchSettings_")
@protocol TorchSettings
/// Set the torch level when the user turns the torch on
/// Range <code>0.0</code> (darkest) – <code>1</code> (brightest). Default value is <code>0.1</code>.
/// since:
/// 1.4.0
@property (nonatomic, readonly) float torchLevel;
@end


/// Base class for barcode detection settings
/// since:
/// 1.4.0
SWIFT_CLASS("_TtC14NFCReaderApple28BaseBarcodeDetectionSettings")
@interface BaseBarcodeDetectionSettings : NSObject
/// Symbologies of barcodes to detect
/// since:
/// 1.4.0
@property (nonatomic, readonly, copy) NSArray<VNBarcodeSymbology> * _Nonnull barcodeSymbologies;
/// Initializer
/// since:
/// 1.4.0
/// \param barcodeSymbologies Symbologies of barcodes to detect
///
///
/// throws:
/// Barcode detection settings error when attempting to initialize the settings with an unsupported barcode symbology
- (nullable instancetype)initWithBarcodeSymbologies:(NSArray<VNBarcodeSymbology> * _Nonnull)barcodeSymbologies error:(NSError * _Nullable * _Nullable)error OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Barcode detection settings
/// since:
/// 1.4.0
SWIFT_CLASS("_TtC14NFCReaderApple24BarcodeDetectionSettings")
@interface BarcodeDetectionSettings : BaseBarcodeDetectionSettings <TorchSettings>
/// Set the torch level when the user turns the torch on
/// Range <code>0.0</code> (darkest) – <code>1</code> (brightest). Default value is <code>0.1</code>.
/// since:
/// 1.4.0
@property (nonatomic) float torchLevel;
- (nullable instancetype)initWithBarcodeSymbologies:(NSArray<VNBarcodeSymbology> * _Nonnull)barcodeSymbologies error:(NSError * _Nullable * _Nullable)error OBJC_DESIGNATED_INITIALIZER;
@end

/// Barcode detection settings error
/// since:
/// 1.4.0
typedef SWIFT_ENUM(NSInteger, BarcodeDetectionSettingsError, open) {
/// Unsupported barcode symbology error
/// since:
/// 1.4.0
  BarcodeDetectionSettingsErrorUnsupportedBarcodeSymbology = 0,
};
static NSString * _Nonnull const BarcodeDetectionSettingsErrorDomain = @"NFCReaderApple.BarcodeDetectionSettingsError";


enum Orientation : NSInteger;

/// Base card detection settings
/// since:
/// 1.4.0
SWIFT_CLASS("_TtC14NFCReaderApple25BaseCardDetectionSettings")
@interface BaseCardDetectionSettings : NSObject
/// Size of the card to detect
/// Only the aspect ratio is considered by the app. The units are inconsequential.
/// since:
/// 1.0.0
@property (nonatomic) CGSize size;
/// Orientation of the card to be detected
/// The orientation is determined by the size. Setting the orientation to the other available value will flip the width and height of the size.
/// since:
/// 1.0.0
@property (nonatomic) enum Orientation orientation;
/// Number of image samples the camera should collect
/// The samples in the pool are compared for sharpness and the sharpest one is de-warped and returned.
/// since:
/// 1.1.0
@property (nonatomic) NSInteger imagePoolSize;
/// Initializer
/// since:
/// 1.0.0
/// \param width Width of the card (units don’t matter)
///
/// \param height Height of the card (units don’t matter)
///
- (nonnull instancetype)initWithWidth:(CGFloat)width height:(CGFloat)height OBJC_DESIGNATED_INITIALIZER;
/// Convenience initializer
/// Initializes settings with ISO ID-1 dimensions
/// since:
/// 1.4.0
- (nonnull instancetype)init;
@end

/// Card orientation
/// since:
/// 1.0.0
typedef SWIFT_ENUM(NSInteger, Orientation, open) {
/// Landscape (height < width)
  OrientationLandscape = 0,
/// Portrait (width < height)
  OrientationPortrait = 1,
};

@protocol UIViewControllerTransitionCoordinator;
@class UIPresentationController;
@class NSString;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC14NFCReaderApple29ObjectDetectionViewController")
@interface ObjectDetectionViewController : UIViewController <UIAdaptivePresentationControllerDelegate>
- (void)viewDidLoad;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (void)presentationControllerDidDismiss:(UIPresentationController * _Nonnull)presentationController;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14NFCReaderApple31BaseCardDetectionViewController")
@interface BaseCardDetectionViewController : ObjectDetectionViewController
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (void)presentationControllerDidDismiss:(UIPresentationController * _Nonnull)presentationController;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end





/// Combined card and barcode detection settings
/// since:
/// 1.4.0
SWIFT_CLASS("_TtC14NFCReaderApple32CardAndPassportDetectionSettings")
@interface CardAndPassportDetectionSettings : NSObject <TorchSettings>
/// Set the torch level when the user turns the torch on
/// Range <code>0.0</code> (darkest) – <code>1</code> (brightest). Default value is <code>0.1</code>.
/// since:
/// 1.4.0
@property (nonatomic) float torchLevel;
@property (nonatomic) BOOL passportMode;
@property (nonatomic, copy) NSString * _Nonnull titleString;
@property (nonatomic, copy) NSString * _Nonnull frontDescriptionString;
@property (nonatomic, copy) NSString * _Nonnull backDescriptionString;
@property (nonatomic, copy) NSString * _Nonnull lang;
/// Card detection settings (for the front side of the card)
/// since:
/// 1.4.0
@property (nonatomic, readonly, strong) BaseCardDetectionSettings * _Nonnull cardDetectionSettings;
/// Barcode detection settings (for the back of the card)
/// since:
/// 1.4.0
@property (nonatomic, readonly, strong) BaseBarcodeDetectionSettings * _Nonnull barcodeDetectionSettings;
/// Initializer
/// since:
/// 1.4.0
/// \param width Width of the card (units don’t matter)
///
/// \param height Height of the card (units don’t matter)
///
/// \param barcodeSymbologies Barcode symbologies to look for
///
- (nullable instancetype)initWithWidth:(CGFloat)width height:(CGFloat)height barcodeSymbologies:(NSArray<VNBarcodeSymbology> * _Nonnull)barcodeSymbologies error:(NSError * _Nullable * _Nullable)error OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithLang:(NSString * _Nonnull)lang OBJC_DESIGNATED_INITIALIZER;
/// Convenience initializer
/// Initializes settings with ISO ID-1 dimensions and PDF417 barcode
/// since:
/// 1.4.0
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol CardAndPassportDetectionViewControllerDelegate;

/// View controller that scans both front and back of the card
/// since:
/// 1.4.0
SWIFT_CLASS("_TtC14NFCReaderApple38CardAndPassportDetectionViewController")
@interface CardAndPassportDetectionViewController : BaseCardDetectionViewController
/// Detection delegate
/// since:
/// 1.4.0
@property (nonatomic, weak) id <CardAndPassportDetectionViewControllerDelegate> _Nullable delegate;
/// Detection settings
/// since:
/// 1.4.0
@property (nonatomic, readonly, strong) CardAndPassportDetectionSettings * _Nonnull settings;
/// Initializer
/// since:
/// 1.4.0
/// \param settings Detection settings
///
- (nonnull instancetype)initWithSettings:(CardAndPassportDetectionSettings * _Nonnull)settings OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class MrzScanResult;
@class NSNumber;

/// Delegate for combined detection of front and back of the card
/// since:
/// 1.4.0
SWIFT_PROTOCOL("_TtP14NFCReaderApple46CardAndPassportDetectionViewControllerDelegate_")
@protocol CardAndPassportDetectionViewControllerDelegate
/// Called when the detection finishes
/// since:
/// 1.4.0
/// \param viewController View controller that detected the card and barcodes
///
/// \param image Image of the front of the detected card straightened to fit the rectangle specified in settings
///
/// \param barcodes Barcodes detected in the session (empty array if user skips the barcode detection)
///
/// \param settings Settings used for the card and barcode detection
///
- (void)cardAndPassportDetectionViewController:(CardAndPassportDetectionViewController * _Nonnull)viewController didDetectCard:(MrzScanResult * _Nonnull)mrzScanResult withSettings:(CardAndPassportDetectionSettings * _Nonnull)settings;
@optional
/// Called when the detection is cancelled
/// since:
/// 1.4.0
/// \param viewController View controller that was used for detection
///
- (void)cardAndPassportDetectionViewControllerDidCancel:(CardAndPassportDetectionViewController * _Nonnull)viewController;
/// Called when an image is straightened
/// Implement in your delegate to determine the image quality. By default the quality is determined by
/// the sharpness of the image. However, sharpness detection is only available on iOS 13 and newer.
/// If you wish to keep the sharpness detection and implement your own image quality scoring for iOS 12
/// and older return <code>nil</code> on iOS 13 and your score on iOS 12 and older.
/// since:
/// 1.4.0
/// \param image Image
///
///
/// returns:
/// Score representing the quality of the image (higher score is better than lower)
- (NSNumber * _Nullable)qualityOfImage:(CGImageRef _Nonnull)image SWIFT_WARN_UNUSED_RESULT;
@required
- (void)didFailWithMessage:(NSString * _Nonnull)message;
@optional
- (void)getSDKDetailsWithData:(NSString * _Nonnull)data;
@end


/// Card detection session settings
/// since:
/// 1.0.0
SWIFT_CLASS("_TtC14NFCReaderApple21CardDetectionSettings")
@interface CardDetectionSettings : BaseCardDetectionSettings <TorchSettings>
/// Set the torch level when the user turns the torch on
/// Range <code>0.0</code> (darkest) – <code>1</code> (brightest). Default value is <code>0.1</code>.
/// since:
/// 1.2.0
@property (nonatomic) float torchLevel;
- (nonnull instancetype)initWithWidth:(CGFloat)width height:(CGFloat)height OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC14NFCReaderApple13MrzScanResult")
@interface MrzScanResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC14NFCReaderApple14PassportReader") SWIFT_AVAILABILITY(ios,introduced=13)
@interface PassportReader : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




SWIFT_CLASS("_TtC14NFCReaderApple36PerspectiveCorrectionParamsOperation") SWIFT_AVAILABILITY(ios,introduced=11.0)
@interface PerspectiveCorrectionParamsOperation : NSOperation
- (void)main;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end






#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
