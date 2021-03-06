/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIWindow, NSString;

__attribute__((visibility("hidden")))
@interface UISpringBoardHostedView : UIView {
	NSString *_remoteViewIdentifier;	// 96 = 0x60
	UIWindow *_remoteWindow;	// 100 = 0x64
	BOOL _remoteViewOpaque;	// 104 = 0x68
}
@property(readonly, retain) NSString *remoteViewIdentifier;	// G=0x2f6fcbf9; converted property
- (void)dealloc;	// 0x2f6fca89
- (void)registerWithIdentifier:(id)identifier;	// 0x2f6fc769
// converted property getter: - (id)remoteViewIdentifier;	// 0x2f6fcbf9
- (void)setRemoteViewOpaque:(BOOL)opaque;	// 0x2f6fc759
- (void)unregister;	// 0x2f6fcac9
@end

