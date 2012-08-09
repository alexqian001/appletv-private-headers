/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDDocument, WDText, WDAContent;

@interface WDATextBox : NSObject {
	WDText *mText;	// 4 = 0x4
	unsigned long mNextTextBoxId;	// 8 = 0x8
	bool mOle;	// 12 = 0xc
	WDDocument *mDocument;	// 16 = 0x10
	WDAContent *mParent;	// 20 = 0x14
}
@property(retain) id document;	// G=0x31cd2b89; S=0x31c7a7bd; converted property
@property(assign) unsigned long nextTextBoxId;	// G=0x31c7a7ad; S=0x31cccf59; converted property
@property(assign, getter=isOle) BOOL ole;	// G=0x31cd2e49; S=0x31cccf0d; converted property
@property(retain) id parent;	// G=0x31cd2b59; S=0x31c7a725; converted property
@property(retain) id text;	// G=0x31c88b31; S=0x31c7a735; converted property
- (id)init;	// 0x31c7a6f9
- (void)dealloc;	// 0x31c89e6d
// converted property getter: - (id)document;	// 0x31cd2b89
// converted property getter: - (BOOL)isOle;	// 0x31cd2e49
// converted property getter: - (unsigned long)nextTextBoxId;	// 0x31c7a7ad
// converted property getter: - (id)parent;	// 0x31cd2b59
// converted property setter: - (void)setDocument:(id)document;	// 0x31c7a7bd
// converted property setter: - (void)setNextTextBoxId:(unsigned long)anId;	// 0x31cccf59
// converted property setter: - (void)setOle:(BOOL)ole;	// 0x31cccf0d
// converted property setter: - (void)setParent:(id)parent;	// 0x31c7a725
// converted property setter: - (void)setText:(id)text;	// 0x31c7a735
// converted property getter: - (id)text;	// 0x31c88b31
@end
