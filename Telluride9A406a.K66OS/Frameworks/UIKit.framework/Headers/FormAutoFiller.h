/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class DOMHTMLInputElement, WebFrame, DOMElement, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FormAutoFiller : NSObject {
@private
	WebFrame *_frame;	// 4 = 0x4
	DOMElement *_form;	// 8 = 0x8
	int _formType;	// 12 = 0xc
	DOMHTMLInputElement *_usernameElement;	// 16 = 0x10
	DOMHTMLInputElement *_passwordElement;	// 20 = 0x14
	NSMutableArray *_autoFilledControls;	// 24 = 0x18
	NSMutableDictionary *_fieldsFilledFromAB;	// 28 = 0x1c
	NSMutableArray *_continuationFields;	// 32 = 0x20
	BOOL _hasAutoFilled;	// 36 = 0x24
}
@property(readonly, assign) int formType;	// G=0x3592f4a1; converted property
@property(readonly, assign) BOOL hasAutoFilled;	// G=0x359307fd; converted property
@property(readonly, retain) DOMHTMLInputElement *passwordElement;	// G=0x3592f50d; converted property
@property(readonly, retain) DOMHTMLInputElement *usernameElement;	// G=0x3592f4d5; converted property
+ (id)abMatchInFrame:(id)frame form:(id)form fieldName:(id)name;	// 0x3592eee9
+ (id)autoFillerForFrame:(id)frame form:(id)form create:(BOOL)create;	// 0x3592ec95
+ (void)clearAutoFillStateForFrame:(id)frame;	// 0x357c0425
+ (void)clearAutoFilledTextField:(id)field inFrame:(id)frame form:(id)form;	// 0x3592f019
+ (id)fieldNameForAutoFillOfControl:(id)control rep:(id)rep respectHTMLAutocompleteAttribute:(BOOL)attribute;	// 0x3592fb75
+ (int)indexOfItemInRadioButtonGroup:(id)radioButtonGroup forSynonyms:(id)synonyms;	// 0x3592f951
+ (int)indexOfItemInSelectElement:(id)selectElement forSynonyms:(id)synonyms;	// 0x3592f545
+ (BOOL)isContinuationField:(id)field inFrame:(id)frame form:(id)form;	// 0x3592ef39
+ (id)matchForControl:(id)control rep:(id)rep fieldLabels:(id)labels useFieldName:(BOOL)name foundByPageScan:(BOOL *)scan;	// 0x3592edf9
+ (id)radioButtonGroupContaining:(id)containing inFormElements:(id)formElements;	// 0x3592f7c9
+ (void)recordABMatch:(id)match inFrame:(id)frame form:(id)form fieldName:(id)name;	// 0x3592ef95
- (id)init;	// 0x3592f061
- (id)_decomposeStreetAddress:(id)address style:(int)style;	// 0x3592faa9
- (void)_insertABValue:(id)value inTextFieldElement:(id)textFieldElement match:(id)match fieldName:(id)name;	// 0x3592fc3d
- (int)_itemInSelectElement:(id)selectElement forMatch:(id)match;	// 0x3592fa29
- (int)_reflectAutoFillMatch:(id)match inControls:(id)controls currIndex:(int)index fieldName:(id)name;	// 0x359304c5
- (int)_reflectMultiFieldMatch:(id)match inControls:(id)controls currIndex:(unsigned)index fieldName:(id)name isPhoneNumber:(BOOL)number;	// 0x3592fcd9
- (void)_scanElements;	// 0x3592f27d
- (BOOL)autoFill;	// 0x3593080d
- (void)autoFillAddressStartingAtControl:(id)control match:(id)match;	// 0x35930a3d
- (int)autoFillPhoneOrZipStartingAtControl:(id)control match:(id)match;	// 0x35930d81
- (void)clearAutoFilledTextField:(id)field;	// 0x35930fc1
- (void)dealloc;	// 0x3592f0d5
// converted property getter: - (int)formType;	// 0x3592f4a1
// converted property getter: - (BOOL)hasAutoFilled;	// 0x359307fd
// converted property getter: - (id)passwordElement;	// 0x3592f50d
- (void)recordABContinuationField:(id)field;	// 0x35930f1d
- (void)recordABMatch:(id)match fieldName:(id)name;	// 0x35930e41
// converted property getter: - (id)usernameElement;	// 0x3592f4d5
- (id)visibleControlsInForm;	// 0x3592f199
@end

