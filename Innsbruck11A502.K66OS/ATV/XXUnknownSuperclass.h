/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVJSCopyObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSArray, NSString;
@protocol AVAssetResourceLoaderDelegate;

@interface XXUnknownSuperclass (iTunesAdditions)
+ (id)stringWithUStr255:(unsigned short [256])ustr255;	// 0x2b089
- (int)iTunesCompare:(id)compare;	// 0x2b09d
@end

@interface XXUnknownSuperclass (FrontRow)
+ (id)languageKeysAndDisplayStrings;	// 0x800e9
@end

@interface XXUnknownSuperclass (Additions)
- (BOOL)representsVideo;	// 0x9e2cd
@end

@interface XXUnknownSuperclass (ATVValueTransformerAdditions)
+ (id)dateToMonthDayYearString;	// 0xed5cd
+ (id)releaseDateAsInTheatersDateString;	// 0xed395
+ (id)releaseDateAsOriginalAirDateString;	// 0xed3d9
+ (id)releaseDateAsReleasedDateString;	// 0xed305
+ (id)releaseDateAsYearReleasedString;	// 0xed275
+ (id)tomatoMeter;	// 0xed731
+ (id)tvEpisodeTitleToNumberedTitle;	// 0xed6a1
+ (id)userRatingAndNumReviewsToControl;	// 0xed53d
+ (id)userRatingToImageControl;	// 0xed41d
+ (id)userReviewsNumberToTextControl;	// 0xed4ad
+ (id)versionStringToVersionComponentsArray;	// 0xed65d
- (id)transformedValue:(id)value withColor:(id)color;	// 0xed7c1
@end

@interface XXUnknownSuperclass (SimpleQueue)
- (id)pop;	// 0x112971
@end

@interface XXUnknownSuperclass (ATVRadioAdditions)
- (id)attributedStationNameWithBaseAttributes:(id)baseAttributes suffixAttributes:(id)attributes;	// 0x115bad
- (id)formattedStringForNumberOfFollowers;	// 0x115921
- (id)stationFollowersStringValue;	// 0x1159fd
@end

@interface XXUnknownSuperclass (JSAdditions)
- (id)elementById:(id)anId;	// 0x149d05
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x14e79d
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x14e835
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x14e88d
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x14e8e5
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x14e979
@end

@interface XXUnknownSuperclass (JSAdditions) <ATVJSCopyObject>
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x15d431
@end

@interface XXUnknownSuperclass (FrontRow)
@property(readonly, assign, nonatomic) NSDictionary *atvHeaders;	// G=0x1664d5; 
@property(readonly, assign, nonatomic) NSDictionary *commonHeaders;	// G=0x1661f9; 
@property(readonly, assign, nonatomic) NSDictionary *storeHeadersDictionary;	// G=0x1662cd; 
@property(readonly, assign, nonatomic) NSDictionary *storeHeadersWithDsid;	// G=0x166391; 
- (id)_acceptLanguage;	// 0x1665d9
// declared property getter: - (id)atvHeaders;	// 0x1664d5
// declared property getter: - (id)commonHeaders;	// 0x1661f9
// declared property getter: - (id)storeHeadersDictionary;	// 0x1662cd
// declared property getter: - (id)storeHeadersWithDsid;	// 0x166391
@end

@interface XXUnknownSuperclass (ATVAdditions)
- (id)configurationInfo;	// 0x189f49
- (int)deviceActivationState;	// 0x18a569
- (id)hwDeviceName;	// 0x18a2d1
- (id)hwMachine;	// 0x18a4b9
- (BOOL)performObliteratePreservingPaths:(id)paths;	// 0x189da9
- (void)setDeviceActivationFailureState:(int)state;	// 0x18a5f1
- (void)setDeviceActivationWasSkipped:(BOOL)skipped;	// 0x18a6c9
- (void)setHWDeviceName:(id)name;	// 0x18a33d
- (void)setSILState_HardwareProblem;	// 0x189d75
- (void)setSILState_Off;	// 0x189ca5
- (void)setSILState_On;	// 0x189cd9
- (void)setSILState_RejectedCommand;	// 0x189d41
- (void)setSILState_Starting;	// 0x189d0d
- (BOOL)wasDeviceActivationSkipped;	// 0x18a685
@end

@interface XXUnknownSuperclass (ATVSecureKeyDeliveryAdditions)
@property(retain, nonatomic) id<AVAssetResourceLoaderDelegate> resourceLoaderDelegate;	// G=0x26a455; S=0x26a465; 
// declared property getter: - (id)resourceLoaderDelegate;	// 0x26a455
// declared property setter: - (void)setResourceLoaderDelegate:(id)delegate;	// 0x26a465
@end

