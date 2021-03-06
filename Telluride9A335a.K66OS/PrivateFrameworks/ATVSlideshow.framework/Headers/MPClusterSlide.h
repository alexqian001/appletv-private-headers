/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "NSCopying.h"

@class NSMutableDictionary, NSMutableArray, NSDate, NSString;

@interface MPClusterSlide : NSObject <NSCopying> {
	NSDate *mCaptureDate;	// 4 = 0x4
	NSString *mPath;	// 8 = 0x8
	int mReferenceCounter;	// 12 = 0xc
	NSMutableDictionary *mUsageCounterPerLayer;	// 16 = 0x10
	NSMutableArray *mUsableSlideClusters;	// 20 = 0x14
	int mIndex;	// 24 = 0x18
}
@property(copy) NSDate *captureDate;	// G=0x31a84af9; S=0x31a84b0d; @synthesize=mCaptureDate
@property(assign) int index;	// G=0x31a84b51; S=0x31a84b61; @synthesize=mIndex
@property(copy) NSString *path;	// G=0x31a84ac1; S=0x31a84ad5; @synthesize=mPath
@property(assign) int referenceCounter;	// G=0x31a84b31; S=0x31a84b41; @synthesize=mReferenceCounter
@property(retain) NSMutableArray *usableSlideClusters;	// G=0x31a84ba9; S=0x31a84bbd; @synthesize=mUsableSlideClusters
@property(retain) NSMutableDictionary *usageCounterPerLayer;	// G=0x31a84b71; S=0x31a84b85; @synthesize=mUsageCounterPerLayer
- (id)init;	// 0x31a843b9
// declared property getter: - (id)captureDate;	// 0x31a84af9
- (id)copyWithZone:(NSZone *)zone;	// 0x31a8450d
- (void)dealloc;	// 0x31a84461
- (id)description;	// 0x31a84a59
- (void)increaseUsageCounterForLayer:(id)layer;	// 0x31a845e1
// declared property getter: - (int)index;	// 0x31a84b51
- (int)overallUsageCounter;	// 0x31a847b1
// declared property getter: - (id)path;	// 0x31a84ac1
// declared property getter: - (int)referenceCounter;	// 0x31a84b31
- (void)resetAllUsageCounters;	// 0x31a84871
// declared property setter: - (void)setCaptureDate:(id)date;	// 0x31a84b0d
// declared property setter: - (void)setIndex:(int)index;	// 0x31a84b61
// declared property setter: - (void)setPath:(id)path;	// 0x31a84ad5
// declared property setter: - (void)setReferenceCounter:(int)counter;	// 0x31a84b41
// declared property setter: - (void)setUsableSlideClusters:(id)clusters;	// 0x31a84bbd
- (void)setUsageCounterForLayer:(id)layer to:(int)to;	// 0x31a846c1
// declared property setter: - (void)setUsageCounterPerLayer:(id)layer;	// 0x31a84b85
// declared property getter: - (id)usableSlideClusters;	// 0x31a84ba9
- (id)usageCountDescription;	// 0x31a84919
- (int)usageCounterForLayer:(id)layer;	// 0x31a84689
// declared property getter: - (id)usageCounterPerLayer;	// 0x31a84b71
@end

