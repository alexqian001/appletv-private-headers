/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObjectBase.h"

@class MCMontage, NSString;

@interface MCObject : MCObjectBase {
@private
	NSString *mObjectID;	// 4 = 0x4
@protected
	MCMontage *mMontage;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) MCMontage *montage;	// G=0x30ae91b5; @synthesize=mMontage
@property(readonly, assign, nonatomic) NSString *objectID;	// G=0x30ae91a5; @synthesize=mObjectID
+ (id)objectWithImprint:(id)imprint andMontage:(id)montage;	// 0x30ae8e19
- (id)initFromScratchWithMontage:(id)montage;	// 0x30ae8e81
- (id)initSnapshot;	// 0x30ae8f81
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x30ae8f15
- (void)dealloc;	// 0x30ae9039
- (void)finalize;	// 0x30ae8fc5
- (id)imprint;	// 0x30ae90d1
- (BOOL)isSnapshot;	// 0x30ae90ad
// declared property getter: - (id)montage;	// 0x30ae91b5
// declared property getter: - (id)objectID;	// 0x30ae91a5
- (id)snapshot;	// 0x30ae9141
@end
