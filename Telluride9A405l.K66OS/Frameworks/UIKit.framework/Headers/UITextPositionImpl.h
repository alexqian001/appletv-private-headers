/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextPosition.h"

@class WebVisiblePosition;

__attribute__((visibility("hidden")))
@interface UITextPositionImpl : UITextPosition {
@private
	WebVisiblePosition *_webVisiblePosition;	// 4 = 0x4
}
@property(retain, nonatomic) WebVisiblePosition *webVisiblePosition;	// G=0x32d5bac5; S=0x32d5b9fd; @synthesize=_webVisiblePosition
+ (id)wrapWebVisiblePosition:(id)position;	// 0x32d5b99d
- (void)dealloc;	// 0x32d6fb29
- (id)description;	// 0x32f69609
- (BOOL)isEqual:(id)equal;	// 0x32f695d1
// declared property setter: - (void)setWebVisiblePosition:(id)position;	// 0x32d5b9fd
// declared property getter: - (id)webVisiblePosition;	// 0x32d5bac5
@end

