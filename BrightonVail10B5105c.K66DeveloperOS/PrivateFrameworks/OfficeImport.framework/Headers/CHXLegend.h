/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface CHXLegend : NSObject {
}
+ (id)chdLegendEntryFromXmlLegendEntryElement:(xmlNode *)xmlLegendEntryElement defaultFont:(id)font state:(id)state;	// 0x37a4d9ad
+ (id)chdLegendFromXmlLegendElement:(xmlNode *)xmlLegendElement state:(id)state;	// 0x37a46609
+ (int)chdLegendPositionFromXmlLegendPositionElement:(xmlNode *)xmlLegendPositionElement;	// 0x37a46911
+ (void)setDefaultLegendBounds:(id)bounds legendPosition:(int)position;	// 0x37a46a05
@end

