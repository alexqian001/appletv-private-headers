/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableData;
@protocol OS_dispatch_queue;

@interface MPReshuffledArrayIndexMap : NSObject <NSCoding, NSCopying> {
	unsigned _arrayCount;	// 4 = 0x4
	unsigned _identityIndexesCount;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_shuffledIndexesQueue;	// 12 = 0xc
	NSMutableData *_shuffledIndexesData;	// 16 = 0x10
	NSRange _focusedRange;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) unsigned countOfArrayIndexMappings;	// G=0x31d5575d; 
@property(assign, nonatomic) NSRange focusedRange;	// G=0x31d55c61; S=0x31d55c79; @synthesize=_focusedRange
- (id)initWithCoder:(id)coder;	// 0x31d553c5
- (id)initWithSourceArrayCount:(unsigned)sourceArrayCount identityArraysCount:(unsigned)count;	// 0x31d5534d
- (id)initWithSourceArrayCount:(unsigned)sourceArrayCount identityIndexesCount:(unsigned)count;	// 0x31d5526d
- (BOOL)_onQueueExtendMap;	// 0x31d5579d
- (id)copyWithZone:(NSZone *)zone;	// 0x31d555d5
// declared property getter: - (unsigned)countOfArrayIndexMappings;	// 0x31d5575d
- (void)dealloc;	// 0x31d55361
- (void)encodeWithCoder:(id)coder;	// 0x31d5550d
// declared property getter: - (NSRange)focusedRange;	// 0x31d55c61
// declared property setter: - (void)setFocusedRange:(NSRange)range;	// 0x31d55c79
- (unsigned)sourceArrayIndexForIndex:(unsigned)index;	// 0x31d55a3d
@end
