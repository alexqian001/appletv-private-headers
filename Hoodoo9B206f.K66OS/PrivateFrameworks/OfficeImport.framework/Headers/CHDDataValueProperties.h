/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import <NSObject.h> // Unknown library

@class CHDMarker, OADGraphicProperties, CHDDataLabel;

__attribute__((visibility("hidden")))
@interface CHDDataValueProperties : NSObject <EDKeyedObject> {
@private
	CHDDataLabel *mDataLabel;	// 4 = 0x4
	CHDMarker *mMarker;	// 8 = 0x8
	unsigned mDataValueIndex;	// 12 = 0xc
	OADGraphicProperties *mGraphicProperties;	// 16 = 0x10
}
@property(retain) id dataLabel;	// G=0x345d94dd; S=0x3455f2d9; converted property
@property(assign) unsigned dataValueIndex;	// G=0x3455f379; S=0x3455ec89; converted property
@property(retain) id graphicProperties;	// G=0x3455f369; S=0x3455ee6d; converted property
@property(retain) id marker;	// G=0x345d94ed; S=0x3455eeb5; converted property
+ (id)dataValueProperties;	// 0x34560c3d
- (id)init;	// 0x3455ebdd
// converted property getter: - (id)dataLabel;	// 0x345d94dd
// converted property getter: - (unsigned)dataValueIndex;	// 0x3455f379
- (void)dealloc;	// 0x34560e41
// converted property getter: - (id)graphicProperties;	// 0x3455f369
- (unsigned)key;	// 0x3455eefd
// converted property getter: - (id)marker;	// 0x345d94ed
// converted property setter: - (void)setDataLabel:(id)label;	// 0x3455f2d9
// converted property setter: - (void)setDataValueIndex:(unsigned)index;	// 0x3455ec89
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x3455ee6d
// converted property setter: - (void)setMarker:(id)marker;	// 0x3455eeb5
- (id)shallowCopyWithIndex:(int)index;	// 0x34560b99
@end

