/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVAssetTrackSegment : NSObject {
	XXStruct_lthJfB _timeMapping;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;	// G=0x30323bbd; 
@property(readonly, assign, nonatomic) XXStruct_lthJfB timeMapping;	// G=0x30323ef9; @synthesize=_timeMapping
- (id)_initWithTimeMapping:(XXStruct_lthJfB)timeMapping;	// 0x30323af9
- (unsigned)hash;	// 0x30323e39
// declared property getter: - (BOOL)isEmpty;	// 0x30323bbd
- (BOOL)isEqual:(id)equal;	// 0x30323bd9
// declared property getter: - (XXStruct_lthJfB)timeMapping;	// 0x30323ef9
@end

