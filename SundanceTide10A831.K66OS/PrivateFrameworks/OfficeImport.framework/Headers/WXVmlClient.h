/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAVClient.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface WXVmlClient : NSObject <OAVClient> {
}
+ (bool)behindText:(id)text;	// 0x36abfe15
+ (void)copyFromDrawable:(id)drawable toContent:(id)content;	// 0x36c88da1
+ (BOOL)floating:(id)floating;	// 0x36abfdf1
+ (int)horizontalPosition:(id)position;	// 0x36abfe31
+ (void)initialize;	// 0x36aa31c9
+ (void)readClientDataFromGroup:(xmlNode *)group toGroup:(id)group2 state:(id)state;	// 0x36b73249
+ (void)readClientDataFromShape:(xmlNode *)shape toGraphic:(id)graphic state:(id)state;	// 0x36abf5c9
+ (void)readFromDrawable:(xmlNode *)drawable toContent:(id)content;	// 0x36abfa81
+ (void)readTextWrappingFromParent:(xmlNode *)parent toAnchor:(id)anchor;	// 0x36ac02d9
+ (int)relativeHorizontalPosition:(id)position;	// 0x36abff05
+ (int)relativeVerticalPosition:(id)position;	// 0x36ac00d9
+ (int)verticalPosition:(id)position;	// 0x36ac0005
+ (int)vmlSupportLevel;	// 0x36abde8d
+ (double)wrapDistanceBottom:(id)bottom;	// 0x36ac0289
+ (double)wrapDistanceLeft:(id)left;	// 0x36ac01d9
+ (double)wrapDistanceRight:(id)right;	// 0x36ac0251
+ (double)wrapDistanceTop:(id)top;	// 0x36ac0211
+ (int)zIndex:(id)index;	// 0x36ac02c5
@end

