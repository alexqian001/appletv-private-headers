/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EDPivotPageField : NSObject {
@private
	unsigned mFieldId;	// 4 = 0x4
	NSString *mCap;	// 8 = 0x8
	NSString *mName;	// 12 = 0xc
}
@property(retain) id cap;	// G=0x32a6e781; S=0x32a6e8b9; converted property
@property(assign) unsigned fieldId;	// G=0x32a6e751; S=0x32a6e761; converted property
@property(retain) id name;	// G=0x32a6e771; S=0x32a6e901; converted property
+ (id)pivotPageField;	// 0x32a6e871
- (id)init;	// 0x32a6e831
// converted property getter: - (id)cap;	// 0x32a6e781
- (void)dealloc;	// 0x32a6e949
// converted property getter: - (unsigned)fieldId;	// 0x32a6e751
// converted property getter: - (id)name;	// 0x32a6e771
// converted property setter: - (void)setCap:(id)cap;	// 0x32a6e8b9
// converted property setter: - (void)setFieldId:(unsigned)anId;	// 0x32a6e761
// converted property setter: - (void)setName:(id)name;	// 0x32a6e901
@end

