/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <GraphicsServices/NSCoder.h>


@interface NSCoder (UIGeometryKeyedCoding)
- (CGAffineTransform)decodeCGAffineTransformForKey:(id)key;	// 0x2f593d75
- (CGPoint)decodeCGPointForKey:(id)key;	// 0x2f49b39d
- (CGRect)decodeCGRectForKey:(id)key;	// 0x2f593d15
- (CGSize)decodeCGSizeForKey:(id)key;	// 0x2f593cb5
- (UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)key;	// 0x2f576a2d
- (UIOffset)decodeUIOffsetForKey:(id)key;	// 0x2f593de1
- (void)encodeCGAffineTransform:(CGAffineTransform)transform forKey:(id)key;	// 0x2f593bdd
- (void)encodeCGPoint:(CGPoint)point forKey:(id)key;	// 0x2f49b2c9
- (void)encodeCGRect:(CGRect)rect forKey:(id)key;	// 0x2f593ba9
- (void)encodeCGSize:(CGSize)size forKey:(id)key;	// 0x2f593b45
- (void)encodeUIEdgeInsets:(UIEdgeInsets)insets forKey:(id)key;	// 0x2f593c1d
- (void)encodeUIOffset:(UIOffset)offset forKey:(id)key;	// 0x2f593c51
@end

@interface NSCoder (UITypeSafety)
- (id)_copyDecodedObjectForKey:(id)key ofClass:(Class)aClass;	// 0x2f7ba3ad
@end
