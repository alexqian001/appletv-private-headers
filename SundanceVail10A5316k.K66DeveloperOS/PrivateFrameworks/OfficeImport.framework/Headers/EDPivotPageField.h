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
@property(retain) id cap;	// G=0x3122f9c9; S=0x3122f9d9; converted property
@property(assign) unsigned fieldId;	// G=0x3122f955; S=0x3122f965; converted property
@property(retain) id name;	// G=0x3122f975; S=0x3122f985; converted property
+ (id)pivotPageField;	// 0x3122f90d
- (id)init;	// 0x3122f869
// converted property getter: - (id)cap;	// 0x3122f9c9
- (void)dealloc;	// 0x3122f8a9
// converted property getter: - (unsigned)fieldId;	// 0x3122f955
// converted property getter: - (id)name;	// 0x3122f975
// converted property setter: - (void)setCap:(id)cap;	// 0x3122f9d9
// converted property setter: - (void)setFieldId:(unsigned)anId;	// 0x3122f965
// converted property setter: - (void)setName:(id)name;	// 0x3122f985
@end