@interface XXUnknownSuperclass (UI)
@property(assign) UIEdgeInsets alignmentRectInsets;	// G=0x26c779; S=0x26c7cd; converted property
// converted property getter: - (UIEdgeInsets)alignmentRectInsets;	// 0x26c779
- (id)imageWithAlignmentRectInsets:(UIEdgeInsets)alignmentRectInsets;	// 0x26c82d
- (BOOL)isAccessibilityElement;	// 0x26c8b9
// converted property setter: - (void)setAlignmentRectInsets:(UIEdgeInsets)insets;	// 0x26c7cd
@end

@interface XXUnknownSuperclass (RUIYTAdditions)
+ (id)ytErrorWithCode:(int)code localizedDescription:(id)description;	// 0x28a9ed
@end

@interface XXUnknownSuperclass (FrontRow)
+ (id)sharedFrontRowPreferences;	// 0x2930b5
- (BOOL)isLoggingEnabledForKey:(id)key;	// 0x293135
- (id)logFilePathsForKey:(id)key;	// 0x293175
@end

@interface XXUnknownSuperclass (DirtyLayout)
- (void)setNeedsLayoutOnAllSublayers;	// 0x300389
@end

@interface XXUnknownSuperclass (Accessibility)
@property(readonly, assign, nonatomic) NSArray *accessibilityControls;	// G=0x308005; 
@property(assign, nonatomic) BOOL accessibilityOutputsLanguageNameIfCannotSpeakLanguage;	// G=0x308039; S=0x308065; @dynamic
@property(readonly, assign, nonatomic) BOOL accessibilityOutputsRange;	// G=0x30802d; 
@property(readonly, assign, nonatomic) BOOL accessibilityOutputsRangeForChildren;	// G=0x308029; 
@property(readonly, assign, nonatomic) NSString *accessibilityRangeString;	// G=0x308031; 
@property(readonly, assign, nonatomic) NSString *accessibilityRangeStringForChildren;	// G=0x308035; 
// declared property getter: - (id)accessibilityControls;	// 0x308005
- (float)accessibilityDelayForScreenContent;	// 0x307ff5
- (BOOL)accessibilityElementIsHidden;	// 0x307ffd
- (id)accessibilityNonFocusableElements;	// 0x307ff1
// declared property getter: - (BOOL)accessibilityOutputsLanguageNameIfCannotSpeakLanguage;	// 0x308039
// declared property getter: - (BOOL)accessibilityOutputsRange;	// 0x30802d
// declared property getter: - (BOOL)accessibilityOutputsRangeForChildren;	// 0x308029
// declared property getter: - (id)accessibilityRangeString;	// 0x308031
// declared property getter: - (id)accessibilityRangeStringForChildren;	// 0x308035
- (id)accessibilityScreenContent;	// 0x308025
- (id)accessibilitySecondaryLabel;	// 0x308021
- (id)accessibilityTraitsList;	// 0x308001
// declared property setter: - (void)setAccessibilityOutputsLanguageNameIfCannotSpeakLanguage:(BOOL)language;	// 0x308065
@end

@interface XXUnknownSuperclass (AXPriv)
- (id)accessibilityLabel;	// 0x3080a1
@end

@interface XXUnknownSuperclass (BRMetadataLinesLayer)
- (BOOL)isEmpty;	// 0x3806b9
@end

@interface XXUnknownSuperclass (BRScalingLayoutManager)
@property(assign) CGRect scaledFrame;	// G=0x3eb651; S=0x3eb595; converted property
// converted property getter: - (CGRect)scaledFrame;	// 0x3eb651
// converted property setter: - (void)setScaledFrame:(CGRect)frame;	// 0x3eb595
@end

@interface XXUnknownSuperclass (BRProviderHelpers)
- (void)postProviderItemsModifiedNotificationForRange:(NSRange)range object:(id)object;	// 0x40b485
- (void)postProviderItemsModifiedNotificationForRanges:(id)ranges object:(id)object;	// 0x40b4e1
- (void)postProviderTitleChangedNotificationFrom:(id)from;	// 0x40b541
@end

@interface XXUnknownSuperclass (BRProviderHelpers)
- (id)providerRanges;	// 0x40b561
@end

@interface XXUnknownSuperclass (NSIndexPathExtensions)
+ (id)indexPathForColumn:(unsigned)column inSection:(unsigned)section;	// 0x4117a5
- (unsigned)column;	// 0x4117f1
@end

