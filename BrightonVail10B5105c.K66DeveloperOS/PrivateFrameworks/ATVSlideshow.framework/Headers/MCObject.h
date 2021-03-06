/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObjectBase.h"

@class NSString, MCMontage;

@interface MCObject : MCObjectBase {
	MCMontage *mMontage;	// 4 = 0x4
	NSString *mObjectID;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) MCMontage *montage;	// G=0x32521fcd; @synthesize=mMontage
@property(readonly, assign, nonatomic) NSString *objectID;	// G=0x32521fbd; @synthesize=mObjectID
+ (id)objectWithImprint:(id)imprint andMontage:(id)montage;	// 0x32521c45
- (id)initFromScratchWithMontage:(id)montage;	// 0x32521cad
- (id)initSnapshot;	// 0x32521da9
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x32521d41
- (void)dealloc;	// 0x32521e51
- (void)demolish;	// 0x32521eb5
- (void)finalize;	// 0x32521ded
- (id)imprint;	// 0x32521eed
- (BOOL)isSnapshot;	// 0x32521ec9
// declared property getter: - (id)montage;	// 0x32521fcd
// declared property getter: - (id)objectID;	// 0x32521fbd
- (id)snapshot;	// 0x32521f59
@end

