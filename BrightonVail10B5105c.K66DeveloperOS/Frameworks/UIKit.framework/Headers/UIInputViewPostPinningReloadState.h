/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIResponder;

__attribute__((visibility("hidden")))
@interface UIInputViewPostPinningReloadState : NSObject {
	UIResponder *_responderPreventedFromSettingInputViews;	// 4 = 0x4
}
@property(retain, nonatomic) UIResponder *responderToReload;	// G=0x346aca4d; S=0x346ac415; @synthesize=_responderPreventedFromSettingInputViews
+ (id)stateWithResponder:(id)responder;	// 0x346ac3b5
- (void)dealloc;	// 0x346aca61
// declared property getter: - (id)responderToReload;	// 0x346aca4d
// declared property setter: - (void)setResponderToReload:(id)reload;	// 0x346ac415
@end
