/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EDPivotDataField : NSObject {
@private
	int mBaseField;	// 4 = 0x4
	unsigned mBaseItem;	// 8 = 0x8
	unsigned mFieldId;	// 12 = 0xc
	unsigned mNumFmtId;	// 16 = 0x10
	NSString *mName;	// 20 = 0x14
	int mFormat;	// 24 = 0x18
}
@property(assign) int baseField;	// G=0x3122f435; S=0x311bf031; converted property
@property(assign) unsigned baseItem;	// G=0x3122f445; S=0x311bf041; converted property
@property(assign) unsigned fieldId;	// G=0x3122f455; S=0x311bf051; converted property
@property(retain) id name;	// G=0x3122f475; S=0x311bf071; converted property
@property(assign) unsigned numFmtId;	// G=0x3122f465; S=0x311bf061; converted property
@property(assign) int showDataAs;	// G=0x3122f485; S=0x311bf1d5; converted property
+ (id)pivotDataField;	// 0x311bef71
- (id)init;	// 0x311befb9
// converted property getter: - (int)baseField;	// 0x3122f435
// converted property getter: - (unsigned)baseItem;	// 0x3122f445
- (void)dealloc;	// 0x311c0ab1
// converted property getter: - (unsigned)fieldId;	// 0x3122f455
// converted property getter: - (id)name;	// 0x3122f475
// converted property getter: - (unsigned)numFmtId;	// 0x3122f465
// converted property setter: - (void)setBaseField:(int)field;	// 0x311bf031
// converted property setter: - (void)setBaseItem:(unsigned)item;	// 0x311bf041
// converted property setter: - (void)setFieldId:(unsigned)anId;	// 0x311bf051
// converted property setter: - (void)setName:(id)name;	// 0x311bf071
// converted property setter: - (void)setNumFmtId:(unsigned)anId;	// 0x311bf061
// converted property setter: - (void)setShowDataAs:(int)as;	// 0x311bf1d5
// converted property getter: - (int)showDataAs;	// 0x3122f485
@end

