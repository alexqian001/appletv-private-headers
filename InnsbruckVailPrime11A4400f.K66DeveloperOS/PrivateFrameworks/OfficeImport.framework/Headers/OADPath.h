/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"

@class NSMutableArray;

@interface OADPath : NSObject {
	CGSize mSize;	// 4 = 0x4
	NSMutableArray *mElements;	// 12 = 0xc
	int mFillMode;	// 16 = 0x10
	BOOL mStroked;	// 20 = 0x14
}
@property(assign) int fillMode;	// G=0x318f130d; S=0x317dfbcd; converted property
@property(assign) CGSize size;	// G=0x318f12f5; S=0x3183eb21; converted property
@property(assign) BOOL stroked;	// G=0x317d365d; S=0x317dfbdd; converted property
- (id)init;	// 0x3177daf1
- (id).cxx_construct;	// 0x3177daed
- (void)addElement:(id)element;	// 0x3177dc7d
- (void)dealloc;	// 0x3177dcdd
- (id)elementAtIndex:(unsigned)index;	// 0x317d3ee5
- (unsigned)elementCount;	// 0x3177dc9d
// converted property getter: - (int)fillMode;	// 0x318f130d
// converted property setter: - (void)setFillMode:(int)mode;	// 0x317dfbcd
// converted property setter: - (void)setSize:(CGSize)size;	// 0x3183eb21
// converted property setter: - (void)setStroked:(BOOL)stroked;	// 0x317dfbdd
// converted property getter: - (CGSize)size;	// 0x318f12f5
// converted property getter: - (BOOL)stroked;	// 0x317d365d
@end

