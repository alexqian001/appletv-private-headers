/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLFormElement, DOMValidityState, DOMNodeList, NSString;

__attribute__((visibility("hidden")))
@interface DOMHTMLKeygenElement : DOMHTMLElement {
}
@property(assign) BOOL autofocus;	// G=0x30710b85; S=0x30710d15; 
@property(copy) NSString *challenge;	// G=0x30710ec5; S=0x30711231; 
@property(assign) BOOL disabled;	// G=0x30710c4d; S=0x30710ded; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x307114b9; 
@property(copy) NSString *keytype;	// G=0x30710fa5; S=0x30711375; 
@property(readonly, retain) DOMNodeList *labels;	// G=0x307118c5; 
@property(copy) NSString *name;	// G=0x30711085; S=0x30711575; 
@property(readonly, copy) NSString *type;	// G=0x30711159; 
@property(readonly, copy) NSString *validationMessage;	// G=0x30711779; 
@property(readonly, retain) DOMValidityState *validity;	// G=0x307116ad; 
@property(readonly, assign) BOOL willValidate;	// G=0x30710ac5; 
// declared property getter: - (BOOL)autofocus;	// 0x30710b85
// declared property getter: - (id)challenge;	// 0x30710ec5
- (BOOL)checkValidity;	// 0x30711a0d
// declared property getter: - (BOOL)disabled;	// 0x30710c4d
// declared property getter: - (id)form;	// 0x307114b9
// declared property getter: - (id)keytype;	// 0x30710fa5
// declared property getter: - (id)labels;	// 0x307118c5
// declared property getter: - (id)name;	// 0x30711085
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x30710d15
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x30711231
- (void)setCustomValidity:(id)validity;	// 0x30711acd
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x30710ded
// declared property setter: - (void)setKeytype:(id)keytype;	// 0x30711375
// declared property setter: - (void)setName:(id)name;	// 0x30711575
// declared property getter: - (id)type;	// 0x30711159
// declared property getter: - (id)validationMessage;	// 0x30711779
// declared property getter: - (id)validity;	// 0x307116ad
// declared property getter: - (BOOL)willValidate;	// 0x30710ac5
@end
