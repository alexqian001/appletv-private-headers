/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAlertViewDelegate.h"
#import "_UITargetedProxy.h"


__attribute__((visibility("hidden")))
@interface _UIUserNotificationRestrictedAlertViewProxy : _UITargetedProxy <UIAlertViewDelegate> {
	id _delegate;	// 8 = 0x8
}
@property(assign) id delegate;	// G=0x3103d175; S=0x3103d185; converted property
+ (id)restrictedProxyForAlertView:(id)alertView;	// 0x3103d149
// converted property getter: - (id)delegate;	// 0x3103d175
- (void)forwardInvocation:(id)invocation;	// 0x3103d2bd
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3103d1e1
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3103d271
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3103d185
@end
