/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMHTMLElement.h"

@class NSString, NSURL, DOMHTMLFormElement, DOMFileList;

@interface DOMHTMLInputElement : DOMHTMLElement {
}
@property(readonly, assign) NSURL *absoluteImageURL;	// G=0x361c80d5; 
@property(copy) NSString *accept;	// G=0x361c1401; S=0x361c1525; 
@property(copy) NSString *accessKey;	// G=0x361c7ba1; S=0x361c7cc5; 
@property(copy) NSString *align;	// G=0x361c73d1; S=0x361c74f5; 
@property(copy) NSString *alt;	// G=0x361c16d9; S=0x361c17fd; 
@property(readonly, assign) NSString *altDisplayString;	// G=0x361c7e79; 
@property(retain) id autocapitalize;	// G=0x361c830d; S=0x361c8425; converted property
@property(retain) id autocomplete;	// G=0x361c19b1; S=0x361c1ad5; converted property
@property(assign) BOOL autocorrect;	// G=0x360c8e2d; S=0x361c8205; converted property
@property(assign) BOOL autofocus;	// G=0x361c1c89; S=0x361c1d95; 
@property(assign) BOOL checked;	// G=0x361c20c9; S=0x361c20fd; 
@property(assign) BOOL defaultChecked;	// G=0x361c1ea9; S=0x361c1fb5; 
@property(copy) NSString *defaultValue;	// G=0x361c5a89; S=0x361c5c45; 
@property(retain) id dirName;	// G=0x361c2205; S=0x361c2329; converted property
@property(assign) BOOL disabled;	// G=0x361c24dd; S=0x361c25e9; 
@property(readonly, assign) DOMFileList *files;	// G=0x361c2701; 
@property(readonly, assign) DOMHTMLFormElement *form;	// G=0x360c868d; 
@property(retain) id formAction;	// G=0x361c280d; S=0x361c29d5; converted property
@property(retain) id formEnctype;	// G=0x361c2b89; S=0x361c2d45; converted property
@property(retain) id formMethod;	// G=0x361c2eed; S=0x361c30a9; converted property
@property(assign) BOOL formNoValidate;	// G=0x361c3251; S=0x361c335d; converted property
@property(retain) id formTarget;	// G=0x361c3471; S=0x361c3595; converted property
@property(assign) unsigned height;	// G=0x361c3749; S=0x361c3849; converted property
@property(assign) BOOL incremental;	// G=0x361c7981; S=0x361c7a8d; converted property
@property(assign) BOOL indeterminate;	// G=0x361c3949; S=0x361c397d; 
@property(retain) id max;	// G=0x361c3a85; S=0x361c3ba9; converted property
@property(assign) int maxLength;	// G=0x361c3d5d; S=0x361c3e61; 
@property(retain) id min;	// G=0x361c3f75; S=0x361c4099; converted property
@property(assign) BOOL multiple;	// G=0x361c424d; S=0x361c4359; 
@property(copy) NSString *name;	// G=0x360c8795; S=0x361c4471; 
@property(retain) id pattern;	// G=0x361c4625; S=0x361c4749; converted property
@property(retain) id placeholder;	// G=0x361c48fd; S=0x361c4a21; converted property
@property(assign) BOOL readOnly;	// G=0x360c8435; S=0x361c4bd9; 
@property(assign) BOOL required;	// G=0x361c4ced; S=0x361c4df9; converted property
@property(retain) id selectionDirection;	// G=0x361c7111; S=0x361c7229; converted property
@property(assign) int selectionEnd;	// G=0x361c6f11; S=0x361c7011; 
@property(assign) int selectionStart;	// G=0x361c6d11; S=0x361c6e11; 
@property(copy) NSString *size;	// G=0x361c4f0d; S=0x361c50d5; 
@property(copy) NSString *src;	// G=0x361c5289; S=0x361c5451; 
@property(retain) id step;	// G=0x361c5605; S=0x361c5729; converted property
@property(copy) NSString *type;	// G=0x360c856d; S=0x361c58e1; 
@property(copy) NSString *useMap;	// G=0x361c76a9; S=0x361c77cd; 
@property(copy) NSString *value;	// G=0x361c5ded; S=0x361c5fad; 
@property(assign) double valueAsDate;	// G=0x361c6159; S=0x361c6281; converted property
@property(assign) double valueAsNumber;	// G=0x361c63c1; S=0x361c64c5; converted property
@property(assign) unsigned width;	// G=0x361c65dd; S=0x361c66dd; converted property
@property(readonly, assign) BOOL willValidate;	// G=0x361c67dd; 
- (int)_autocapitalizeType;	// 0x360c8ba5
- (BOOL)_isAutofilled;	// 0x361a0d01
- (BOOL)_isEdited;	// 0x360d4781
- (BOOL)_isTextField;	// 0x360c8541
- (void)_replaceCharactersInRange:(NSRange)range withString:(id)string selectingFromIndex:(int)index;	// 0x361a0ab5
- (NSRange)_selectedRange;	// 0x361a0ccd
- (void)_setAutofilled:(BOOL)autofilled;	// 0x361a0d11
// declared property getter: - (id)absoluteImageURL;	// 0x361c80d5
// declared property getter: - (id)accept;	// 0x361c1401
// declared property getter: - (id)accessKey;	// 0x361c7ba1
// declared property getter: - (id)align;	// 0x361c73d1
// declared property getter: - (id)alt;	// 0x361c16d9
// declared property getter: - (id)altDisplayString;	// 0x361c7e79
// converted property getter: - (id)autocapitalize;	// 0x361c830d
// converted property getter: - (id)autocomplete;	// 0x361c19b1
// converted property getter: - (BOOL)autocorrect;	// 0x360c8e2d
// declared property getter: - (BOOL)autofocus;	// 0x361c1c89
- (BOOL)checkValidity;	// 0x361c87f5
// declared property getter: - (BOOL)checked;	// 0x361c20c9
- (void)click;	// 0x361c8ca5
// declared property getter: - (BOOL)defaultChecked;	// 0x361c1ea9
// declared property getter: - (id)defaultValue;	// 0x361c5a89
// converted property getter: - (id)dirName;	// 0x361c2205
// declared property getter: - (BOOL)disabled;	// 0x361c24dd
// declared property getter: - (id)files;	// 0x361c2701
// declared property getter: - (id)form;	// 0x360c868d
// converted property getter: - (id)formAction;	// 0x361c280d
// converted property getter: - (id)formEnctype;	// 0x361c2b89
// converted property getter: - (id)formMethod;	// 0x361c2eed
// converted property getter: - (BOOL)formNoValidate;	// 0x361c3251
// converted property getter: - (id)formTarget;	// 0x361c3471
// converted property getter: - (unsigned)height;	// 0x361c3749
// converted property getter: - (BOOL)incremental;	// 0x361c7981
// declared property getter: - (BOOL)indeterminate;	// 0x361c3949
- (id)labels;	// 0x361c6ba9
// converted property getter: - (id)max;	// 0x361c3a85
// declared property getter: - (int)maxLength;	// 0x361c3d5d
// converted property getter: - (id)min;	// 0x361c3f75
// declared property getter: - (BOOL)multiple;	// 0x361c424d
// declared property getter: - (id)name;	// 0x360c8795
// converted property getter: - (id)pattern;	// 0x361c4625
// converted property getter: - (id)placeholder;	// 0x361c48fd
// declared property getter: - (BOOL)readOnly;	// 0x360c8435
// converted property getter: - (BOOL)required;	// 0x361c4ced
- (void)select;	// 0x361c8aa1
// converted property getter: - (id)selectionDirection;	// 0x361c7111
// declared property getter: - (int)selectionEnd;	// 0x361c6f11
// declared property getter: - (int)selectionStart;	// 0x361c6d11
// declared property setter: - (void)setAccept:(id)accept;	// 0x361c1525
// declared property setter: - (void)setAccessKey:(id)key;	// 0x361c7cc5
// declared property setter: - (void)setAlign:(id)align;	// 0x361c74f5
// declared property setter: - (void)setAlt:(id)alt;	// 0x361c17fd
// converted property setter: - (void)setAutocapitalize:(id)autocapitalize;	// 0x361c8425
// converted property setter: - (void)setAutocomplete:(id)autocomplete;	// 0x361c1ad5
// converted property setter: - (void)setAutocorrect:(BOOL)autocorrect;	// 0x361c8205
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x361c1d95
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x361c20fd
- (void)setCustomValidity:(id)validity;	// 0x361c88f9
// declared property setter: - (void)setDefaultChecked:(BOOL)checked;	// 0x361c1fb5
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x361c5c45
// converted property setter: - (void)setDirName:(id)name;	// 0x361c2329
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x361c25e9
// converted property setter: - (void)setFormAction:(id)action;	// 0x361c29d5
// converted property setter: - (void)setFormEnctype:(id)enctype;	// 0x361c2d45
// converted property setter: - (void)setFormMethod:(id)method;	// 0x361c30a9
// converted property setter: - (void)setFormNoValidate:(BOOL)validate;	// 0x361c335d
// converted property setter: - (void)setFormTarget:(id)target;	// 0x361c3595
// converted property setter: - (void)setHeight:(unsigned)height;	// 0x361c3849
// converted property setter: - (void)setIncremental:(BOOL)incremental;	// 0x361c7a8d
// declared property setter: - (void)setIndeterminate:(BOOL)indeterminate;	// 0x361c397d
// converted property setter: - (void)setMax:(id)max;	// 0x361c3ba9
// declared property setter: - (void)setMaxLength:(int)length;	// 0x361c3e61
// converted property setter: - (void)setMin:(id)min;	// 0x361c4099
// declared property setter: - (void)setMultiple:(BOOL)multiple;	// 0x361c4359
// declared property setter: - (void)setName:(id)name;	// 0x361c4471
// converted property setter: - (void)setPattern:(id)pattern;	// 0x361c4749
// converted property setter: - (void)setPlaceholder:(id)placeholder;	// 0x361c4a21
// declared property setter: - (void)setReadOnly:(BOOL)only;	// 0x361c4bd9
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x361c4df9
// converted property setter: - (void)setSelectionDirection:(id)direction;	// 0x361c7229
// declared property setter: - (void)setSelectionEnd:(int)end;	// 0x361c7011
- (void)setSelectionRange:(int)range end:(int)end;	// 0x361c8b9d
// declared property setter: - (void)setSelectionStart:(int)start;	// 0x361c6e11
// declared property setter: - (void)setSize:(id)size;	// 0x361c50d5
// declared property setter: - (void)setSrc:(id)src;	// 0x361c5451
// converted property setter: - (void)setStep:(id)step;	// 0x361c5729
// declared property setter: - (void)setType:(id)type;	// 0x361c58e1
// declared property setter: - (void)setUseMap:(id)map;	// 0x361c77cd
// declared property setter: - (void)setValue:(id)value;	// 0x361c5fad
// converted property setter: - (void)setValueAsDate:(double)date;	// 0x361c6281
// converted property setter: - (void)setValueAsNumber:(double)number;	// 0x361c64c5
- (void)setValueAsNumberWithChangeEvent:(double)changeEvent;	// 0x361a0f39
- (void)setValueForUser:(id)user;	// 0x361c8da1
- (void)setValueWithChangeEvent:(id)changeEvent;	// 0x361a0d95
// converted property setter: - (void)setWidth:(unsigned)width;	// 0x361c66dd
// declared property getter: - (id)size;	// 0x361c4f0d
// declared property getter: - (id)src;	// 0x361c5289
// converted property getter: - (id)step;	// 0x361c5605
- (void)stepDown:(int)down;	// 0x361c86e1
- (void)stepUp:(int)up;	// 0x361c85cd
- (int)structuralComplexityContribution;	// 0x362034d5
// declared property getter: - (id)type;	// 0x360c856d
// declared property getter: - (id)useMap;	// 0x361c76a9
- (id)validationMessage;	// 0x361c69ed
- (id)validity;	// 0x361c68e1
// declared property getter: - (id)value;	// 0x361c5ded
// converted property getter: - (double)valueAsDate;	// 0x361c6159
// converted property getter: - (double)valueAsNumber;	// 0x361c63c1
// converted property getter: - (unsigned)width;	// 0x361c65dd
// declared property getter: - (BOOL)willValidate;	// 0x361c67dd
@end

