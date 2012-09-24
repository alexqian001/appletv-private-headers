/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCStateOperation.h"

@class NSString;

@interface MCStateOperationStringSet : MCStateOperation {
	NSString *_string;	// 16 = 0x10
}
@property(copy) NSString *string;	// G=0x3613af05; S=0x3613af19; @synthesize=_string
+ (id)stateOperationForTargetPlugObjectID:(id)targetPlugObjectID withStateKey:(id)stateKey andString:(id)string;	// 0x3613acf1
- (id)initWithImprint:(id)imprint;	// 0x3613ad39
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3613ae59
- (void)demolish;	// 0x3613ada9
- (id)description;	// 0x3613aead
- (id)imprint;	// 0x3613adf9
// declared property setter: - (void)setString:(id)string;	// 0x3613af19
// declared property getter: - (id)string;	// 0x3613af05
@end
