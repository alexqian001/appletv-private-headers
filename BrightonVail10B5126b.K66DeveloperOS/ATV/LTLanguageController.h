/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"


__attribute__((visibility("hidden")))
@interface LTLanguageController : BRViewController {
	BOOL _useVoiceOverGreeting;	// 104 = 0x68
}
@property(assign, nonatomic) BOOL useVoiceOverGreeting;	// G=0x19d95; S=0x19da5; @synthesize=_useVoiceOverGreeting
- (id)init;	// 0x19b61
- (void)_showLanguageChooser;	// 0x19db5
- (BOOL)brEventAction:(id)action;	// 0x19cb5
- (void)dealloc;	// 0x19c09
- (void)languageSelected:(id)selected;	// 0x19cd5
// declared property setter: - (void)setUseVoiceOverGreeting:(BOOL)greeting;	// 0x19da5
// declared property getter: - (BOOL)useVoiceOverGreeting;	// 0x19d95
- (void)wasPushed;	// 0x19c75
@end

