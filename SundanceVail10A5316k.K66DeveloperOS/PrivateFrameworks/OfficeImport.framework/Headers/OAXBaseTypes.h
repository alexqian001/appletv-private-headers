/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXBaseTypes : NSObject {
}
+ (float)readOptionalAngleFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x310ef281
+ (float)readOptionalFractionFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x310e0eb9
+ (float)readOptionalLengthFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x311993c9
+ (long)readOptionalLongFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x310e0ef1
+ (CGPoint)readPoint2DFromXmlNode:(xmlNode *)xmlNode;	// 0x310ef1a9
+ (id)readPoint3DFromXmlNode:(xmlNode *)xmlNode;	// 0x3125a181
+ (int)readRectAlignmentFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x310e09c1
+ (id)readRelativeRectFromXmlNode:(xmlNode *)xmlNode;	// 0x310e0db1
+ (float)readRequiredAngleFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31164a09
+ (float)readRequiredFractionFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x310df981
+ (float)readRequiredLengthFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x310ef1f9
+ (long)readRequiredLongFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x310df9b9
+ (id)readRotation3DFromXmlNode:(xmlNode *)xmlNode;	// 0x31164961
+ (CGSize)readSize2DFromXmlNode:(xmlNode *)xmlNode;	// 0x310ef231
+ (id)readVector3DFromXmlNode:(xmlNode *)xmlNode;	// 0x3125a0d9
+ (id)rectAlignmentEnumMap;	// 0x3115eec1
@end

