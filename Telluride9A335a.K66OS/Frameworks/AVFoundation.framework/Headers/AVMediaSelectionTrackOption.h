/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionOption.h"

@class AVAssetTrack, AVWeakReference;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
	AVAssetTrack *_track;	// 8 = 0x8
	AVWeakReference *_weakReferenceToGroup;	// 12 = 0xc
	BOOL _displaysNonForcedSubtitles;	// 16 = 0x10
}
@property(readonly, assign) BOOL displaysNonForcedSubtitles;	// G=0x32373371; converted property
@property(readonly, retain) AVAssetTrack *track;	// G=0x32373361; converted property
- (id)initWithAssetTrack:(id)assetTrack group:(id)group;	// 0x323754a5
- (id)initWithAssetTrack:(id)assetTrack group:(id)group displaysNonForcedSubtitles:(BOOL)subtitles;	// 0x323754c9
- (id)_ancillaryDescription;	// 0x32374fe1
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x32374ba5
- (id)availableMetadataFormats;	// 0x32374d6d
- (id)commonMetadata;	// 0x32374d8d
- (void)dealloc;	// 0x32375445
// converted property getter: - (BOOL)displaysNonForcedSubtitles;	// 0x32373371
- (id)group;	// 0x3237533d
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x32374df1
- (unsigned)hash;	// 0x3237535d
- (BOOL)isEqual:(id)equal;	// 0x32375395
- (BOOL)isPlayable;	// 0x32374dcd
- (id)locale;	// 0x32374dad
- (id)mediaSubTypes;	// 0x32374e85
- (id)mediaType;	// 0x32374fa1
- (id)metadataForFormat:(id)format;	// 0x32374d49
- (id)propertyList;	// 0x32374a5d
// converted property getter: - (id)track;	// 0x32373361
- (int)trackID;	// 0x32374fc1
@end
