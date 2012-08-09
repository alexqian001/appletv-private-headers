/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import "AVFigObjectInspector.h"

@class AVMetadataItem, NSDictionary, NSString, NSArray;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying> {
}
@property(readonly, assign, nonatomic) NSArray *alternateTrackGroups;	// G=0x326c4a99; 
@property(readonly, assign, nonatomic) NSArray *availableMetadataFormats;	// G=0x326c4b11; 
@property(readonly, assign, nonatomic) NSArray *commonMetadata;	// G=0x326c4af5; 
@property(readonly, assign, nonatomic, getter=isComposable) BOOL composable;	// G=0x326c4b55; 
@property(readonly, assign, nonatomic) AVMetadataItem *creationDate;	// G=0x326c4aed; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x326c49fd; 
@property(readonly, assign, nonatomic, getter=isExportable) BOOL exportable;	// G=0x326c4b4d; 
@property(readonly, assign, nonatomic) NSString *lyrics;	// G=0x326c4af1; 
@property(readonly, assign, nonatomic) NSArray *mediaSelectionGroups;	// G=0x326c4ad1; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x326c4a7d; 
@property(readonly, assign, nonatomic) int naturalTimeScale;	// G=0x326c4a85; 
@property(readonly, assign, nonatomic) float preferredRate;	// G=0x326c4a35; 
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x326c4a45; 
@property(readonly, assign, nonatomic) float preferredVolume;	// G=0x326c4a3d; 
@property(readonly, assign, nonatomic) BOOL providesPreciseDurationAndTiming;	// G=0x326c4a8d; 
@property(readonly, assign, nonatomic, getter=isReadable) BOOL readable;	// G=0x326c4b51; 
@property(readonly, assign, nonatomic) long trackCount;	// G=0x326c4a91; 
@property(readonly, assign, nonatomic) NSArray *trackIDs;	// G=0x326c4a95; 
@property(readonly, assign, nonatomic) NSDictionary *trackReferences;	// G=0x326c4ab5; 
// declared property getter: - (id)alternateTrackGroups;	// 0x326c4a99
// declared property getter: - (id)availableMetadataFormats;	// 0x326c4b11
// declared property getter: - (id)commonMetadata;	// 0x326c4af5
- (id)copyWithZone:(NSZone *)zone;	// 0x326c49ed
// declared property getter: - (id)creationDate;	// 0x326c4aed
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x326c49fd
- (BOOL)hasProtectedContent;	// 0x326c4b49
// declared property getter: - (BOOL)isComposable;	// 0x326c4b55
// declared property getter: - (BOOL)isExportable;	// 0x326c4b4d
// declared property getter: - (BOOL)isReadable;	// 0x326c4b51
// declared property getter: - (id)lyrics;	// 0x326c4af1
// declared property getter: - (id)mediaSelectionGroups;	// 0x326c4ad1
- (id)metadataForFormat:(id)format;	// 0x326c4b2d
// declared property getter: - (CGSize)naturalSize;	// 0x326c4a7d
// declared property getter: - (int)naturalTimeScale;	// 0x326c4a85
// declared property getter: - (float)preferredRate;	// 0x326c4a35
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x326c4a45
// declared property getter: - (float)preferredVolume;	// 0x326c4a3d
// declared property getter: - (BOOL)providesPreciseDurationAndTiming;	// 0x326c4a8d
// declared property getter: - (long)trackCount;	// 0x326c4a91
// declared property getter: - (id)trackIDs;	// 0x326c4a95
// declared property getter: - (id)trackReferences;	// 0x326c4ab5
@end
