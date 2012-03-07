/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAContext.h"
#import "QuartzCore-Structs.h"


__attribute__((visibility("hidden")))
@interface CAContextImpl : CAContext {
@private
	Context *_impl;	// 4 = 0x4
}
@property(assign) CGColorSpaceRef colorSpace;	// G=0x33413b75; S=0x33413ccd; converted property
@property(retain) id layer;	// G=0x33413b85; S=0x333b0df5; converted property
@property(assign) float level;	// G=0x33413b95; S=0x333b0d91; converted property
- (id)initRemoteWithOptions:(id)options;	// 0x333b07d9
- (id)initWithOptions:(id)options localContext:(bool)context;	// 0x333b081d
// converted property getter: - (CGColorSpaceRef)colorSpace;	// 0x33413b75
- (unsigned)contextId;	// 0x333b1061
- (unsigned)createSlot;	// 0x33413d01
- (void)dealloc;	// 0x333bb4ed
- (void)deleteSlot:(unsigned)slot;	// 0x33413d19
- (void)invalidate;	// 0x33413cb5
// converted property getter: - (id)layer;	// 0x33413b85
// converted property getter: - (float)level;	// 0x33413b95
- (void)orderAbove:(unsigned)above;	// 0x333b23f5
- (void)orderBelow:(unsigned)below;	// 0x33413ce5
- (Context *)renderContext;	// 0x33413bc1
// converted property setter: - (void)setColorSpace:(CGColorSpaceRef)space;	// 0x33413ccd
- (void)setFence:(unsigned)fence count:(unsigned)count;	// 0x333bb081
// converted property setter: - (void)setLayer:(id)layer;	// 0x333b0df5
// converted property setter: - (void)setLevel:(float)level;	// 0x333b0d91
- (void)setObject:(id)object forSlot:(unsigned)slot;	// 0x33413d31
- (BOOL)valid;	// 0x33413ba5
@end
