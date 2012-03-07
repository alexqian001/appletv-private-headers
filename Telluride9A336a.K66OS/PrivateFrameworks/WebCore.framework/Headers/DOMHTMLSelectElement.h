/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLFormElement, DOMHTMLOptionsCollection, NSString;

@interface DOMHTMLSelectElement : DOMHTMLElement {
}
@property(assign) BOOL autofocus;	// G=0x31c0b979; S=0x31c0bbe1; 
@property(assign) BOOL disabled;	// G=0x31c0b8b1; S=0x31c0bb09; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x31c0b495; 
@property(readonly, assign) int length;	// G=0x31c0b3d9; 
@property(assign) BOOL multiple;	// G=0x31c0ae29; S=0x31c0bd91; 
@property(copy) NSString *name;	// G=0x31c0b081; S=0x31c0be5d; 
@property(readonly, retain) DOMHTMLOptionsCollection *options;	// G=0x31c0b769; 
@property(assign) BOOL required;	// G=0x31c0ba41; S=0x31c0bcb9; converted property
@property(assign) int selectedIndex;	// G=0x31c0abe9; S=0x31c0aca9; 
@property(assign) int size;	// G=0x31c0aee9; S=0x31c0bf95; 
@property(readonly, copy) NSString *type;	// G=0x31c0afa9; 
@property(copy) NSString *value;	// G=0x31c0b155; S=0x31c0b2a1; 
@property(readonly, assign) BOOL willValidate;	// G=0x31c0ad69; 
- (void)_activateItemAtIndex:(int)index;	// 0x31be1505
- (void)_activateItemAtIndex:(int)index allowMultipleSelection:(BOOL)selection;	// 0x31be1529
- (void)add:(id)add :(id)arg2;	// 0x31c0c479
- (void)add:(id)add before:(id)before;	// 0x31c0c391
// declared property getter: - (BOOL)autofocus;	// 0x31c0b979
- (BOOL)checkValidity;	// 0x31c0c199
- (unsigned)completeLength;	// 0x31c29f99
// declared property getter: - (BOOL)disabled;	// 0x31c0b8b1
// declared property getter: - (id)form;	// 0x31c0b495
- (id)item:(unsigned)item;	// 0x31c0c61d
- (id)labels;	// 0x31c0c051
// declared property getter: - (int)length;	// 0x31c0b3d9
- (id)listItemAtIndex:(int)index;	// 0x31c29fad
// declared property getter: - (BOOL)multiple;	// 0x31c0ae29
// declared property getter: - (id)name;	// 0x31c0b081
- (id)namedItem:(id)item;	// 0x31c0c6e5
// declared property getter: - (id)options;	// 0x31c0b769
- (void)remove:(int)remove;	// 0x31c0c561
// converted property getter: - (BOOL)required;	// 0x31c0ba41
// declared property getter: - (int)selectedIndex;	// 0x31c0abe9
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x31c0bbe1
- (void)setCustomValidity:(id)validity;	// 0x31c0c259
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x31c0bb09
// declared property setter: - (void)setMultiple:(BOOL)multiple;	// 0x31c0bd91
// declared property setter: - (void)setName:(id)name;	// 0x31c0be5d
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x31c0bcb9
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x31c0aca9
// declared property setter: - (void)setSize:(int)size;	// 0x31c0bf95
// declared property setter: - (void)setValue:(id)value;	// 0x31c0b2a1
// declared property getter: - (int)size;	// 0x31c0aee9
- (int)structuralComplexityContribution;	// 0x31c285b5
// declared property getter: - (id)type;	// 0x31c0afa9
- (id)validationMessage;	// 0x31c0b61d
- (id)validity;	// 0x31c0b551
// declared property getter: - (id)value;	// 0x31c0b155
// declared property getter: - (BOOL)willValidate;	// 0x31c0ad69
@end
