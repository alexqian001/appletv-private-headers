/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray, NSMutableSet, NSSet, NSArray;

__attribute__((visibility("hidden")))
@interface _GEORegionalResourcesNode : NSObject {
@private
	unsigned _x;	// 4 = 0x4
	unsigned _y;	// 8 = 0x8
	unsigned _z;	// 12 = 0xc
	NSMutableSet *_resourceIdentifiers;	// 16 = 0x10
	NSMutableArray *_attributions;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSArray *attributions;	// G=0x34b581d9; @synthesize=_attributions
@property(readonly, assign, nonatomic) NSSet *resourceIdentifiers;	// G=0x34b581c9; @synthesize=_resourceIdentifiers
- (id)initWithX:(unsigned)x y:(unsigned)y z:(unsigned)z;	// 0x34b57e95
- (void)addAttribution:(id)attribution;	// 0x34b580d1
- (void)addResourceName:(id)name type:(int)type;	// 0x34b57ff5
// declared property getter: - (id)attributions;	// 0x34b581d9
- (BOOL)containsTileKey:(GEOTileKey *)key;	// 0x34b57f5d
- (void)dealloc;	// 0x34b57ef9
// declared property getter: - (id)resourceIdentifiers;	// 0x34b581c9
@end
