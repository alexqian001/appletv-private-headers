/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDCollection;

@interface EDPivotField : NSObject {
	int mAxis;	// 4 = 0x4
	bool mCompact;	// 8 = 0x8
	bool mDataField;	// 9 = 0x9
	bool mShowDefaultSubTotal;	// 10 = 0xa
	bool mInsertBlankRow;	// 11 = 0xb
	bool mOutlineItems;	// 12 = 0xc
	bool mShowAllItems;	// 13 = 0xd
	bool mSubtotalTop;	// 14 = 0xe
	unsigned mNumFmtId;	// 16 = 0x10
	EDCollection *mPivotFieldItems;	// 20 = 0x14
}
@property(assign) int axis;	// G=0x37127df5; S=0x370b6b55; converted property
@property(assign) bool compact;	// G=0x37127d59; S=0x370b6b65; converted property
@property(assign) bool dataField;	// G=0x37127d6d; S=0x370b6b75; converted property
@property(assign) bool insertBlankRow;	// G=0x37127d95; S=0x370b6b95; converted property
@property(assign) unsigned numFmtId;	// G=0x37127de5; S=0x370b6ad1; converted property
@property(assign) bool outlineItems;	// G=0x37127da9; S=0x370b6ba5; converted property
@property(assign) bool showAllItems;	// G=0x37127dbd; S=0x370b6bb5; converted property
@property(assign) bool showDefaultSubTotal;	// G=0x37127d81; S=0x370b6b85; converted property
@property(assign) bool subtotalTop;	// G=0x37127dd1; S=0x370b6bc5; converted property
+ (id)pivotField;	// 0x370b69ad
- (id)init;	// 0x370b69f5
// converted property getter: - (int)axis;	// 0x37127df5
// converted property getter: - (bool)compact;	// 0x37127d59
// converted property getter: - (bool)dataField;	// 0x37127d6d
- (void)dealloc;	// 0x370b93a5
// converted property getter: - (bool)insertBlankRow;	// 0x37127d95
// converted property getter: - (unsigned)numFmtId;	// 0x37127de5
// converted property getter: - (bool)outlineItems;	// 0x37127da9
- (id)pivotFieldItems;	// 0x370b6bd5
// converted property setter: - (void)setAxis:(int)axis;	// 0x370b6b55
// converted property setter: - (void)setCompact:(bool)compact;	// 0x370b6b65
// converted property setter: - (void)setDataField:(bool)field;	// 0x370b6b75
// converted property setter: - (void)setInsertBlankRow:(bool)row;	// 0x370b6b95
// converted property setter: - (void)setNumFmtId:(unsigned)anId;	// 0x370b6ad1
// converted property setter: - (void)setOutlineItems:(bool)items;	// 0x370b6ba5
// converted property setter: - (void)setShowAllItems:(bool)items;	// 0x370b6bb5
// converted property setter: - (void)setShowDefaultSubTotal:(bool)total;	// 0x370b6b85
// converted property setter: - (void)setSubtotalTop:(bool)top;	// 0x370b6bc5
// converted property getter: - (bool)showAllItems;	// 0x37127dbd
// converted property getter: - (bool)showDefaultSubTotal;	// 0x37127d81
// converted property getter: - (bool)subtotalTop;	// 0x37127dd1
@end