@interface XXUnknownSuperclass (PhotoBatchIndexPath)
+ (id)indexPathForPhoto:(unsigned)photo inBatch:(unsigned)batch;	// 0x411805
- (unsigned)batch;	// 0x411851
- (unsigned)photo;	// 0x411889
@end

@interface XXUnknownSuperclass (GridIndexPath)
+ (id)indexPathForIndex:(unsigned)index;	// 0x4118c1
- (unsigned)index;	// 0x4118dd
@end

@interface XXUnknownSuperclass (FeatureManagerAdditions)
- (BOOL)isApplianceBundleIdentifier;	// 0x41f415
@end

@interface XXUnknownSuperclass (BRBundleAdditions)
+ (id)primaryResourceBundle;	// 0x440179
- (id)pathForImage:(id)image ofType:(id)type;	// 0x4401bd
- (id)pathForImage:(id)image ofType:(id)type inDirectory:(id)directory;	// 0x4401e1
- (id)urlForImage:(id)image ofType:(id)type;	// 0x440289
@end

@interface XXUnknownSuperclass (Unique)
- (id)uniqueObjectsForKey:(id)key;	// 0x44071d
@end

@interface XXUnknownSuperclass (Modification)
- (id)arrayByRemovingObject:(id)object;	// 0x440941
- (id)safeValueForKey:(id)key;	// 0x4409b1
@end

@interface XXUnknownSuperclass (BRMutableArrayAdditions)
- (void)addObjectIfNotNil:(id)aNil;	// 0x440a31
@end

@interface XXUnknownSuperclass (BRCALayerAdditions)
- (void)addBasicAnimationForProperty:(id)property fromValue:(id)value toValue:(id)value3 duration:(double)duration timingFunction:(id)function delegate:(id)delegate;	// 0x442961
- (id)firstLayerNamed:(id)named;	// 0x4428e1
@end

@interface XXUnknownSuperclass (BRDateHelpers)
+ (id)dateFromYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second timeZone:(id)zone;	// 0x4433a9
- (BOOL)isToday;	// 0x4434ed
- (BOOL)isTomorrow;	// 0x443625
- (BOOL)isYesterday;	// 0x443589
@end

@interface XXUnknownSuperclass (BRDateDisplay)
- (id)expiryDescription;	// 0x443c39
- (id)stringForDisplayingMonthDayYear;	// 0x443931
- (id)stringForDisplayingTime12H;	// 0x4439e9
- (id)stringForGeneralDisplay;	// 0x4436d1
- (id)stringForMonthDayFormat;	// 0x443ab5
- (id)stringForReleaseDateDisplay;	// 0x44388d
- (id)stringFromDateForTVShows;	// 0x4436c1
@end

@interface XXUnknownSuperclass (BRDictionaryAdditions)
- (id)deepMutableCopy;	// 0x444ba5
- (id)dictionaryByReplacingEntriesFromDictionary:(id)dictionary;	// 0x444bbd
@end

@interface XXUnknownSuperclass (BRDisplayString)
- (id)displayString;	// 0x444c21
@end

@interface XXUnknownSuperclass (BRDisplayString)
- (id)displayString;	// 0x444c31
@end

@interface XXUnknownSuperclass (BRDisplayString)
- (id)displayString;	// 0x444c4d
@end

@interface XXUnknownSuperclass (BRError)
+ (id)errorWithBRError:(int)brerror;	// 0x4460c1
+ (id)errorWithBRError:(int)brerror userInfo:(id)info;	// 0x4460e1
+ (id)errorWithBRError:(int)brerror withDescription:(id)description withReason:(id)reason andSuggestion:(id)suggestion;	// 0x446261
+ (id)errorWithBRError:(int)brerror withDescription:(id)description withReason:(id)reason andSuggestion:(id)suggestion userInfo:(id)info;	// 0x4462c1
- (void)postBRErrorNotificationFromObject:(id)object;	// 0x44640d
@end

@interface XXUnknownSuperclass (ATVAdditions)
- (id)cachePath;	// 0x4467dd
- (id)mediaFolderPath;	// 0x446a11
- (id)modDateOfFileAtPath:(id)path error:(id *)error;	// 0x446791
- (id)mostRecentModDateInDirectoryAtPath:(id)path error:(id *)error;	// 0x446601
- (id)ourApplicationSupportPath;	// 0x446965
- (id)preferencesPath;	// 0x4468b9
- (BOOL)removeContentsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x4464c1
- (id)videoCachePath;	// 0x446885
@end

