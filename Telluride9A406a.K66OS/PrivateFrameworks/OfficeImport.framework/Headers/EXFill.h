/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EXFill : NSObject {
}
+ (id)edFillFromXmlFillElement:(xmlNode *)xmlFillElement differentialFill:(bool)fill state:(id)state;	// 0x329c00b1
+ (id)edFillFromXmlFillElement:(xmlNode *)xmlFillElement state:(id)state;	// 0x329c0091
+ (id)edGradientFillFromXmlElement:(xmlNode *)xmlElement state:(id)state;	// 0x32a7122d
+ (int)edGradientTypeFromXmlGradientTypeString:(id)xmlGradientTypeString state:(id)state;	// 0x32a711dd
+ (id)edPatternFillFromXmlElement:(xmlNode *)xmlElement differentialFill:(bool)fill state:(id)state;	// 0x329c0199
+ (int)edPatternTypeFromXmlPatternTypeString:(id)xmlPatternTypeString;	// 0x329c0391
+ (id)edStopFromXmlGradientElement:(xmlNode *)xmlGradientElement state:(id)state;	// 0x32a71399
@end

