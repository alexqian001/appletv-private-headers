/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLFormElement, DOMHTMLOptionsCollection;

@interface DOMHTMLSelectElement : DOMHTMLElement {
}
@property(assign) BOOL autofocus;	// G=0x361d954d; S=0x361d9659; 
@property(assign) BOOL disabled;	// G=0x361d976d; S=0x361d9879; 
@property(readonly, assign) DOMHTMLFormElement *form;	// G=0x361d998d; 
@property(readonly, assign) int length;	// G=0x361da409; 
@property(assign) BOOL multiple;	// G=0x361d9a91; S=0x361d9ac5; 
@property(copy) NSString *name;	// G=0x361d9bcd; S=0x361d9ce9; 
@property(readonly, assign) DOMHTMLOptionsCollection *options;	// G=0x361da2fd; 
@property(assign) BOOL required;	// G=0x361d9e91; S=0x361d9f9d; converted property
@property(assign) int selectedIndex;	// G=0x361da615; S=0x361da715; 
@property(assign) int size;	// G=0x361da0b1; S=0x361da0e1; 
@property(readonly, assign) NSString *type;	// G=0x361da1e1; 
@property(copy) NSString *value;	// G=0x361da815; S=0x361da9d1; 
@property(readonly, assign) BOOL willValidate;	// G=0x361dab79; 
- (void)_activateItemAtIndex:(int)index;	// 0x361a0d2d
- (void)_activateItemAtIndex:(int)index allowMultipleSelection:(BOOL)selection;	// 0x361a0d4d
- (void)add:(id)add :(id)arg2;	// 0x361db4a1
- (void)add:(id)add before:(id)before;	// 0x361db371
// declared property getter: - (BOOL)autofocus;	// 0x361d954d
- (BOOL)checkValidity;	// 0x361db6d1
- (unsigned)completeLength;	// 0x36203735
// declared property getter: - (BOOL)disabled;	// 0x361d976d
// declared property getter: - (id)form;	// 0x361d998d
- (id)item:(unsigned)item;	// 0x361db0ad
- (id)labels;	// 0x361daf45
// declared property getter: - (int)length;	// 0x361da409
- (id)listItemAtIndex:(int)index;	// 0x36203745
// declared property getter: - (BOOL)multiple;	// 0x361d9a91
// declared property getter: - (id)name;	// 0x361d9bcd
- (id)namedItem:(id)item;	// 0x361db1bd
// declared property getter: - (id)options;	// 0x361da2fd
- (void)remove:(int)remove;	// 0x361db5d1
// converted property getter: - (BOOL)required;	// 0x361d9e91
// declared property getter: - (int)selectedIndex;	// 0x361da615
- (id)selectedOptions;	// 0x361da509
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x361d9659
- (void)setCustomValidity:(id)validity;	// 0x361db7d5
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x361d9879
// declared property setter: - (void)setMultiple:(BOOL)multiple;	// 0x361d9ac5
// declared property setter: - (void)setName:(id)name;	// 0x361d9ce9
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x361d9f9d
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x361da715
// declared property setter: - (void)setSize:(int)size;	// 0x361da0e1
// declared property setter: - (void)setValue:(id)value;	// 0x361da9d1
// declared property getter: - (int)size;	// 0x361da0b1
- (int)structuralComplexityContribution;	// 0x362034dd
// declared property getter: - (id)type;	// 0x361da1e1
- (id)validationMessage;	// 0x361dad89
- (id)validity;	// 0x361dac7d
// declared property getter: - (id)value;	// 0x361da815
// declared property getter: - (BOOL)willValidate;	// 0x361dab79
@end

