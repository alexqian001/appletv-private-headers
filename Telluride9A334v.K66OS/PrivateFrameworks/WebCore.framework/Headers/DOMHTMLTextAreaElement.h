/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLTextAreaElement : DOMHTMLElement {
}
@property(copy) NSString *accessKey;	// G=0x36866225; S=0x368663e5; 
@property(retain) id autocapitalize;	// G=0x368678ad; S=0x36867981; converted property
@property(assign) BOOL autocorrect;	// G=0x36867725; S=0x368677e1; converted property
@property(assign) BOOL autofocus;	// G=0x368667f1; S=0x36866b21; 
@property(assign) int cols;	// G=0x3686585d; S=0x3686666d; 
@property(copy) NSString *defaultValue;	// G=0x36865be1; S=0x36865f65; 
@property(assign) BOOL disabled;	// G=0x36866729; S=0x36866a49; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x3686609d; 
@property(assign) int maxLength;	// G=0x36865889; S=0x36866da9; converted property
@property(copy) NSString *name;	// G=0x36865a35; S=0x36866e75; 
@property(retain) id placeholder;	// G=0x36866305; S=0x36866529; converted property
@property(assign) BOOL readOnly;	// G=0x368668b9; S=0x36866bf9; 
@property(assign) BOOL required;	// G=0x36866981; S=0x36866cd1; converted property
@property(assign) int rows;	// G=0x36865949; S=0x36866fad; 
@property(assign) int selectionEnd;	// G=0x36867465; S=0x36867521; 
@property(assign) int selectionStart;	// G=0x368672ed; S=0x368673a9; 
@property(readonly, copy) NSString *type;	// G=0x36865b09; 
@property(copy) NSString *value;	// G=0x36865d2d; S=0x36867069; 
@property(readonly, assign) BOOL willValidate;	// G=0x36865975; 
- (int)_autocapitalizeType;	// 0x36833589
- (BOOL)_isEdited;	// 0x36833569
// declared property getter: - (id)accessKey;	// 0x36866225
// converted property getter: - (id)autocapitalize;	// 0x368678ad
// converted property getter: - (BOOL)autocorrect;	// 0x36867725
// declared property getter: - (BOOL)autofocus;	// 0x368667f1
- (BOOL)checkValidity;	// 0x36867b71
// declared property getter: - (int)cols;	// 0x3686585d
// declared property getter: - (id)defaultValue;	// 0x36865be1
// declared property getter: - (BOOL)disabled;	// 0x36866729
// declared property getter: - (id)form;	// 0x3686609d
- (id)labels;	// 0x368675dd
// converted property getter: - (int)maxLength;	// 0x36865889
// declared property getter: - (id)name;	// 0x36865a35
// converted property getter: - (id)placeholder;	// 0x36866305
// declared property getter: - (BOOL)readOnly;	// 0x368668b9
// converted property getter: - (BOOL)required;	// 0x36866981
// declared property getter: - (int)rows;	// 0x36865949
- (void)select;	// 0x36867ab9
// declared property getter: - (int)selectionEnd;	// 0x36867465
// declared property getter: - (int)selectionStart;	// 0x368672ed
// declared property setter: - (void)setAccessKey:(id)key;	// 0x368663e5
// converted property setter: - (void)setAutocapitalize:(id)autocapitalize;	// 0x36867981
// converted property setter: - (void)setAutocorrect:(BOOL)autocorrect;	// 0x368677e1
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x36866b21
// declared property setter: - (void)setCols:(int)cols;	// 0x3686666d
- (void)setCustomValidity:(id)validity;	// 0x36867c31
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x36865f65
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x36866a49
// converted property setter: - (void)setMaxLength:(int)length;	// 0x36866da9
// declared property setter: - (void)setName:(id)name;	// 0x36866e75
// converted property setter: - (void)setPlaceholder:(id)placeholder;	// 0x36866529
// declared property setter: - (void)setReadOnly:(BOOL)only;	// 0x36866bf9
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x36866cd1
// declared property setter: - (void)setRows:(int)rows;	// 0x36866fad
// declared property setter: - (void)setSelectionEnd:(int)end;	// 0x36867521
- (void)setSelectionRange:(int)range end:(int)end;	// 0x36867d69
// declared property setter: - (void)setSelectionStart:(int)start;	// 0x368673a9
// declared property setter: - (void)setValue:(id)value;	// 0x36867069
- (int)structuralComplexityContribution;	// 0x3687a5a5
- (unsigned)textLength;	// 0x36865e7d
// declared property getter: - (id)type;	// 0x36865b09
- (id)validationMessage;	// 0x368671a1
- (id)validity;	// 0x36866159
// declared property getter: - (id)value;	// 0x36865d2d
// declared property getter: - (BOOL)willValidate;	// 0x36865975
@end

