/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CATextLayer.h"


@interface CASmoothedTextLayer : CATextLayer {
}
@property(assign) unsigned fontSmoothingStyle;	// G=0x32b0b1a1; S=0x32b0b1a9; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x32b0b149
+ (id)defaultValueForKey:(id)key;	// 0x32b0a8f5
+ (BOOL)needsDisplayForKey:(id)key;	// 0x32b0a999
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x32b0b04d
- (void)_drawLine:(CTLineRef)line inContext:(CGContextRef)context atPoint:(CGPoint)point;	// 0x32b0aa55
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x32b0b0e1
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x32b0b115
- (void)didChangeValueForKey:(id)key;	// 0x32b0a9f1
// declared property getter: - (unsigned)fontSmoothingStyle;	// 0x32b0b1a1
// declared property setter: - (void)setFontSmoothingStyle:(unsigned)style;	// 0x32b0b1a9
@end