@interface XXUnknownSuperclass (RawData)
- (void)purgeRawData;	// 0x44f55d
- (id)rawData;	// 0x44f559
@end

@interface XXUnknownSuperclass (BRStringUtilities)
+ (id)timeStringForSeconds:(double)seconds;	// 0x458259
+ (id)timeStringWithLabelForSeconds:(double)seconds;	// 0x458391
- (int)customCompare:(id)compare;	// 0x458451
@end

@interface XXUnknownSuperclass (ThreadSpecificNotifications)
- (void)_postNotification:(id)notification;	// 0x4589d5
- (void)postNotification:(id)notification onThread:(id)thread;	// 0x458929
- (void)postNotificationName:(id)name object:(id)object onThread:(id)thread;	// 0x458949
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info onThread:(id)thread;	// 0x458989
- (void)postNotificationOnMainThread:(id)thread;	// 0x458859
- (void)postNotificationOnMainThreadNamed:(id)named;	// 0x458889
- (void)postNotificationOnMainThreadNamed:(id)named object:(id)object;	// 0x4588d9
@end

@interface XXUnknownSuperclass (BRTimerAdditions)
- (void)invalidateWithObject:(id)object;	// 0x458f81
@end

@interface XXUnknownSuperclass (Drawing)
- (void)drawAtPoint:(CGPoint)point context:(CGContextRef)context;	// 0x45979d
- (void)drawInRect:(CGRect)rect context:(CGContextRef)context;	// 0x4597cd
- (void)drawInRect:(CGRect)rect withDim:(float)dim context:(CGContextRef)context;	// 0x459841
- (CGSize)typographicBounds;	// 0x4598f9
- (CGSize)typographicBoundsWithConstraint:(CGSize)constraint;	// 0x459935
@end

@interface XXUnknownSuperclass (BRValueTransformerAdditions)
+ (id)movieRatingStringTransformer;	// 0x45ae09
@end

@interface XXUnknownSuperclass (BRURLAdditions)
+ (id)URLWithString:(id)string queryParameters:(id)parameters;	// 0x45b415
+ (id)queryParametersFromDictionary:(id)dictionary;	// 0x45b599
- (id)URLWithQueryParameter:(id)queryParameter value:(id)value;	// 0x45b209
- (id)_queryParameters;	// 0x45af91
- (id)decodedQueryParameters;	// 0x45b0b9
- (BOOL)isHTTPFamilyURL;	// 0x45af51
- (BOOL)isHTTPSURL;	// 0x45af11
- (BOOL)isHTTPURL;	// 0x45aed1
- (id)queryParameters;	// 0x45b0a9
- (id)valueForParam:(id)param;	// 0x45b485
@end

@interface XXUnknownSuperclass (BRURLAdditions)
- (id)URLQueryString;	// 0x45b6f1
- (id)URLQueryStringWithKeyOrder:(id)keyOrder;	// 0x45b705
@end

@interface XXUnknownSuperclass (BRLocaliztionAdditions)
+ (id)dictionaryOfLocalizedRUIData;	// 0x45c64d
- (void)__purgeCachedLocalizedData:(id)data;	// 0x45c5f1
@end

@interface XXUnknownSuperclass (FeedAdditions)
+ (id)colorWithRGBHexString:(id)rgbhexString;	// 0x4c126d
@end

@interface XXUnknownSuperclass (ATVAdditions)
- (CGRect)drawingBounds;	// 0x4c1475
- (CGRect)visibleBounds;	// 0x4c1555
@end

@interface XXUnknownSuperclass (ATVAdditions_Private)
- (void)setDrawingBounds:(CGRect)bounds;	// 0x4c15d5
- (void)setVisibleBounds:(CGRect)bounds;	// 0x4c1641
@end

@interface XXUnknownSuperclass (ATVAdditions)
- (id)requiredURLs;	// 0x4c16a5
@end

@interface XXUnknownSuperclass (Additions)
- (BOOL)isViewable;	// 0x4cee49
@end

@interface XXUnknownSuperclass (NSObject_SBJsonWriting)
- (id)JSONRepresentation;	// 0x56256d
@end

@interface XXUnknownSuperclass (NSString_SBJsonParsing)
- (id)JSONValue;	// 0x5625f1
@end

@interface XXUnknownSuperclass (URLDecode)
- (id)urlDecodeByReplacingPercentEscapesUsingEncoding;	// 0x586069
@end

@interface XXUnknownSuperclass (URLEncode)
- (id)urlEncodeByReplacingPercentEscapesUsingEncoding;	// 0x5a2679
@end
