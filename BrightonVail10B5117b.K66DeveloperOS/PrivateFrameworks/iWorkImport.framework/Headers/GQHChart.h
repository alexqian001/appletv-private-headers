/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQHChart : NSObject {
}
+ (CFStringRef)createChartImageUrlString:(id)string state:(id)state;	// 0x36ad22a1
+ (id)geometry:(id)geometry;	// 0x36ad20e1
+ (int)handleFloatingChart:(id)chart state:(id)state;	// 0x36ad20f5
+ (int)handleInlineChart:(id)chart state:(id)state;	// 0x36ad2275
+ (int)handleInlineChart:(id)chart state:(id)state imageUrl:(CFStringRef)url;	// 0x36ad2321
+ (char *)pdfId:(id)anId;	// 0x36ad20cd
+ (CFDataRef)renderChart:(id)chart;	// 0x36ad2299
@end
