/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <CALayer.h> // Unknown library


@interface TileHostLayer : CALayer {
	TileGrid *_tileGrid;	// 48 = 0x30
}
- (id)initWithTileGrid:(TileGrid *)tileGrid;	// 0x36723751
- (id)actionForKey:(id)key;	// 0x367237b9
- (void)renderInContext:(CGContextRef)context;	// 0x36f46465
@end

