/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSString;

@interface MPActionTrigger : MPAction {
	NSString *_actionKey;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *actionKey;	// G=0x3200c701; S=0x3200c589; @synthesize=_actionKey
+ (id)actionTrigger;	// 0x3200c449
- (id)init;	// 0x3200c48d
- (id)initWithCoder:(id)coder;	// 0x3200c4cd
// declared property getter: - (id)actionKey;	// 0x3200c701
- (id)copyWithZone:(NSZone *)zone;	// 0x3200c651
- (void)dealloc;	// 0x3200c53d
- (void)encodeWithCoder:(id)coder;	// 0x3200c5f5
- (void)setAction:(id)action;	// 0x3200c6a5
// declared property setter: - (void)setActionKey:(id)key;	// 0x3200c589
@end

