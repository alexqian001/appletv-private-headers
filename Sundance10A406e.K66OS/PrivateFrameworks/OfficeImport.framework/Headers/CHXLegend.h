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
+ (id)chdLegendEntryFromXmlLegendEntryElement:(xmlNode *)xmlLegendEntryElement defaultFont:(id)font state:(id)state;	// 0x350019ad
+ (id)chdLegendFromXmlLegendElement:(xmlNode *)xmlLegendElement state:(id)state;	// 0x34ffa609
+ (int)chdLegendPositionFromXmlLegendPositionElement:(xmlNode *)xmlLegendPositionElement;	// 0x34ffa911
+ (void)setDefaultLegendBounds:(id)bounds legendPosition:(int)position;	// 0x34ffaa05
@end
