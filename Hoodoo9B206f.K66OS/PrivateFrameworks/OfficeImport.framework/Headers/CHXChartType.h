/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHXChartType : NSObject {
}
+ (id)chdChartTypeFromXmlChartTypeElement:(xmlNode *)xmlChartTypeElement state:(id)state;	// 0x34555f39
+ (int)chdGroupingFromXmlGroupingElement:(xmlNode *)xmlGroupingElement;	// 0x34556565
+ (int)chdShapeTypeFromXmlShapeTypeElement:(xmlNode *)xmlShapeTypeElement;	// 0x3455b721
+ (Class)chxChartTypeClassWithXmlElement:(xmlNode *)xmlElement;	// 0x34556115
+ (void)resolveStyle:(id)style state:(id)state;	// 0x34559af1
@end
