/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDPivotAreaReference : NSObject {
@private
	bool mByPosition;	// 4 = 0x4
	bool mRelative;	// 5 = 0x5
	bool mSelected;	// 6 = 0x6
	unsigned mFieldId;	// 8 = 0x8
	unsigned mCount;	// 12 = 0xc
}
@property(assign) bool byPosition;	// G=0x34dcf791; S=0x34dcf7a1; converted property
@property(assign) unsigned count;	// G=0x34dcf811; S=0x34dcf821; converted property
@property(assign) unsigned fieldId;	// G=0x34dcf7f1; S=0x34dcf801; converted property
@property(assign) bool relative;	// G=0x34dcf7b1; S=0x34dcf7c1; converted property
@property(assign) bool selected;	// G=0x34dcf7d1; S=0x34dcf7e1; converted property
+ (id)pivotAreaReference;	// 0x34dcfa21
- (id)init;	// 0x34dcf9a9
// converted property getter: - (bool)byPosition;	// 0x34dcf791
// converted property getter: - (unsigned)count;	// 0x34dcf811
// converted property getter: - (unsigned)fieldId;	// 0x34dcf7f1
// converted property getter: - (bool)relative;	// 0x34dcf7b1
// converted property getter: - (bool)selected;	// 0x34dcf7d1
// converted property setter: - (void)setByPosition:(bool)position;	// 0x34dcf7a1
// converted property setter: - (void)setCount:(unsigned)count;	// 0x34dcf821
// converted property setter: - (void)setFieldId:(unsigned)anId;	// 0x34dcf801
// converted property setter: - (void)setRelative:(bool)relative;	// 0x34dcf7c1
// converted property setter: - (void)setSelected:(bool)selected;	// 0x34dcf7e1
@end
