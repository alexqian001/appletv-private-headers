/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDString, EDReference;

__attribute__((visibility("hidden")))
@interface EDHyperlink : NSObject {
@private
	EDString *mPath;	// 4 = 0x4
	EDString *mDosPath;	// 8 = 0x8
	EDString *mDescriptionText;	// 12 = 0xc
	EDString *mTextMark;	// 16 = 0x10
	EDString *mToolTip;	// 20 = 0x14
	EDReference *mReference;	// 24 = 0x18
	int mType;	// 28 = 0x1c
}
@property(retain) id descriptionText;	// G=0x32a6d071; S=0x329d06b9; converted property
@property(retain) id dosPath;	// G=0x32a6d061; S=0x329d0749; converted property
@property(retain) id path;	// G=0x32a2644d; S=0x329d0701; converted property
@property(retain) id reference;	// G=0x32a6d0a1; S=0x329d07d9; converted property
@property(retain) id textMark;	// G=0x32a6d081; S=0x329d0791; converted property
@property(retain) id toolTip;	// G=0x32a6d091; S=0x32a1fff9; converted property
@property(assign) int type;	// G=0x32a6d0b1; S=0x329d06a9; converted property
+ (id)hyperlink;	// 0x32a26405
- (void)dealloc;	// 0x329d1c1d
// converted property getter: - (id)descriptionText;	// 0x32a6d071
// converted property getter: - (id)dosPath;	// 0x32a6d061
// converted property getter: - (id)path;	// 0x32a2644d
// converted property getter: - (id)reference;	// 0x32a6d0a1
// converted property setter: - (void)setDescriptionText:(id)text;	// 0x329d06b9
// converted property setter: - (void)setDosPath:(id)path;	// 0x329d0749
// converted property setter: - (void)setPath:(id)path;	// 0x329d0701
// converted property setter: - (void)setReference:(id)reference;	// 0x329d07d9
// converted property setter: - (void)setTextMark:(id)mark;	// 0x329d0791
// converted property setter: - (void)setToolTip:(id)tip;	// 0x32a1fff9
// converted property setter: - (void)setType:(int)type;	// 0x329d06a9
// converted property getter: - (id)textMark;	// 0x32a6d081
// converted property getter: - (id)toolTip;	// 0x32a6d091
// converted property getter: - (int)type;	// 0x32a6d0b1
@end
