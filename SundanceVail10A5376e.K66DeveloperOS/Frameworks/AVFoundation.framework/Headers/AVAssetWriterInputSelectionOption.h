/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVMediaSelectionOption.h"

@class NSString, AVAssetWriterInput, NSArray, NSDictionary;

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption {
	AVAssetWriterInput *_input;	// 8 = 0x8
	NSString *_mediaType;	// 12 = 0xc
	NSDictionary *_outputSettings;	// 16 = 0x10
	opaqueCMFormatDescription *_sourceFormatHint;	// 20 = 0x14
	NSString *_languageCode;	// 24 = 0x18
	NSString *_extendedLanguageTag;	// 28 = 0x1c
	NSArray *_metadata;	// 32 = 0x20
	NSDictionary *_trackReferences;	// 36 = 0x24
	BOOL _displaysNonForcedSubtitles;	// 40 = 0x28
	BOOL _enabled;	// 41 = 0x29
}
@property(readonly, assign, nonatomic) BOOL displaysNonForcedSubtitles;	// G=0x368bee01; @synthesize=_displaysNonForcedSubtitles
@property(readonly, assign, nonatomic) NSString *extendedLanguageTag;	// G=0x368bedd1; @synthesize=_extendedLanguageTag
@property(readonly, assign, nonatomic) AVAssetWriterInput *input;	// G=0x368bed81; @synthesize=_input
@property(readonly, assign, nonatomic) NSString *languageCode;	// G=0x368bedc1; @synthesize=_languageCode
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x368bed91; @synthesize=_mediaType
@property(readonly, assign, nonatomic) NSArray *metadata;	// G=0x368bede1; @synthesize=_metadata
@property(readonly, assign, nonatomic) NSDictionary *outputSettings;	// G=0x368beda1; @synthesize=_outputSettings
@property(readonly, assign, nonatomic) opaqueCMFormatDescription *sourceFormatHint;	// G=0x368bedb1; @synthesize=_sourceFormatHint
@property(readonly, assign, nonatomic) NSDictionary *trackReferences;	// G=0x368bedf1; @synthesize=_trackReferences
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)assetWriterInput;	// 0x368bde01
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)assetWriterInput displaysNonForcedSubtitles:(BOOL)subtitles;	// 0x368bde49
- (id)initWithAssetWriterInput:(id)assetWriterInput;	// 0x368bde95
- (id)initWithAssetWriterInput:(id)assetWriterInput displaysNonForcedSubtitles:(BOOL)subtitles;	// 0x368bdea9
- (id)_ancillaryDescription;	// 0x368be381
- (BOOL)_hasEqualValueForKey:(id)key asObject:(id)object;	// 0x368be179
- (BOOL)_isAuxiliaryContent;	// 0x368be569
- (BOOL)_isDesignatedDefault;	// 0x368be7c5
- (BOOL)_isMainProgramContent;	// 0x368be5c5
- (id)_taggedCharacteristics;	// 0x368be501
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x368beb95
- (id)availableMetadataFormats;	// 0x368be899
- (id)commonMetadata;	// 0x368be831
- (void)dealloc;	// 0x368be059
// declared property getter: - (BOOL)displaysNonForcedSubtitles;	// 0x368bee01
// declared property getter: - (id)extendedLanguageTag;	// 0x368bedd1
- (void)finalize;	// 0x368be135
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x368be5e9
- (unsigned)hash;	// 0x368be2e1
// declared property getter: - (id)input;	// 0x368bed81
- (BOOL)isEqual:(id)equal;	// 0x368be1d5
- (BOOL)isPlayable;	// 0x368be761
// declared property getter: - (id)languageCode;	// 0x368bedc1
- (id)locale;	// 0x368be7d5
- (id)mediaSubTypes;	// 0x368be38d
// declared property getter: - (id)mediaType;	// 0x368bed91
// declared property getter: - (id)metadata;	// 0x368bede1
- (id)metadataForFormat:(id)format;	// 0x368bea1d
// declared property getter: - (id)outputSettings;	// 0x368beda1
- (id)propertyList;	// 0x368bed7d
// declared property getter: - (opaqueCMFormatDescription *)sourceFormatHint;	// 0x368bedb1
// declared property getter: - (id)trackReferences;	// 0x368bedf1
@end

