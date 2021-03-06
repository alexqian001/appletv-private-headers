/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSString;

@interface MCStateOperation : MCAction {
	NSString *_stateKey;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL alwaysNotifies;	// G=0x334b36d9; S=0x334b36ed; 
@property(assign, nonatomic) BOOL recordsTime;	// G=0x334b3711; S=0x334b3725; 
@property(copy) NSString *stateKey;	// G=0x334b37f5; S=0x334b3809; @synthesize=_stateKey
+ (id)stateOperationForTargetPlugObjectID:(id)targetPlugObjectID withStateKey:(id)stateKey;	// 0x334b3551
- (id)initWithImprint:(id)imprint;	// 0x334b35b9
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x334b3749
// declared property getter: - (BOOL)alwaysNotifies;	// 0x334b36d9
- (void)demolish;	// 0x334b3629
- (id)description;	// 0x334b379d
- (id)imprint;	// 0x334b3679
// declared property getter: - (BOOL)recordsTime;	// 0x334b3711
// declared property setter: - (void)setAlwaysNotifies:(BOOL)notifies;	// 0x334b36ed
// declared property setter: - (void)setRecordsTime:(BOOL)time;	// 0x334b3725
// declared property setter: - (void)setStateKey:(id)key;	// 0x334b3809
// declared property getter: - (id)stateKey;	// 0x334b37f5
@end

