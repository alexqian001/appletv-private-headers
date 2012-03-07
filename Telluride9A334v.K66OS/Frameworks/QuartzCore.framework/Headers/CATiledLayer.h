/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"


@interface CATiledLayer : CALayer {
}
@property(assign, getter=isDrawingEnabled) BOOL drawingEnabled;	// G=0x31b33c79; S=0x31b33c85; 
@property(assign) CGColorRef fillColor;	// G=0x31b33c59; S=0x31b33c61; 
@property(assign) unsigned levelsOfDetail;	// G=0x31b32d05; S=0x31b32cfd; 
@property(assign) unsigned levelsOfDetailBias;	// G=0x31b32cf5; S=0x31b32ced; 
@property(assign) float maximumTileScale;	// G=0x31b33c69; S=0x31b33c71; 
@property(assign) CGSize tileSize;	// G=0x31b32cdd; S=0x31b32cd5; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x31b32b09
+ (id)defaultValueForKey:(id)key;	// 0x31b32b61
+ (double)fadeDuration;	// 0x31b329ed
+ (unsigned)prefetchedTiles;	// 0x31b32a01
+ (BOOL)shouldDrawOnMainThread;	// 0x31b329fd
- (BOOL)_canDisplayConcurrently;	// 0x31b329f9
- (void)_dealloc;	// 0x31b33001
- (void)_display;	// 0x31b32d0d
- (BOOL)canDrawRect:(CGRect)rect levelOfDetail:(int)detail;	// 0x31b33255
- (void)dealloc;	// 0x31b32fcd
- (void)didChangeValueForKey:(id)key;	// 0x31b32a05
- (void)displayInRect:(CGRect)rect levelOfDetail:(int)detail options:(id)options;	// 0x31b33a09
// declared property getter: - (CGColorRef)fillColor;	// 0x31b33c59
- (void)invalidateContents;	// 0x31b33035
// declared property getter: - (BOOL)isDrawingEnabled;	// 0x31b33c79
// declared property getter: - (unsigned long)levelsOfDetail;	// 0x31b32d05
// declared property getter: - (unsigned long)levelsOfDetailBias;	// 0x31b32cf5
// declared property getter: - (float)maximumTileScale;	// 0x31b33c69
- (BOOL)queueIsEmpty;	// 0x31b33bbd
- (void)setContents:(id)contents;	// 0x31b33049
// declared property setter: - (void)setDrawingEnabled:(BOOL)enabled;	// 0x31b33c85
// declared property setter: - (void)setFillColor:(CGColorRef)color;	// 0x31b33c61
// declared property setter: - (void)setLevelsOfDetail:(unsigned long)detail;	// 0x31b32cfd
// declared property setter: - (void)setLevelsOfDetailBias:(unsigned long)detailBias;	// 0x31b32ced
// declared property setter: - (void)setMaximumTileScale:(float)scale;	// 0x31b33c71
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x31b33119
- (void)setNeedsDisplayInRect:(CGRect)rect levelOfDetail:(int)detail;	// 0x31b33221
- (void)setNeedsDisplayInRect:(CGRect)rect levelOfDetail:(int)detail options:(id)options;	// 0x31b338d9
// declared property setter: - (void)setTileSize:(CGSize)size;	// 0x31b32cd5
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x31b331c5
// declared property getter: - (CGSize)tileSize;	// 0x31b32cdd
@end
