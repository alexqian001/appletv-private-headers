/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLButtonElement : DOMHTMLElement {
}
@property(copy) NSString *accessKey;	// G=0x31e1f4d5; S=0x31e1f5f9; 
@property(assign) BOOL autofocus;	// G=0x31e1d455; S=0x31e1d561; 
@property(assign) BOOL disabled;	// G=0x31e1d675; S=0x31e1d781; 
@property(readonly, assign) DOMHTMLFormElement *form;	// G=0x31e1d895; 
@property(retain) id formAction;	// G=0x31e1d999; S=0x31e1db61; converted property
@property(retain) id formEnctype;	// G=0x31e1dd15; S=0x31e1ded1; converted property
@property(retain) id formMethod;	// G=0x31e1e079; S=0x31e1e235; converted property
@property(assign) BOOL formNoValidate;	// G=0x31e1e3dd; S=0x31e1e4e9; converted property
@property(retain) id formTarget;	// G=0x31e1e5fd; S=0x31e1e721; converted property
@property(copy) NSString *name;	// G=0x31e1e8d5; S=0x31e1e9f9; 
@property(readonly, assign) NSString *type;	// G=0x31e1ebad; 
@property(copy) NSString *value;	// G=0x31e1ecc9; S=0x31e1eded; 
@property(readonly, assign) BOOL willValidate;	// G=0x31e1efa1; 
// declared property getter: - (id)accessKey;	// 0x31e1f4d5
// declared property getter: - (BOOL)autofocus;	// 0x31e1d455
- (BOOL)checkValidity;	// 0x31e1f7ad
- (void)click;	// 0x31e1fa59
// declared property getter: - (BOOL)disabled;	// 0x31e1d675
// declared property getter: - (id)form;	// 0x31e1d895
// converted property getter: - (id)formAction;	// 0x31e1d999
// converted property getter: - (id)formEnctype;	// 0x31e1dd15
// converted property getter: - (id)formMethod;	// 0x31e1e079
// converted property getter: - (BOOL)formNoValidate;	// 0x31e1e3dd
// converted property getter: - (id)formTarget;	// 0x31e1e5fd
- (id)labels;	// 0x31e1f36d
// declared property getter: - (id)name;	// 0x31e1e8d5
// declared property setter: - (void)setAccessKey:(id)key;	// 0x31e1f5f9
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x31e1d561
- (void)setCustomValidity:(id)validity;	// 0x31e1f8b1
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x31e1d781
// converted property setter: - (void)setFormAction:(id)action;	// 0x31e1db61
// converted property setter: - (void)setFormEnctype:(id)enctype;	// 0x31e1ded1
// converted property setter: - (void)setFormMethod:(id)method;	// 0x31e1e235
// converted property setter: - (void)setFormNoValidate:(BOOL)validate;	// 0x31e1e4e9
// converted property setter: - (void)setFormTarget:(id)target;	// 0x31e1e721
// declared property setter: - (void)setName:(id)name;	// 0x31e1e9f9
// declared property setter: - (void)setValue:(id)value;	// 0x31e1eded
- (int)structuralComplexityContribution;	// 0x31e7620d
// declared property getter: - (id)type;	// 0x31e1ebad
- (id)validationMessage;	// 0x31e1f1b1
- (id)validity;	// 0x31e1f0a5
// declared property getter: - (id)value;	// 0x31e1ecc9
// declared property getter: - (BOOL)willValidate;	// 0x31e1efa1
@end

