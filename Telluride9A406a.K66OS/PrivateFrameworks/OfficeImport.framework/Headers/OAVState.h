/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, OCPPackagePart, NSMutableDictionary, OAXDrawingState;

__attribute__((visibility("hidden")))
@interface OAVState : NSObject {
@private
	Class mClient;	// 4 = 0x4
	OAXDrawingState *mOAXState;	// 8 = 0x8
	OCPPackagePart *mPackagePart;	// 12 = 0xc
	NSMutableDictionary *mShapeTypes;	// 16 = 0x10
	NSMutableDictionary *mShapeIdMap;	// 20 = 0x14
	NSMutableSet *mDualDrawables;	// 24 = 0x18
}
@property(retain) id packagePart;	// G=0x329b42d9; S=0x329ac841; converted property
- (id)initWithClient:(Class)client packagePart:(id)part;	// 0x329a39c1
- (void)addDualDrawable:(id)drawable;	// 0x329e42bd
- (id)blipRefForURL:(id)url;	// 0x32ac93e9
- (Class)client;	// 0x329ba425
- (void)dealloc;	// 0x329bd379
- (id)drawableForVmlShapeId:(id)vmlShapeId;	// 0x329e420d
- (BOOL)isDualDrawable:(id)drawable;	// 0x329e4425
- (id)oaxState;	// 0x32ac93d9
- (unsigned long)officeArtShapeIdWithVmlShapeId:(id)vmlShapeId;	// 0x329b8381
// converted property getter: - (id)packagePart;	// 0x329b42d9
- (void)reset;	// 0x329c2d75
- (void)setDrawable:(id)drawable forVmlShapeId:(id)vmlShapeId;	// 0x329b82a1
- (void)setOAXState:(id)state;	// 0x329a3b1d
// converted property setter: - (void)setPackagePart:(id)part;	// 0x329ac841
- (void)setShapeType:(unsigned short)type forId:(id)anId;	// 0x329bc899
- (unsigned short)shapeTypeForId:(id)anId;	// 0x329bc8ed
@end
