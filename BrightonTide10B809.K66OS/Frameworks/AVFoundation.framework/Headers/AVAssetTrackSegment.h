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
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;	// G=0x302b35b5; 
@property(readonly, assign, nonatomic) XXStruct_lthJfB timeMapping;	// G=0x302b38f1; @synthesize=_timeMapping
- (id)_initWithTimeMapping:(XXStruct_lthJfB)timeMapping;	// 0x302b34f1
- (unsigned)hash;	// 0x302b3831
// declared property getter: - (BOOL)isEmpty;	// 0x302b35b5
- (BOOL)isEqual:(id)equal;	// 0x302b35d1
// declared property getter: - (XXStruct_lthJfB)timeMapping;	// 0x302b38f1
@end

