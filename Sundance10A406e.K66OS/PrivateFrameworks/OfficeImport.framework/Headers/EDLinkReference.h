/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface EDLinkReference : NSObject {
	unsigned mLinkIndex;	// 4 = 0x4
	unsigned mFirstSheetIndex;	// 8 = 0x8
	unsigned mLastSheetIndex;	// 12 = 0xc
}
@property(assign) unsigned firstSheetIndex;	// G=0x34fd1b91; S=0x35083895; converted property
@property(assign) unsigned lastSheetIndex;	// G=0x34fd1ba1; S=0x350838a5; converted property
@property(assign) unsigned linkIndex;	// G=0x34f2871d; S=0x350838b5; converted property
+ (id)linkReferenceWithLinkIndex:(unsigned)linkIndex firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x34ef6e91
- (id)init;	// 0x35083839
- (id)initWithLinkIndex:(unsigned)linkIndex firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x34ef6ee9
// converted property getter: - (unsigned)firstSheetIndex;	// 0x34fd1b91
- (unsigned)hash;	// 0x350838c5
- (BOOL)isEqual:(id)equal;	// 0x34ff8295
- (BOOL)isEqualToLinkReference:(id)linkReference;	// 0x34ff82f1
// converted property getter: - (unsigned)lastSheetIndex;	// 0x34fd1ba1
// converted property getter: - (unsigned)linkIndex;	// 0x34f2871d
// converted property setter: - (void)setFirstSheetIndex:(unsigned)index;	// 0x35083895
// converted property setter: - (void)setLastSheetIndex:(unsigned)index;	// 0x350838a5
// converted property setter: - (void)setLinkIndex:(unsigned)index;	// 0x350838b5
@end
