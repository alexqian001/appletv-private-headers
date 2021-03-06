/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXEffect : NSObject {
}
+ (id)presetShadowTypeEnumMap;	// 0x349c3a69
+ (id)readEffectsFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x348dec81
+ (void)readGlow:(id)glow fromXmlNode:(xmlNode *)xmlNode;	// 0x349b1d91
+ (void)readOuterShadow:(id)shadow fromXmlNode:(xmlNode *)xmlNode;	// 0x348def99
+ (void)readPresetShadow:(id)shadow fromXmlNode:(xmlNode *)xmlNode;	// 0x349c39c9
+ (void)readReflection:(id)reflection fromXmlNode:(xmlNode *)xmlNode;	// 0x349b31e9
+ (void)readShadow:(id)shadow fromXmlNode:(xmlNode *)xmlNode;	// 0x348df179
@end

