/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CALayer.h"
#import "QuartzCore-Structs.h"

@class NSString;

@interface CAScrollLayer : CALayer {
}
@property(copy) NSString *scrollMode;	// G=0x32953595; S=0x3295359d; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x3295353d
+ (id)defaultValueForKey:(id)key;	// 0x3295318d
- (void)_scrollPoint:(CGPoint)point fromLayer:(id)layer;	// 0x329533d9
- (void)_scrollRect:(CGRect)rect fromLayer:(id)layer;	// 0x32953425
- (CGRect)_visibleRectOfLayer:(id)layer;	// 0x32953489
// declared property getter: - (id)scrollMode;	// 0x32953595
- (void)scrollToPoint:(CGPoint)point;	// 0x329531f1
- (void)scrollToRect:(CGRect)rect;	// 0x3295328d
// declared property setter: - (void)setScrollMode:(id)mode;	// 0x3295359d
@end

