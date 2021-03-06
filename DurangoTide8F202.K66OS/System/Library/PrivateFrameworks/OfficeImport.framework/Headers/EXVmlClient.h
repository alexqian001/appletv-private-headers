/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OAVClient.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EXVmlClient : NSObject <OAVClient> {
}
+ (id)edTextBoxForVmlTextInShape:(xmlNode *)shape to:(id)to state:(id)state;	// 0x31ad93e9
+ (void)readAnchor:(xmlNode *)anchor to:(id)to;	// 0x31ad99c9
+ (void)readClientDataFromGroup:(xmlNode *)group toGroup:(id)group2 state:(id)state;	// 0x31ad93e1
+ (void)readClientDataFromShape:(xmlNode *)shape toGraphic:(id)graphic state:(id)state;	// 0x31ad9631
+ (id)readComment:(xmlNode *)comment to:(id)to;	// 0x31ad9479
+ (int)vmlSupportLevel;	// 0x31ad93e5
@end

