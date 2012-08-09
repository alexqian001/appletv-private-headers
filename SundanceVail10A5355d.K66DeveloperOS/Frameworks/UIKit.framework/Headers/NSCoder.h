/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSCoder.h> // Unknown library


@interface NSCoder (UIGeometryKeyedCoding)
- (CGAffineTransform)decodeCGAffineTransformForKey:(id)key;	// 0x33b8a4a5
- (CGPoint)decodeCGPointForKey:(id)key;	// 0x33aa7b85
- (CGRect)decodeCGRectForKey:(id)key;	// 0x33b8a45d
- (CGSize)decodeCGSizeForKey:(id)key;	// 0x33b8a41d
- (UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)key;	// 0x33b8a4fd
- (UIOffset)decodeUIOffsetForKey:(id)key;	// 0x33b8a531
- (void)encodeCGAffineTransform:(CGAffineTransform)transform forKey:(id)key;	// 0x33b8a381
- (void)encodeCGPoint:(CGPoint)point forKey:(id)key;	// 0x33a1c005
- (void)encodeCGRect:(CGRect)rect forKey:(id)key;	// 0x33b8a34d
- (void)encodeCGSize:(CGSize)size forKey:(id)key;	// 0x33b8a325
- (void)encodeUIEdgeInsets:(UIEdgeInsets)insets forKey:(id)key;	// 0x33b8a3c1
- (void)encodeUIOffset:(UIOffset)offset forKey:(id)key;	// 0x33b8a3f5
@end

@interface NSCoder (UITypeSafety)
- (id)_copyDecodedObjectForKey:(id)key ofClass:(Class)aClass;	// 0x33d1ba2d
@end
